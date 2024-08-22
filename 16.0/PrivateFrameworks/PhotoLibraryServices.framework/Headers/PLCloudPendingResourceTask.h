// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCLOUDPENDINGRESOURCETASK_H
#define PLCLOUDPENDINGRESOURCETASK_H

@class CPLResourceTransferTask, NSDate, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLCloudPendingResourceTask : NSObject {
    CPLResourceTransferTask *_transferTask;
    NSDate *_lastUpdated;
    BOOL _completed;
    BOOL _transferTaskRemoved;
    NSMutableDictionary *_taskIdentifierToProgressBlock;
    NSMutableDictionary *_taskIdentifierToCompletionHandler;
}




// -(id)initWithProgressBlock:(id)arg0 completionHandler:(unk)arg1 forTaskIdentifier:(id)arg2  ;
-(id)lastUpdated;
-(id)taskIDs;
// -(void)addProgressBlock:(id)arg0 completionHandler:(unk)arg1 withTaskIdentifier:(id)arg2  ;
-(void)cancelTaskWithIdentifier:(id)arg0 ;
-(void)keepAlive;
-(void)reportCompletionWithError:(id)arg0 ;
-(void)reportProgress:(float)arg0 ;
-(void)setTransferTask:(id)arg0 ;


@end


#endif