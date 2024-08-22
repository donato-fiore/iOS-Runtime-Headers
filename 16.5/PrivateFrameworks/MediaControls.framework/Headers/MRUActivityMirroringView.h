// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUACTIVITYMIRRORINGVIEW_H
#define MRUACTIVITYMIRRORINGVIEW_H

@class UIView, UIButton, UIImage, UIImageView, NSString, BSUIEmojiLabelView, UILabel, CCUICAPackageView;


#import "MRUActivityAccessoryView.h"

@interface MRUActivityMirroringView : UIView

@property (readonly, nonatomic) UIButton *button; // ivar: _button
@property (retain, nonatomic) UIImage *deviceImage; // ivar: _deviceImage
@property (retain, nonatomic) UIImageView *deviceImageView; // ivar: _deviceImageView
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) BSUIEmojiLabelView *deviceNameView; // ivar: _deviceNameView
@property (retain, nonatomic) UILabel *headerLabel; // ivar: _headerLabel
@property (readonly, nonatomic) MRUActivityAccessoryView *leadingView; // ivar: _leadingView
@property (retain, nonatomic) CCUICAPackageView *packageView; // ivar: _packageView
@property (retain, nonatomic) NSString *state; // ivar: _state
@property (readonly, nonatomic) MRUActivityAccessoryView *trailingView; // ivar: _trailingView


-(CGFloat)preferredHeightForBottomSafeArea;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)updateContentSizeCategory;
-(void)updateDeviceSymbolConfiguration;
-(void)updatePackageScale;
-(void)updateVisibilty;


@end


#endif