// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSTATUSBARPARTVISIBILITYASSERTION_H
#define SBSTATUSBARPARTVISIBILITYASSERTION_H

@class BSSimpleAssertion, UIStatusBar, NSMutableSet, NSString;
@protocol BSDescriptionProviding;



@interface SBStatusBarPartVisibilityAssertion : BSSimpleAssertion <BSDescriptionProviding>

 {
    UIStatusBar *_statusBar;
    NSMutableSet *_hiddenParts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isHidingStatusBarPartWithIdentifier:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 statusBar:(id)arg1 forReason:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_setStatusBarPartWithIdentifier:(id)arg0 hidden:(BOOL)arg1 animatedWithDuration:(CGFloat)arg2 ;
-(void)setStatusBarPartWithIdentifier:(id)arg0 hidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setStatusBarPartWithIdentifier:(id)arg0 hidden:(BOOL)arg1 animatedWithDuration:(CGFloat)arg2 ;


@end


#endif