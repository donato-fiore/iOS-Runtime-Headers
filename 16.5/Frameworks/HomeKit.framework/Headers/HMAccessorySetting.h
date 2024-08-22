// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSETTING_H
#define HMACCESSORYSETTING_H

@class NSString, NSUUID;
@protocol _HMAccesorySettingDelegate, HMFLogging;


#import "HMSetting.h"
#import "HMAccessorySettingGroup.h"
#import "_HMAccessorySetting.h"

@interface HMAccessorySetting : HMSetting <_HMAccesorySettingDelegate, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) HMAccessorySettingGroup *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) _HMAccessorySetting *internal; // ivar: _internal
@property (readonly, copy) NSString *keyPath;
@property (readonly, getter=isReflected) BOOL reflected;
@property (readonly) Class superclass;
@property (readonly) Class valueClass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)logCategory;
+(id)settingForInternal:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isWritable;
-(id)init;
-(id)initWithInternal:(id)arg0 ;
-(id)initWithKey:(id)arg0 properties:(NSUInteger)arg1 value:(id)arg2 ;
-(id)keyPathForSetting:(id)arg0 ;
-(id)logIdentifier;
-(id)value;
-(void)_settingDidUpdateValue:(id)arg0 ;
-(void)_settingWillUpdateValue:(id)arg0 ;
-(void)logAndPostNotification:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;
-(void)settingDidUpdateReflected;
-(void)settingWillUpdateReflected;
-(void)updateReflected:(BOOL)arg0 ;
-(void)updateValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif