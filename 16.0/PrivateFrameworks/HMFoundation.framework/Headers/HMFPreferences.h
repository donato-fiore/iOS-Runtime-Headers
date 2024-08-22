// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFPREFERENCES_H
#define HMFPREFERENCES_H

@class NSMutableDictionary, NSArray, NSString;
@protocol HMFObject;


#import "HMFObject.h"
#import "HMFClassRegistry.h"

@interface HMFPreferences : HMFObject <HMFObject>

 {
    os_unfair_recursive_lock_s _lock;
    NSMutableDictionary *_preferences;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) HMFClassRegistry *classRegistry; // ivar: _classRegistry
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *preferences;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(Class)preferenceClassForPreferenceKey:(id)arg0 ;
+(id)defaultValueForPreferenceKey:(id)arg0 ;
+(id)defaultValues;
+(id)sharedPreferences;
+(void)setDefaultValue:(id)arg0 forPreferenceKey:(id)arg1 ;
+(void)setPreferenceClass:(Class)arg0 forPreferenceKey:(id)arg1 ;
-(Class)preferenceClassForPreferenceKey:(id)arg0 ;
-(id)init;
-(id)preferenceForKey:(id)arg0 ;
-(void)setPreferenceClass:(Class)arg0 forPreferenceKey:(id)arg1 ;


@end


#endif