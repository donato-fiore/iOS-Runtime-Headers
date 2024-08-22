// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSSTOPWATCHLAP_H
#define MSSTOPWATCHLAP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MSStopwatchLap : NSObject

@property (nonatomic) NSUInteger lapTime; // ivar: _lapTime
@property (readonly, nonatomic) NSUInteger lapTimeMS;
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)initWithLapTime:(NSUInteger)arg0 andName:(id)arg1 ;


@end


#endif