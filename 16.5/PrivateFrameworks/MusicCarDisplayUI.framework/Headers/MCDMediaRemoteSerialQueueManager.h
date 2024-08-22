// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCDMEDIAREMOTESERIALQUEUEMANAGER_H
#define MCDMEDIAREMOTESERIALQUEUEMANAGER_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface MCDMediaRemoteSerialQueueManager : NSObject

@property (retain, nonatomic) NSOperationQueue *mediaRemoteSerialQueue; // ivar: _mediaRemoteSerialQueue


+(id)sharedInstance;
-(id)init;
// -(void)addOperation:(id)arg0 cancelAllOperations:(unk)arg1  ;
-(void)cancelAllOperations;


@end


#endif