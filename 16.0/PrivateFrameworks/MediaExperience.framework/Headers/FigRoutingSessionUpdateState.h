// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGROUTINGSESSIONUPDATESTATE_H
#define FIGROUTINGSESSIONUPDATESTATE_H

@class ARPPredictionContext;

#import <Foundation/Foundation.h>


@interface FigRoutingSessionUpdateState : NSObject

@property (retain, nonatomic) *OpaqueFigRoutingSession newSession; // ivar: _newSession
@property (retain, nonatomic) ARPPredictionContext *predictionContext; // ivar: _predictionContext


-(id)initWithNewSession:(struct OpaqueFigRoutingSession *)arg0 ;
-(void)dealloc;


@end


#endif