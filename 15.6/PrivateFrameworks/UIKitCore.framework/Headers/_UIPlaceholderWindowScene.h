// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPLACEHOLDERWINDOWSCENE_H
#define _UIPLACEHOLDERWINDOWSCENE_H

@class UIScreenBasedWindowScene, NSString;
@protocol _UIContextBinderContextCreationPolicyHolding;



@interface _UIPlaceholderWindowScene : UIScreenBasedWindowScene <_UIContextBinderContextCreationPolicyHolding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)alwaysKeepContexts;
+(BOOL)autoinvalidates;
+(BOOL)shouldAllowComponents;
-(BOOL)_permitContextCreationForBindingDescription:(struct ? )arg0 ;


@end


#endif