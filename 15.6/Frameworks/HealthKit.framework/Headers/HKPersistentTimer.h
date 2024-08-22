// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKPERSISTENTTIMER_H
#define HKPERSISTENTTIMER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKPersistentTimer : NSObject

@property (retain, nonatomic) NSString *fullTimerKey; // ivar: _fullTimerKey


+(id)_prefixedKeyWithTimerKey:(id)arg0 ;
+(id)timerWithKey:(id)arg0 ;
-(NSUInteger)elapsedNanoseconds;
-(NSUInteger)elapsedSeconds;
-(id)timerValue;
-(void)clear;
-(void)start;


@end


#endif