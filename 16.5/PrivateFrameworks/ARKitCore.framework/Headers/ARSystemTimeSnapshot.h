// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARSYSTEMTIMESNAPSHOT_H
#define ARSYSTEMTIMESNAPSHOT_H


#import <Foundation/Foundation.h>


@interface ARSystemTimeSnapshot : NSObject

@property (readonly, nonatomic) CGFloat upTime; // ivar: _upTime
@property (readonly, nonatomic) CGFloat upTimeIncludingSleep; // ivar: _upTimeIncludingSleep
@property (readonly, nonatomic) CGFloat upTimeIncludingSleepAndDriftCorrection; // ivar: _upTimeIncludingSleepAndDriftCorrection


+(id)timeSinceSnapshot:(id)arg0 ;
-(id)init;
-(id)initWithUpTime:(CGFloat)arg0 upTimeIncludingSleep:(CGFloat)arg1 upTimeIncludingSleepAndDriftCorrection:(CGFloat)arg2 ;
-(id)timeSinceSnapshot:(id)arg0 ;


@end


#endif