// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLTIMELINESETUPOPERATION_H
#define TLTIMELINESETUPOPERATION_H

@class NSError;


#import "TLTimelineOperation.h"
#import "TLTimeline.h"

@interface TLTimelineSetupOperation : TLTimelineOperation

@property (readonly, nonatomic) NSUInteger entryLimit; // ivar: _entryLimit
@property (copy) id *operationCompletionBlock;
@property (retain) NSError *setupError; // ivar: _setupError
@property (retain) TLTimeline *timeline; // ivar: _timeline
@property (copy) id *timelineOperationCompletionBlock;
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


+(NSUInteger)relativePriority;
-(id)error;
-(id)initWithIdentifiable:(id)arg0 ;
-(id)initWithIdentifiable:(id)arg0 timeout:(CGFloat)arg1 entryLimit:(NSUInteger)arg2 ;
-(void)main;


@end


#endif