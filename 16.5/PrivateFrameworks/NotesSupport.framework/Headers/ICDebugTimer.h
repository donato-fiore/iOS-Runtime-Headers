// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDEBUGTIMER_H
#define ICDEBUGTIMER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface ICDebugTimer : NSObject

@property CGFloat elapsedTime; // ivar: _elapsedTime
@property (retain) NSDate *startingDate; // ivar: _startingDate


+(id)debugTimerForClass:(Class)arg0 ;
+(void)enableTimersForClass:(Class)arg0 ;
-(void)pause;
-(void)resume;
-(void)start;
-(void)stop;


@end


#endif