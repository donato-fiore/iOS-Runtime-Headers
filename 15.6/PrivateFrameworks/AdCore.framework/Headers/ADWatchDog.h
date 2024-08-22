// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADWATCHDOG_H
#define ADWATCHDOG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ADWatchDog : NSObject

@property (nonatomic) NSUInteger delayTime; // ivar: _delayTime
@property (retain, nonatomic) NSString *reason; // ivar: _reason


-(id)initWithReason:(id)arg0 andDelay:(NSUInteger)arg1 ;
-(void)updateReason:(id)arg0 ;


@end


#endif