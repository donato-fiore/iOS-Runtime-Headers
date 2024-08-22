// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPLCDBAR_H
#define TPLCDBAR_H

@class UIView, UIImageView;



@interface TPLCDBar : UIView

@property (readonly) UIImageView *shadowView; // ivar: _shadowView


+(CGFloat)defaultHeight;
+(CGFloat)defaultHeightForOrientation:(NSInteger)arg0 ;
+(id)backgroundImage;
-(id)initWithDefaultSize;
-(id)initWithDefaultSizeForOrientation:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setOrientation:(NSInteger)arg0 updateFrame:(BOOL)arg1 ;


@end


#endif