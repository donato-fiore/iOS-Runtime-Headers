// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSTOPWATCH_H
#define IMSTOPWATCH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMStopWatch : NSObject {
    NSUInteger _startTime;
    NSString *_descriptionString;
}




+(id)stopwatch;
+(id)stopwatchWithDescription:(id)arg0 ;
+(void)initialize;
-(CGFloat)time;
-(id)description;
-(id)init;
-(void)report;
-(void)reportWithMarker:(id)arg0 ;
-(void)reset;
-(void)setDescription:(id)arg0 ;
-(void)start;


@end


#endif