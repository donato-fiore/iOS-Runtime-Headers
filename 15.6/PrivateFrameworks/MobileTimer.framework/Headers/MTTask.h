// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTTASK_H
#define MTTASK_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MTGCDTimer.h"

@interface MTTask : NSObject

@property (copy, nonatomic) id *completableBlock; // ivar: _completableBlock
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) MTGCDTimer *timer; // ivar: _timer


+(id)taskWithIdentifier:(id)arg0 completableBlock:(id)arg1 ;
+(id)taskWithIdentifier:(id)arg0 delay:(CGFloat)arg1 completableBlock:(id)arg2 ;
-(id)description;


@end


#endif