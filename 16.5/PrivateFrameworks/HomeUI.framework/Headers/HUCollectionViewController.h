// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCOLLECTIONVIEWCONTROLLER_H
#define HUCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSString, NSMapTable;
@protocol HUResizableCellDelegate;



@interface HUCollectionViewController : UICollectionViewController <HUResizableCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *installedChildViewControllersKeyedByCell; // ivar: _installedChildViewControllersKeyedByCell
@property (readonly) Class superclass;


-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)didUpdateRequiredHeightForCell:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;


@end


#endif