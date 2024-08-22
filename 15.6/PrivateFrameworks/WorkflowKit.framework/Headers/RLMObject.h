// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMOBJECT_H
#define RLMOBJECT_H

@class NSString;
@protocol RLMThreadConfined;


#import "RLMObjectBase.h"
#import "RLMObjectSchema.h"
#import "RLMRealm.h"

@interface RLMObject : RLMObjectBase <RLMThreadConfined>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) RLMObjectSchema *objectSchema;
@property (readonly, nonatomic) RLMRealm *realm;
@property (readonly) Class superclass;


+(id)allObjects;
+(id)allObjectsInRealm:(id)arg0 ;
+(id)className;
+(id)createInDefaultRealmWithValue:(id)arg0 ;
+(id)createInRealm:(id)arg0 withValue:(id)arg1 ;
+(id)createOrUpdateInDefaultRealmWithValue:(id)arg0 ;
+(id)createOrUpdateInRealm:(id)arg0 withValue:(id)arg1 ;
+(id)createOrUpdateModifiedInDefaultRealmWithValue:(id)arg0 ;
+(id)createOrUpdateModifiedInRealm:(id)arg0 withValue:(id)arg1 ;
+(id)defaultPropertyValues;
+(id)ignoredProperties;
+(id)indexedProperties;
+(id)linkingObjectsProperties;
+(id)objectForPrimaryKey:(id)arg0 ;
+(id)objectInRealm:(id)arg0 forPrimaryKey:(id)arg1 ;
+(id)objectsInRealm:(id)arg0 where:(id)arg1 ;
+(id)objectsInRealm:(id)arg0 where:(id)arg1 args:(char *)arg2 ;
+(id)objectsInRealm:(id)arg0 withPredicate:(id)arg1 ;
+(id)objectsWhere:(id)arg0 ;
+(id)objectsWhere:(id)arg0 args:(char *)arg1 ;
+(id)objectsWithPredicate:(id)arg0 ;
+(id)primaryKey;
+(id)requiredProperties;
-(BOOL)isEqualToObject:(id)arg0 ;
-(id)addNotificationBlock:(id)arg0 ;
-(id)init;
-(id)initWithRealm:(id)arg0 schema:(id)arg1 ;
-(id)initWithValue:(id)arg0 ;
-(id)initWithValue:(id)arg0 schema:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif