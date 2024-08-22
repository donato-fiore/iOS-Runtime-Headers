// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIEVENTDEFERRINGBEHAVIOR_SYSTEMSHELL_H
#define _UIEVENTDEFERRINGBEHAVIOR_SYSTEMSHELL_H

@class Default, NSString;
@protocol BSDebugDescriptionProviding, _UIEventDeferringSystemShellBehaviorDelegate;



@interface _UIEventDeferringBehavior_SystemShell : Default <BSDebugDescriptionProviding>

 {
    ? _behaviorDelegateFlags;
    id<_UIEventDeferringSystemShellBehaviorDelegate> *_systemShellBehaviorDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;
-(BOOL)shouldSuppressRemoteRuleForOwningElement:(id)arg0 inEnvironment:(id)arg1 ;
-(BOOL)wantsLocalCompatibilityRules;
-(NSInteger)compareRemoteRuleOwningElement:(id)arg0 toElement:(id)arg1 inEnvironment:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithEventDeferringManager:(id)arg0 ;
-(id)systemShellBehaviorDelegate;
-(void)setSystemShellBehaviorDelegate:(id)arg0 ;


@end


#endif