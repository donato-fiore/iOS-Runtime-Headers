// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCPTRACELAYER_H
#define RCPTRACELAYER_H

@class CALayer;


#import "RCPEventStream.h"

@interface RCPTraceLayer : CALayer

@property (retain, nonatomic) RCPEventStream *eventStream; // ivar: _eventStream
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (nonatomic) NSUInteger time; // ivar: _time


-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif