// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLTRAININGLOGENTRY_H
#define PMLTRAININGLOGENTRY_H


#import <Foundation/Foundation.h>


@interface PMLTrainingLogEntry : NSObject

@property (readonly, nonatomic) NSUInteger serverIteration; // ivar: _serverIteration
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithTimestamp:(CGFloat)arg0 serverIteration:(NSUInteger)arg1 ;


@end


#endif