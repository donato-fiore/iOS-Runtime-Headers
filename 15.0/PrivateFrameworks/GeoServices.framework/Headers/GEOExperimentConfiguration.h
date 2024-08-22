// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOEXPERIMENTCONFIGURATION_H
#define GEOEXPERIMENTCONFIGURATION_H

@class NSString;
@protocol GEOExperimentServerProxyDelegate, GEOExperimentServerProxy;

#import <Foundation/Foundation.h>

#import "GEOABAssignmentResponse.h"
#import "GEOObserverHashTable.h"

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate>

 {
    id<GEOExperimentServerProxy> *_serverProxy;
    GEOABAssignmentResponse *_experimentsInfo;
    os_unfair_lock_s _experimentsInfoLock;
    GEOObserverHashTable *_experimentObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedConfiguration;
+(void)useProxy:(Class)arg0 ;
-(id)_debug_bucketId;
-(id)_debug_configurationDate;
-(id)_debug_customQuerySubstringForType:(NSInteger)arg0 dispatcherRequestType:(int)arg1 ;
-(id)_debug_datasetId;
-(id)_mapsAbClientMetadata;
-(id)_parsecClientMetadata;
-(id)_reportAProblemClientMetadata;
-(id)_siriClientMetadata;
-(id)clientConfig;
-(id)clientConfigurationValueForKey:(id)arg0 ;
-(id)detailedDescription;
-(id)detailedDescriptionDictionaryRepresentation;
-(id)experimentAssignments;
-(id)experimentURLForURL:(id)arg0 requestKind:(struct ? )arg1 ;
-(id)init;
-(void)_debug_fetchAllAvailableExperiments:(id)arg0 ;
-(void)_debug_forEachExperimentType:(id)arg0 ;
-(void)_debug_forceUpdate;
-(void)_debug_setActiveExperimentBranch:(id)arg0 ;
-(void)_debug_setBucketIdDictionaryRepresentation:(id)arg0 ;
-(void)_debug_setCustomQuerySubstring:(id)arg0 forExperimentType:(NSInteger)arg1 dispatcherRequestType:(int)arg2 ;
-(void)_fetchAllAvailableExperimentsResponse:(id)arg0 ;
-(void)_setActiveExperimentBranchDictionaryRepresentation:(id)arg0 ;
-(void)abAssignUUIDWithCompletionHandler:(id)arg0 ;
-(void)abAssignUUIDWithSyncCompletionHandler:(id)arg0 ;
-(void)addExperimentObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)refreshDatasetABStatus:(id)arg0 ;
-(void)removeExperimentObserver:(id)arg0 ;
-(void)serverProxy:(id)arg0 didChangeExperimentsInfo:(id)arg1 ;
-(void)updateURLComponents:(id)arg0 forRequestKind:(struct ? )arg1 ;


@end


#endif