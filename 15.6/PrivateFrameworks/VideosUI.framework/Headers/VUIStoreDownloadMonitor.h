// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUISTOREDOWNLOADMONITOR_H
#define VUISTOREDOWNLOADMONITOR_H

@class NSMutableArray, NSString, SSDownload, SSDownloadManager, TVPStateMachine;
@protocol SSDownloadManagerObserver;

#import <Foundation/Foundation.h>


@interface VUIStoreDownloadMonitor : NSObject <SSDownloadManagerObserver>



@property (retain, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SSDownload *download; // ivar: _download
@property (retain, nonatomic) SSDownloadManager *downloadManager; // ivar: _downloadManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithDownload:(id)arg0 downloadManager:(id)arg1 ;
-(void)_registerStateMachineHandlers;
-(void)dealloc;
-(void)downloadManager:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)downloadManagerDownloadsDidChange:(id)arg0 ;
-(void)waitForDownloadToBecomePlayableWithCompletion:(id)arg0 ;


@end


#endif