// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPERSONTABLEVIEWCELL_H
#define PXPERSONTABLEVIEWCELL_H

@class UITableViewCell, UIImage;



@interface PXPersonTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImage *personIcon;


+(CGFloat)avatarHeight;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_updateUI;
-(void)layoutSubviews;


@end


#endif