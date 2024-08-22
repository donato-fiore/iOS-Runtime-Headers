// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPOINTFIFO_H
#define UIPOINTFIFO_H


#import <Foundation/Foundation.h>

#import "UIPointFIFO.h"

@interface UIPointFIFO : NSObject

@property (retain, nonatomic) UIPointFIFO *nextFIFO; // ivar: _nextFIFO


-(id)initWithFIFO:(id)arg0 ;
-(void)addPoint;
-(void)clear;
-(void)dealloc;
-(void)emitPoint;
-(void)flush;


@end


#endif