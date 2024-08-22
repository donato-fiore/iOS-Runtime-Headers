// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPLACEHOLDEROPERATION_H
#define CKDPLACEHOLDEROPERATION_H

@class NSOperation, NSString, NSDate, NSOperationQueue;
@protocol OS_dispatch_group;


#import "CKDContainer.h"
#import "CKDOperation.h"

@interface CKDPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> *_group;
    int _executionState;
}


@property (readonly, weak, nonatomic) CKDContainer *container;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, nonatomic) CKDOperation *realOperation; // ivar: _realOperation
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSOperationQueue *targetOperationQueue; // ivar: _targetOperationQueue


-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)_runDurationString;
-(id)ckShortDescription;
-(id)description;
-(id)initWithOperation:(id)arg0 targetOperationQueue:(id)arg1 ;
-(id)statusReportWithIndent:(NSUInteger)arg0 ;
-(void)cancel;
-(void)main;
-(void)start;
-(void)transitionToExecuting;
-(void)transitionToFinished;


@end


#endif