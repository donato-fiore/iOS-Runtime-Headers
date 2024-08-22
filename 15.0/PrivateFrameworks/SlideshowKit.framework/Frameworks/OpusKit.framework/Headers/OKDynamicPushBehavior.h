// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKDYNAMICPUSHBEHAVIOR_H
#define OKDYNAMICPUSHBEHAVIOR_H

@class UIPushBehavior, NSString;
@protocol OKSettingsSupport;



@interface OKDynamicPushBehavior : UIPushBehavior <OKSettingsSupport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)supportedSettings;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif