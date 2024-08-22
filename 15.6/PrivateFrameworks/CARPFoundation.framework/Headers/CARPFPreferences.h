// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFPREFERENCES_H
#define CARPFPREFERENCES_H

@class NSMutableDictionary, NSArray, NSString;
@protocol CARPFObject;


#import "CARPFObject.h"
#import "CARPFClassRegistry.h"

@interface CARPFPreferences : CARPFObject <CARPFObject>

 {
    os_unfair_recursive_lock_s _lock;
    NSMutableDictionary *_preferences;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *carpf_privateDescription;
@property (readonly, copy) NSString *carpf_shortDescription;
@property (readonly) CARPFClassRegistry *classRegistry; // ivar: _classRegistry
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *preferences;
@property (readonly, copy) NSString *propertyDescription;
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