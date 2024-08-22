// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEMANIFESTSYNC_H
#define DEMANIFESTSYNC_H

@class NSString, NSMutableDictionary, NSURLSession;
@protocol NSURLSessionDownloadDelegate;

#import <Foundation/Foundation.h>

#import "DEManifest.h"
#import "DEUpdater.h"

@interface DEManifestSync : NSObject <NSURLSessionDownloadDelegate>



@property (retain, nonatomic) NSString *backgroundId; // ivar: _backgroundId
@property (nonatomic) BOOL checkOverlay; // ivar: _checkOverlay
@property (nonatomic) BOOL cleanStorage; // ivar: _cleanStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL downloadFailure; // ivar: _downloadFailure
@property (retain, nonatomic) NSMutableDictionary *downloads; // ivar: _downloads
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *inProgress; // ivar: _inProgress
@property (retain, nonatomic) DEManifest *manifest; // ivar: _manifest
@property (copy, nonatomic) id *postSyncBlock; // ivar: _postSyncBlock
@property (retain, nonatomic) NSString *priorBackgroundId; // ivar: _priorBackgroundId
@property (nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;
@property (retain, nonatomic) DEUpdater *updater; // ivar: _updater
@property (retain, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


-(BOOL)isLatest;
-(BOOL)startDownload:(id)arg0 ;
-(id)init;
-(id)initWithManifest:(id)arg0 updater:(id)arg1 ;
-(id)initWithManifest:(id)arg0 updater:(id)arg1 backgroundId:(id)arg2 priorBackgroundId:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0 ;
-(void)backgroundSync;
-(void)checkOverlay:(id)arg0 overlayChecks:(id)arg1 workArray:(id)arg2 postFileBlock:(id)arg3 ;
-(void)clean;
-(void)cleanStorage:(id)arg0 removes:(id)arg1 workArray:(id)arg2 postFileBlock:(id)arg3 ;
-(void)cleanupURLSession;
-(void)directoryClean:(id)arg0 ;
-(void)directorySync:(id)arg0 ;
// -(void)doIfLatest:(id)arg0 inBackground:(unk)arg1 elseDo:(BOOL)arg2  ;
-(void)handlePostSyncBlock;
-(void)sync;
-(void)sync:(id)arg0 ;


@end


#endif