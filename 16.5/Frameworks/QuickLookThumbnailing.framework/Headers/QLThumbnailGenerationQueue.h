// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLTHUMBNAILGENERATIONQUEUE_H
#define QLTHUMBNAILGENERATIONQUEUE_H

@class NSOperationQueue, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface QLThumbnailGenerationQueue : NSObject

@property (retain) NSOperationQueue *queue; // ivar: _queue
@property (retain) NSMutableDictionary *queuedURLs; // ivar: _queuedURLs


+(id)sharedInstance;
-(id)init;
-(void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)arg0 atBackgroundPriority:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)arg0 ;


@end


#endif