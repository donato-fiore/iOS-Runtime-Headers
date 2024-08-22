// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPROGRESSREPORTER_H
#define MAPROGRESSREPORTER_H


#import <Foundation/Foundation.h>


@interface MAProgressReporter : NSObject

@property (readonly) BOOL isCancelled;


+(id)ignoreProgress;
+(id)progressReporterWithProgressBlock:(id)arg0 ;
-(BOOL)isCancelledWithProgress:(CGFloat)arg0 ;
-(BOOL)isCancelledWithProgress:(CGFloat)arg0 currentTime:(CGFloat)arg1 ;
-(BOOL)isCancelledWithUnitsCompleted:(NSUInteger)arg0 outOf:(NSUInteger)arg1 ;
-(id)childProgressReporterForStep:(NSUInteger)arg0 outOf:(NSUInteger)arg1 ;
-(id)childProgressReporterFromStart:(CGFloat)arg0 toEnd:(CGFloat)arg1 ;
-(id)childProgressWithOffset:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(id)initForSubclasses;
-(id)progressReportersForParallelOperationsWithCount:(NSUInteger)arg0 ;


@end


#endif