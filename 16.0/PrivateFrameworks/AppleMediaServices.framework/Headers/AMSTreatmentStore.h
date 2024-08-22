// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSTREATMENTSTORE_H
#define AMSTREATMENTSTORE_H


#import <Foundation/Foundation.h>

#import "AMSLRUCache.h"

@interface AMSTreatmentStore : NSObject

@property (readonly) AMSLRUCache *areasCache; // ivar: _areasCache
@property (readonly) AMSLRUCache *treatmentsCache; // ivar: _treatmentsCache


+(BOOL)attemptConnectionInTests;
+(id)defaultTreatmentStore;
+(void)setAttemptConnectionInTests:(BOOL)arg0 ;
-(id)_cachedAreasForNamespace:(id)arg0 ;
-(id)_cachedAreasForTopic:(id)arg0 ;
-(id)_cachedTreatmentForArea:(id)arg0 ;
-(id)_treatmentStoreService;
-(id)areasForNamespaces:(id)arg0 ;
-(id)areasForTopics:(id)arg0 ;
-(id)experimentDataForAreas:(id)arg0 ;
-(id)init;
-(id)synchronizeTreatments;
-(id)treatmentsForAreas:(id)arg0 ;
-(id)treatmentsPayloadForAreas:(id)arg0 ;
-(void)_cacheAreas:(id)arg0 forNamespace:(id)arg1 ;
-(void)_cacheAreas:(id)arg0 forTopic:(id)arg1 ;
-(void)_cacheTreatment:(id)arg0 forArea:(id)arg1 ;
-(void)_treatmentsDidSyncronize:(id)arg0 ;
-(void)dealloc;


@end


#endif