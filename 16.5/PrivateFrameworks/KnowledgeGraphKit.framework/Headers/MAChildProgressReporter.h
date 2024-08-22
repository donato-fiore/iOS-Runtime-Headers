// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MACHILDPROGRESSREPORTER_H
#define MACHILDPROGRESSREPORTER_H



#import "MAProgressReporter.h"

@interface MAChildProgressReporter : MAProgressReporter

@property (readonly, nonatomic) CGFloat offset; // ivar: _offset
@property (readonly, nonatomic) MAProgressReporter *parentProgress; // ivar: _parentProgress
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale


-(BOOL)isCancelled;
-(BOOL)isCancelledWithProgress:(CGFloat)arg0 currentTime:(CGFloat)arg1 ;
-(id)childProgressWithOffset:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(id)initWithParentProgress:(id)arg0 offset:(CGFloat)arg1 scale:(CGFloat)arg2 ;


@end


#endif