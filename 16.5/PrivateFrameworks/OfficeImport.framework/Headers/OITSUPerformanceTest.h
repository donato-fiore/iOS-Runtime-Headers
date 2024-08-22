// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSUPERFORMANCETEST_H
#define OITSUPERFORMANCETEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OITSUPerformanceTest : NSObject {
    SEL mSelector;
    id *mTarget;
}


@property (nonatomic) CGFloat goalTime; // ivar: mGoalTime
@property (readonly, nonatomic) NSString *name; // ivar: mName
@property (readonly, nonatomic) BOOL passed; // ivar: mPassed
@property (nonatomic) CGFloat precision; // ivar: mPrecision
@property (nonatomic) BOOL quiet; // ivar: mQuiet
@property (nonatomic) TSUOpstat_s timing; // ivar: mTiming


+(id)csvHeader;
-(id)csvString;
-(id)initWithName:(id)arg0 selector:(SEL)arg1 target:(id)arg2 goalTime:(CGFloat)arg3 ;
-(void)dealloc;
-(void)report;
-(void)run;


@end


#endif