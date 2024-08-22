// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAROOTPROGRESSREPORTER_H
#define MAROOTPROGRESSREPORTER_H



#import "MAProgressReporter.h"

@interface MARootProgressReporter : MAProgressReporter {
    CGFloat _lastProgressCallTime;
}


@property BOOL isCancelled; // ivar: _isCancelled
@property (readonly) CGFloat progress; // ivar: _progress
@property (readonly, nonatomic) id *progressBlock; // ivar: _progressBlock


-(BOOL)isCancelledWithProgress:(CGFloat)arg0 currentTime:(CGFloat)arg1 ;
-(id)childProgressWithOffset:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(id)init;
-(id)initWithProgressBlock:(id)arg0 ;
-(void)cancelOperation;


@end


#endif