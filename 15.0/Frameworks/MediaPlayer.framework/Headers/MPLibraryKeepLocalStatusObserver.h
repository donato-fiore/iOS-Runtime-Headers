// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPLIBRARYKEEPLOCALSTATUSOBSERVER_H
#define MPLIBRARYKEEPLOCALSTATUSOBSERVER_H

@class NSSet, NSString;
@protocol MPMediaDownloadObserver;

#import <Foundation/Foundation.h>

#import "MPLibraryKeepLocalStatusObserverConfiguration.h"

@interface MPLibraryKeepLocalStatusObserver : NSObject <MPMediaDownloadObserver>

 {
    NSSet *_activeDownloads;
    NSSet *_pausedDownloads;
}


@property (retain, nonatomic) MPLibraryKeepLocalStatusObserverConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) MPLibraryActiveKeepLocalStatus currentStatus; // ivar: _currentStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger downloadPausedReason; // ivar: _downloadPausedReason
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *statusBlock; // ivar: _statusBlock
@property (readonly) Class superclass;


-(BOOL)_updateActiveDownloadsAllowingDownloadRemoval:(BOOL)arg0 ;
-(id)init;
-(struct MPLibraryActiveKeepLocalStatus )_calculateCurrentStatus;
-(void)_handleDownloadStateChanged:(id)arg0 ;
-(void)_transientStateDidChangeNotification:(id)arg0 ;
-(void)_updateCurrentStatus;
-(void)dealloc;
-(void)downloadManager:(id)arg0 didChangeDownloadPausedReasonForAssets:(id)arg1 ;
-(void)downloadManager:(id)arg0 didEnqueueAssetDownloads:(id)arg1 didRemoveAssetDownloads:(id)arg2 ;
-(void)downloadManager:(id)arg0 didUpdateDownloadProgress:(id)arg1 ;


@end


#endif