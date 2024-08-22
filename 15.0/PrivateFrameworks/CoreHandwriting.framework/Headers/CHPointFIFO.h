// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHPOINTFIFO_H
#define CHPOINTFIFO_H


#import <Foundation/Foundation.h>

#import "CHPointFIFO.h"

@interface CHPointFIFO : NSObject

@property (retain, nonatomic) CHPointFIFO *nextFIFO; // ivar: _nextFIFO


-(id)initWithFIFO:(id)arg0 ;
-(void)addPoint;
-(void)clear;
-(void)dealloc;
-(void)emitPoint;
-(void)flush;


@end


#endif