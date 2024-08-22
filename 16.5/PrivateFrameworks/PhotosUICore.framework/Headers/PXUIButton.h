// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXUIBUTTON_H
#define PXUIBUTTON_H

@class UIButton, NSString, UIPointerInteraction;
@protocol UIPointerInteractionDelegate;


#import "PXUIButtonConfiguration.h"

@interface PXUIButton : UIButton <UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (copy, nonatomic) PXUIButtonConfiguration *px_configuration; // ivar: _px_configuration
@property (readonly) Class superclass;


+(id)buttonWithWithCursorEffect:(NSInteger)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_pointerRectForCurrentState;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif