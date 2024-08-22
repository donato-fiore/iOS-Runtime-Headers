// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICREMOTEFILEATTACHMENTDOWNLOADER_H
#define ICREMOTEFILEATTACHMENTDOWNLOADER_H

@class NSOperationQueue, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ICRemoteFileAttachmentDownloader : NSObject

@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSMutableDictionary *operationsByAttachmentIdentifier; // ivar: _operationsByAttachmentIdentifier


+(BOOL)needsToDownloadRemoteFileAttachments;
+(id)allUndownloadedLegacyAttachmentsInContext:(id)arg0 ;
+(id)sharedDownloader;
+(void)initializeDownloaderAfterDelayIfNecessary;
+(void)releaseSharedDownloaderIfPossible;
-(id)init;
-(void)dealloc;
-(void)downloadRemoteFileForAttachment:(id)arg0 ;
-(void)downloadRemoteFileForAttachmentObjectID:(id)arg0 ;
-(void)downloadUndownloadedLegacyAttachments;
-(void)reachabilityChanged:(id)arg0 ;
-(void)resumeDownloadsAfterDelay;


@end


#endif