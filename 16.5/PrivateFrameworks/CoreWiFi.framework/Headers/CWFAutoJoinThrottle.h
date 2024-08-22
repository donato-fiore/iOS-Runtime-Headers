// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFAUTOJOINTHROTTLE_H
#define CWFAUTOJOINTHROTTLE_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CWFAutoJoinThrottle : NSObject <NSCopying>



@property (retain, nonatomic) NSDictionary *intervals; // ivar: _intervals
@property (retain, nonatomic) NSDictionary *intervalsBasedOnTriggerTimestamp; // ivar: _intervalsBasedOnTriggerTimestamp
@property (nonatomic) NSInteger trigger; // ivar: _trigger


+(id)autoJoinThrottleWithTrigger:(NSInteger)arg0 intervals:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif