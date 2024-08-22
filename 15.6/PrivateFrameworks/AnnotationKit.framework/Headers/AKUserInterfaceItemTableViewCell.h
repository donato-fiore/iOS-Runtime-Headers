// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKUSERINTERFACEITEMTABLEVIEWCELL_H
#define AKUSERINTERFACEITEMTABLEVIEWCELL_H

@class UITableViewCell, NSString, UIImageView;
@protocol AKUserInterfaceItem, AKLineWidthChooserUserInterfaceItem, AKInkIsUpdatable;



@interface AKUserInterfaceItemTableViewCell : UITableViewCell <AKUserInterfaceItem, AKLineWidthChooserUserInterfaceItem, AKInkIsUpdatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (readonly) Class superclass;


-(BOOL)wantsInkUpdate;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif