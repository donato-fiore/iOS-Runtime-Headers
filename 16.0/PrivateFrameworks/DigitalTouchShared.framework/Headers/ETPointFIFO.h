// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ETPOINTFIFO_H
#define ETPOINTFIFO_H


#import <Foundation/Foundation.h>

#import "ETPointFIFO.h"

@interface ETPointFIFO : NSObject

@property (retain, nonatomic) ETPointFIFO *nextFIFO; // ivar: _nextFIFO


-(id)initWithFIFO:(id)arg0 ;
-(void)addPoints:(*NSUInteger)arg0 count;
-(void)clear;
-(void)emitPoints:(*NSUInteger)arg0 count;
-(void)flush;


@end


#endif