// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSETTINGSCONTROLLERDEPENDENCYFACTORY_H
#define HMDACCESSORYSETTINGSCONTROLLERDEPENDENCYFACTORY_H

@class HMFObject;
@protocol HMDAccessorySettingsControllerDependencyFactory;



@interface HMDAccessorySettingsControllerDependencyFactory : HMFObject <HMDAccessorySettingsControllerDependencyFactory>





-(id)createMessageHandlerWithQueue:(id)arg0 delegate:(id)arg1 ;
-(id)settingModelForUpdateWithIdentifier:(id)arg0 parent:(id)arg1 value:(id)arg2 configNumber:(id)arg3 ;
-(id)timerWithReason:(NSInteger)arg0 interval:(CGFloat)arg1 ;
-(void)assertWithCondition:(BOOL)arg0 message:(id)arg1 ;


@end


#endif