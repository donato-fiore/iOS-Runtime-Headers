// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIAPREFERENCE_H
#define HMDMEDIAPREFERENCE_H

@class HMFPreference, NSArray, NSString, HMFSystemPreference;
@protocol HMFObject;



@interface HMDMediaPreference : HMFPreference <HMFObject>



@property (readonly, copy) HMFPreference *airPlay2Preference;
@property (readonly, copy) HMFPreference *appleMediaPreference;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFSystemPreference *homeKitPreference; // ivar: _homeKitPreference
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(void)load;
-(BOOL)boolValue;
-(id)initWithKey:(id)arg0 options:(NSUInteger)arg1 defaultValue:(id)arg2 ;
-(id)numberValue;
-(id)stringValue;


@end


#endif