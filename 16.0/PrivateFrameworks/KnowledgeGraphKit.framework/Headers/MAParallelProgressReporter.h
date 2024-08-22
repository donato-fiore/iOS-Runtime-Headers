// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPARALLELPROGRESSREPORTER_H
#define MAPARALLELPROGRESSREPORTER_H



#import "MAProgressReporter.h"
#import "MAParallelProgress.h"

@interface MAParallelProgressReporter : MAProgressReporter

@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (readonly, nonatomic) MAParallelProgress *parallelProgress; // ivar: _parallelProgress


-(BOOL)isCancelled;
-(BOOL)isCancelledWithProgress:(CGFloat)arg0 ;
-(BOOL)isCancelledWithProgress:(CGFloat)arg0 currentTime:(CGFloat)arg1 ;
-(id)childProgressWithOffset:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(id)initWithParallelProgress:(id)arg0 index:(NSUInteger)arg1 ;


@end


#endif