// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKQLTHUMBNAILQUEUEMANAGER_H
#define WKQLTHUMBNAILQUEUEMANAGER_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface WKQLThumbnailQueueManager : NSObject

@property (readonly, retain, nonatomic) NSOperationQueue *queue; // ivar: _queue


+(id)sharedInstance;
-(id)init;
-(void)dealloc;


@end


#endif