// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JTFRAMERATECALCULATOR_H
#define JTFRAMERATECALCULATOR_H

@class NSString, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface JTFrameRateCalculator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) NSUInteger droppedDisplayFrameCount; // ivar: _droppedDisplayFrameCount
@property (nonatomic) NSUInteger droppedRenderCount; // ivar: _droppedRenderCount
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger receivedDisplayFrameCount; // ivar: _receivedDisplayFrameCount
@property (nonatomic) NSUInteger receivedRenderCount; // ivar: _receivedRenderCount
@property (retain, nonatomic) NSDate *stateDate; // ivar: _stateDate
@property (nonatomic) CGFloat windowSize; // ivar: _windowSize


-(id)initWithWindowSize:(CGFloat)arg0 ;
-(void)JT_restart;
-(void)log:(id)arg0 ;
-(void)tickDropped;
-(void)tickDroppedDisplay;
-(void)tickFrameReceived;
-(void)tickReceived;


@end


#endif