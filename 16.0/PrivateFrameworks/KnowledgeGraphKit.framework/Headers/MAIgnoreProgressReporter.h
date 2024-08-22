// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAIGNOREPROGRESSREPORTER_H
#define MAIGNOREPROGRESSREPORTER_H



#import "MAProgressReporter.h"

@interface MAIgnoreProgressReporter : MAProgressReporter



-(BOOL)isCancelled;
-(BOOL)isCancelledWithProgress:(CGFloat)arg0 currentTime:(CGFloat)arg1 ;
-(id)childProgressReporterForStep:(NSUInteger)arg0 outOf:(NSUInteger)arg1 ;
-(id)childProgressReporterFromStart:(CGFloat)arg0 toEnd:(CGFloat)arg1 ;
-(id)init;


@end


#endif