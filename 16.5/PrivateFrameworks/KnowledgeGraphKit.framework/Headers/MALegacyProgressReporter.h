// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MALEGACYPROGRESSREPORTER_H
#define MALEGACYPROGRESSREPORTER_H



#import "MAProgressReporter.h"

@interface MALegacyProgressReporter : MAProgressReporter {
    CGFloat _lastProgressCallTime;
}


@property (nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) id *progressBlock; // ivar: _progressBlock


-(BOOL)isCancelledWithProgress:(CGFloat)arg0 currentTime:(CGFloat)arg1 ;
-(id)childProgressWithOffset:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(id)initWithProgressBlock:(id)arg0 ;


@end


#endif