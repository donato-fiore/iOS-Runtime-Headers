// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSHARINGREMAKER_H
#define PFSHARINGREMAKER_H

@class NSMutableDictionary, NSError, NSOperationQueue, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PFSharingRemakerOptions.h"

@interface PFSharingRemaker : NSObject {
    NSObject<OS_dispatch_queue> *_remakerQueue;
    float _progress;
    NSMutableDictionary *_inProgressOperationByUUID;
    BOOL _remakerSuccess;
    BOOL _abortedRemaker;
    BOOL _cancelledRemaker;
    NSError *_remakerError;
    NSOperationQueue *_remakeOperationQueue;
    NSObject<OS_dispatch_source> *_progressTimer;
}


@property (copy, nonatomic, setter=_setCompletionHandler:) id *_completionHandler; // ivar: __completionHandler
@property (retain, nonatomic, setter=_setOperations:) NSArray *_operations; // ivar: __operations
@property (retain, nonatomic, setter=_setOptions:) PFSharingRemakerOptions *_options; // ivar: __options
@property (copy, nonatomic, setter=_setProgressHandler:) id *_progressHandler; // ivar: __progressHandler


+(id)remakerWithOperations:(id)arg0 options:(id)arg1 ;
-(CGFloat)_computeProgress;
-(id)init;
-(void)_abortWithUnderlyingOperationError:(id)arg0 ;
-(void)_callProgressBlockWithProgress:(CGFloat)arg0 ;
-(void)_completeOperationWithUUID:(id)arg0 ;
-(void)_configurePhotoOperation:(id)arg0 withUUID:(id)arg1 dispatchGroup:(id)arg2 ;
-(void)_configureVideoOperation:(id)arg0 withUUID:(id)arg1 dispatchGroup:(id)arg2 ;
-(void)_endSessionWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_updateProgress;
-(void)cancelRemaking;
// -(void)remakeWithProgressHandler:(id)arg0 completionHandler:(unk)arg1  ;


@end


#endif