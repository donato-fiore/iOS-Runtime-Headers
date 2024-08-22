// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFOPERATION_H
#define WFOPERATION_H

@class NSOperation, NSDate, NSError;



@interface WFOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}


@property (copy, nonatomic) NSError *error; // ivar: _error


-(BOOL)isFinished;
-(BOOL)isReady;
-(id)description;
-(void)finish;
-(void)start;


@end


#endif