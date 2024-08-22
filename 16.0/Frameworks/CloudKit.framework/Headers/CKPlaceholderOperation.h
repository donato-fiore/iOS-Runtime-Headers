// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPLACEHOLDEROPERATION_H
#define CKPLACEHOLDEROPERATION_H

@class NSOperation, NSDate, NSString;
@protocol OS_dispatch_group;



@interface CKPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> *_group;
    int _executionState;
    BOOL _finishInvoked;
    NSDate *_startDate;
    NSString *_operationID;
    id *_daemonInvokeBlock;
}




-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)description;
-(void)main;
-(void)start;


@end


#endif