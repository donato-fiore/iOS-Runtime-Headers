// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTRESPONDERCONTROLLER_H
#define UIINPUTRESPONDERCONTROLLER_H


#import <Foundation/Foundation.h>

#import "UIResponder.h"
#import "UIWindowScene.h"

@interface UIInputResponderController : NSObject

@property (nonatomic) BOOL automaticAppearanceEnabled; // ivar: _automaticAppearanceEnabled
@property (readonly, nonatomic) BOOL isOnScreen; // ivar: _isOnScreen
@property (readonly, nonatomic) UIResponder *responder; // ivar: _responder
@property (readonly, nonatomic) UIWindowScene *scene; // ivar: _scene
@property (nonatomic) BOOL shouldSuppressInputAssistantUpdates; // ivar: _shouldSuppressInputAssistantUpdates


+(NSInteger)interfaceOrientation;
+(id)activeInputResponderController;
+(void)performOnControllers:(id)arg0 ;
+(void)setInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)verticalOverlapForView:(id)arg0 usingKeyboardInfo:(id)arg1 ;
-(id)_textInputSessionAnalytics;
-(struct CGRect )visibleFrameInView:(id)arg0 ;
-(struct CGRect )visibleInputViewFrameInView:(id)arg0 ;
-(void)_beginDisablingAnimations;
-(void)_endDisablingAnimations;
-(void)addVisibilityObserver:(id)arg0 ;
-(void)assertNo;
-(void)refreshWithLocalMinimumKeyboardHeight:(CGFloat)arg0 ;
-(void)removeVisibilityObserver:(id)arg0 ;


@end


#endif