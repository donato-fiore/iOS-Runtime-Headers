// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREMEDIADOWNLOADMONITOR_H
#define COREMEDIADOWNLOADMONITOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CoreMediaDownloadMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _assetDownloadProcessId;
    id *_assetDownloadObserver;
    BOOL _userInitiatedDownloadInProgress;
    BOOL _userInitiatedDownloadInProgressOrHysteresis;
    BOOL _userInitiatedDownloadInHysteresis;
    NSMutableDictionary *_downloads;
}


@property (readonly, nonatomic) int numInHysteresisBackgroundDownloads; // ivar: _numInHysteresisBackgroundDownloads
@property (readonly, nonatomic) int numInHysteresisForegroundDownloads; // ivar: _numInHysteresisForegroundDownloads
@property (readonly, nonatomic) int numInProgressBackgroundDownloads; // ivar: _numInProgressBackgroundDownloads
@property (readonly, nonatomic) int numInProgressForegroundDownloads; // ivar: _numInProgressForegroundDownloads
@property (readonly, nonatomic) int numPausedBackgroundDownloads; // ivar: _numPausedBackgroundDownloads
@property (readonly, nonatomic) int numPausedForegroundDownloads; // ivar: _numPausedForegroundDownloads
@property (readonly, nonatomic) CGFloat userInitiatedDownloadHysteresis; // ivar: _userInitiatedDownloadHysteresis
@property (nonatomic) BOOL userInitiatedDownloadInHysteresis;
@property (nonatomic) BOOL userInitiatedDownloadInProgress;
@property (nonatomic) BOOL userInitiatedDownloadInProgressOrHysteresis;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(id)getState;
-(id)initWithQueue:(id)arg0 ;
-(void)_evaluateProperties;
-(void)_newCoreMediaAssetDownloadEvent:(id)arg0 ;
-(void)_noteCoreMediaAssetDownloadEvent:(NSUInteger)arg0 downloadUUID:(id)arg1 onBehalfOf:(id)arg2 duration:(CGFloat)arg3 ;
-(void)restoreDefaults;
-(void)setConfiguration:(id)arg0 ;


@end


#endif