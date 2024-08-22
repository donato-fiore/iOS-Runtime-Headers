// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAIRPLAY2PREFERENCE_H
#define HMDAIRPLAY2PREFERENCE_H

@class HMFPreference, HMFSystemPreference, NSArray, NSString;
@protocol HMFObject;



@interface HMDAirPlay2Preference : HMFPreference <HMFObject>



@property (readonly) HMFSystemPreference *airPlayPreference; // ivar: _airPlayPreference
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFSystemPreference *homeKitPreference; // ivar: _homeKitPreference
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(void)loadEnableAirPlay2Accessories;
-(BOOL)boolValue;
-(id)initWithKey:(id)arg0 options:(NSUInteger)arg1 defaultValue:(id)arg2 ;
-(id)numberValue;
-(id)stringValue;


@end


#endif