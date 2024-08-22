// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSBREACHABILITYMANAGERACCESSIBILITY_H
#define AXSBREACHABILITYMANAGERACCESSIBILITY_H

@class super;



@interface AXSBReachabilityManagerAccessibility : super



+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg0 ;
-(BOOL)_axReachabilityEnabled;
-(id)_axDictionaryOfAnimationProperties;
-(id)_axReachabilitySettings;
-(void)_axAddReachabilityProperty:(id)arg0 toDictionary:(id)arg1 ;
-(void)_axSendReachabilityToggledActionWithPayload:(id)arg0 ;
-(void)_notifyObserversReachabilityModeActive:(BOOL)arg0 ;
-(void)_setKeepAliveTimer;


@end


#endif