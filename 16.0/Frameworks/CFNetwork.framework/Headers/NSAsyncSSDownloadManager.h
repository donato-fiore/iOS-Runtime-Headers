// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSASYNCSSDOWNLOADMANAGER_H
#define NSASYNCSSDOWNLOADMANAGER_H

@class SSDownloadManager, NSOperationQueue, NSMutableDictionary, NSString;
@protocol SSDownloadManagerObserver;

#import <Foundation/Foundation.h>


@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver>

 {
    SSDownloadManager *_manager;
    NSOperationQueue *_queue;
    NSMutableDictionary *_downloads;
    BOOL _reconnectInProgress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_attemptReconnect;
-(void)dealloc;
-(void)downloadManager:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)downloadManagerDownloadsDidChange:(id)arg0 ;


@end


#endif