// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOEXPERIMENTSERVERREMOTEPROXY_H
#define GEOEXPERIMENTSERVERREMOTEPROXY_H

@class NSString;
@protocol GEOExperimentServerProxy, GEOExperimentServerProxyDelegate;

#import <Foundation/Foundation.h>

#import "GEOABAssignmentResponse.h"

@interface GEOExperimentServerRemoteProxy : NSObject <GEOExperimentServerProxy>

 {
    GEOABAssignmentResponse *_experimentsInfo;
    os_unfair_lock_s _experimentsInfoLock;
    int _experimentsChangedToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEOExperimentServerProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)_debug_fetchAllAvailableExperiments:(id)arg0 ;
-(void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg0 ;
-(void)_debug_setBucketIdDictionaryRepresentation:(id)arg0 ;
-(void)_debug_setQuerySubstring:(id)arg0 forExperimentType:(NSInteger)arg1 dispatcherRequestType:(int)arg2 ;
-(void)abAssignUUIDWithCompletionHandler:(id)arg0 ;
-(void)abAssignUUIDWithSyncCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)forceUpdate;
-(void)refreshDatasetABStatus:(id)arg0 ;


@end


#endif