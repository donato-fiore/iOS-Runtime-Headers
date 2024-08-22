// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMOBJECTBASE_H
#define RLMOBJECTBASE_H

@class NSString;
@protocol RLMThreadConfined, RLMThreadConfined_Private;

#import <Foundation/Foundation.h>

#import "RLMRealm.h"
#import "RLMObjectSchema.h"

@interface RLMObjectBase : NSObject <RLMThreadConfined, RLMThreadConfined_Private>

 {
    BasicRow<realm::Table> _row;
    *void _observationInfo;
    *void _info;
    RLMRealm *_realm;
    RLMObjectSchema *_objectSchema;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) id *objectiveCMetadata;
@property (readonly, nonatomic) RLMRealm *realm;
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)shouldIncludeInDefaultSchema;
+(Class)objectUtilClass:(BOOL)arg0 ;
+(id)className;
+(id)objectWithThreadSafeReference:(struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> )arg0 metadata:(id)arg1 realm:(id)arg2 ;
+(id)sharedSchema;
+(void)initializeLinkedObjectSchemas;
-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionWithMaxDepth:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithRealm:(id)arg0 schema:(id)arg1 ;
-(id)initWithValue:(id)arg0 schema:(id)arg1 ;
-(id)mutableArrayValueForKey:(id)arg0 ;
-(id)objectSchema;
-(id)valueForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> )makeThreadSafeReference;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif