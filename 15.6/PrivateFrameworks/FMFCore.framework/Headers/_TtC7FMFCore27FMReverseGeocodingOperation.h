// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7FMFCORE27FMREVERSEGEOCODINGOPERATION_H
#define _TTC7FMFCORE27FMREVERSEGEOCODINGOPERATION_H

@class NSOperation;



@interface _TtC7FMFCore27FMReverseGeocodingOperation : NSOperation {
    ? request;
    ? completion;
    ? _isFinished;
}


@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic) BOOL finished;


-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(id)init;
-(void)main;
-(void)start;


@end


#endif