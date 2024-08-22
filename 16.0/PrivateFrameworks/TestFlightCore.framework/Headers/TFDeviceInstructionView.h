// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFDEVICEINSTRUCTIONVIEW_H
#define TFDEVICEINSTRUCTIONVIEW_H

@class UIView, UIImageView;



@interface TFDeviceInstructionView : UIView

@property (readonly, nonatomic) UIImageView *deviceImageView; // ivar: _deviceImageView


+(CGFloat)cornerRadius;
+(id)backgroundColor;
+(struct UIEdgeInsets )imageLayoutInsets;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)displayDeviceImage:(id)arg0 inOrientation:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)updateCurrentDeviceImageToOrientation:(NSInteger)arg0 ;


@end


#endif