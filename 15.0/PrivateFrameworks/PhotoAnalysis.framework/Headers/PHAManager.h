// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAMANAGER_H
#define PHAMANAGER_H

@class PHAMonitoring, CPAnalytics, NSString, PGManager, NSURL, NSMutableDictionary, PHPhotoLibrary;
@protocol PHAServiceOperationHandling;

#import <Foundation/Foundation.h>

#import "PHAAssetResourceDataLoader.h"
#import "PHAExecutive.h"
#import "PHAJobCoordinator.h"

@interface PHAManager : NSObject <PHAServiceOperationHandling>

 {
    PHAMonitoring *_monitoring;
    PHAAssetResourceDataLoader *_dataLoader;
    NSUInteger _processedAssetCount;
}


@property (readonly) CPAnalytics *analytics; // ivar: _analytics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) PHAExecutive *executive; // ivar: _executive
@property (readonly) PGManager *graphManager; // ivar: _graphManager
@property (readonly) NSUInteger hash;
@property (readonly) PHAJobCoordinator *jobCoordinator; // ivar: _jobCoordinator
@property (readonly) NSURL *libraryURL; // ivar: _libraryURL
@property (retain) NSMutableDictionary *photoAnalysisWorkersByType; // ivar: _photoAnalysisWorkersByType
@property (readonly) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, getter=isQuiescent) BOOL quiescent;
@property (readonly) Class superclass;


+(id)allWorkerClasses;
+(void)enumerateWorkerClassesUsingBlock:(id)arg0 ;
-(BOOL)isReadyForAnalysis;
-(BOOL)photosIsConnected;
-(BOOL)turboIsEnabled;
-(id)clientDispatcher;
-(id)faceClassificationServiceWorker;
-(id)faceProcessingServiceWorker;
-(id)init;
-(id)initWithPhotoLibraryURL:(id)arg0 executive:(id)arg1 ;
-(id)monitoring;
-(id)statusAsDictionary;
-(id)storytellingWorker;
-(void)backgroundActivityDidBegin;
-(void)checkForQuiescence;
-(void)disableTurboMode;
-(void)dumpAnalysisStatusWithContext:(id)arg0 reply:(id)arg1 ;
-(void)enableTurboMode;
-(void)enumerateWorkersUsingBlock:(id)arg0 ;
-(void)handleOperation:(id)arg0 ;
-(void)reportTurboEnabledWithContext:(id)arg0 reply:(id)arg1 ;
-(void)shutdown;
-(void)startTurboProcessing;
-(void)stopAllBackgroundActivities;
-(void)stopBackgroundActivity;
-(void)stopBackgroundActivityWaitForCompletion;
-(void)triggerBackgroundActivity;
-(void)turboConstraintsWereRemoved;


@end


#endif