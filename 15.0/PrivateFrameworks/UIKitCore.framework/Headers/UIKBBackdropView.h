// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBBACKDROPVIEW_H
#define UIKBBACKDROPVIEW_H



#import "UIVisualEffectView.h"
#import "UIImage.h"

@interface UIKBBackdropView : UIVisualEffectView

@property (retain, nonatomic) UIImage *imageForCorners; // ivar: _imageForCorners


-(BOOL)_applyCornerMaskToSelf;
-(id)_generateCornerContentsImage:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(int)textEffectsVisibilityLevel;
-(void)_setRenderConfig:(id)arg0 ;
-(void)dealloc;
-(void)transitionToStyle:(NSInteger)arg0 ;
-(void)updateCorners:(NSUInteger)arg0 ;
-(void)updateFrame:(struct CGRect )arg0 withCorners:(NSUInteger)arg1 ;


@end


#endif