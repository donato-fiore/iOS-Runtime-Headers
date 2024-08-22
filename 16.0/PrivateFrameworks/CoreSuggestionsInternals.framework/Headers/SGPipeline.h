// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGPIPELINE_H
#define SGPIPELINE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SGPipeline : NSObject {
    NSDictionary *_dissectorsAndDependencies;
}




+(id)customPipeline:(id)arg0 ;
+(id)deliveriesTestingPipeline;
+(id)dependencyClassesForDissectorClass:(Class)arg0 ;
+(id)emptyPipeline;
+(id)fullPipeline;
+(id)parallelPipeline:(id)arg0 ;
+(id)remindersTestingPipeline;
+(id)remindersTestingPipelineWithCustomReminderDissector:(id)arg0 ;
+(id)retrainingPipeline;
+(id)sharedBackgroundProcessingQueue;
+(id)sharedBackgroundStorageQueue;
+(void)_delayedResetCachesAndModels;
+(void)_resetCachesAndModels;
+(void)initialize;
-(id)_dissectOperations:(id)arg0 block:(id)arg1 ;
-(id)_dissectOperations:(id)arg0 inContext:(id)arg1 ;
-(id)dissectOperationsForInteraction:(id)arg0 entity:(id)arg1 inContext:(id)arg2 ;
-(id)dissectOperationsForMailMessage:(id)arg0 entity:(id)arg1 inContext:(id)arg2 ;
-(id)dissectOperationsForTextMessage:(id)arg0 entity:(id)arg1 inContext:(id)arg2 ;
-(id)dissectors;
-(id)geocodeOperation:(id)arg0 withDependencies:(id)arg1 ;
-(id)storeOperation:(id)arg0 spotlightBundleIdentifier:(id)arg1 spotlightUniqueIdentifier:(id)arg2 spotlightDomainIdentifier:(id)arg3 withStore:(id)arg4 dependencies:(id)arg5 ;
-(id)storeOperation:(id)arg0 spotlightBundleIdentifier:(id)arg1 spotlightUniqueIdentifier:(id)arg2 spotlightDomainIdentifier:(id)arg3 withStore:(id)arg4 dependencies:(id)arg5 originalEnrichmentCount:(NSUInteger)arg6 ;
-(id)storeOperation:(id)arg0 withStore:(id)arg1 dependencies:(id)arg2 ;
-(id)storeOperation:(id)arg0 withStore:(id)arg1 dependencies:(id)arg2 originalEnrichmentCount:(NSUInteger)arg3 ;
-(id)verificationOperation:(id)arg0 overrideVerificationStatus:(id)arg1 withDependencies:(id)arg2 ;
-(id)verificationOperation:(id)arg0 withDependencies:(id)arg1 ;
-(void)_dissectEntity:(id)arg0 inContext:(id)arg1 andThen:(id)arg2 ;
-(void)dissect:(id)arg0 ;
-(void)dissect:(id)arg0 andStore:(id)arg1 ;
-(void)dissect:(id)arg0 inContext:(id)arg1 ;
-(void)dissectAndStore:(id)arg0 inContext:(id)arg1 ;
-(void)dissectAndStoreEntity:(id)arg0 inContext:(id)arg1 ;
-(void)dissectAndStoreEntity:(id)arg0 inContext:(id)arg1 destinationStore:(id)arg2 ;
-(void)dissectAndStoreSpotlightEntity:(id)arg0 bundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 domainIdentifier:(id)arg3 inContext:(id)arg4 ;
-(void)dissectEntity:(id)arg0 andStore:(id)arg1 ;
-(void)logDKIMStatus:(NSInteger)arg0 forPipelineEntity:(id)arg1 ;


@end


#endif