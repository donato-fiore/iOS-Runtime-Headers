// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTILEGROUPACTIVATIONSESSION_H
#define GEOTILEGROUPACTIVATIONSESSION_H

@class NSString, NSSet, NSArray, NSProgress;
@protocol GEOPListStateCapturing, NSProgressReporting, OS_dispatch_queue, GEOTileGroupActivationSessionDelegate;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestConfiguration.h"
#import "GEOTileGroup.h"
#import "GEOResources.h"
#import "GEOActiveTileGroup.h"
#import "GEODataSetDescription.h"

@interface GEOTileGroupActivationSession : NSObject <GEOPListStateCapturing, NSProgressReporting>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    GEOOnce_s _started;
    GEOOnce_s _finished;
    BOOL _canceled;
    NSUInteger _phase;
    id<GEOTileGroupActivationSessionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    GEOResourceManifestConfiguration *_configuration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    NSString *_environmentName;
    GEOActiveTileGroup *_activeTileGroup;
    NSSet *_activeScales;
    NSSet *_activeScenarios;
    GEODataSetDescription *_dataSet;
    NSArray *_migrators;
    NSInteger _updateType;
    id *_transaction;
    NSUInteger _stateCaptureHandle;
    NSArray *_mandatoryMigrationTasks;
    NSArray *_opportunisticMigrationTasks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)initWithIdentifier:(id)arg0 configuration:(id)arg1 tileGroup:(id)arg2 inResourceManifest:(id)arg3 environmentName:(id)arg4 oldTileGroup:(id)arg5 activeScales:(id)arg6 activeScenarios:(id)arg7 dataSet:(id)arg8 migrators:(id)arg9 updateType:(NSInteger)arg10 delegate:(id)arg11 delegateQueue:(id)arg12 ;
-(void)cancel;
-(void)dealloc;
-(void)start;


@end


#endif