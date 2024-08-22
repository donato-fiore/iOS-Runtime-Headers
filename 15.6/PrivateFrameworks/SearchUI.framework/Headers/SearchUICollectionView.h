// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUICOLLECTIONVIEW_H
#define SEARCHUICOLLECTIONVIEW_H

@class UICollectionView;
@protocol SearchUICollectionViewSizingDelegate;



@interface SearchUICollectionView : UICollectionView

@property (weak) NSObject<SearchUICollectionViewSizingDelegate> *sizingDelegate; // ivar: _sizingDelegate


-(id)focusGroupIdentifier;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)applySeparatorAppearance:(id)arg0 toSubviewIfNecessary:(id)arg1 ;
-(void)didAddSubview:(id)arg0 ;
-(void)didMoveToWindow;
-(void)setContentSize:(struct CGSize )arg0 ;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif