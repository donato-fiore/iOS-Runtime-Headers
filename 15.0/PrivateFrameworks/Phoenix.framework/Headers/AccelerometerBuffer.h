// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCELEROMETERBUFFER_H
#define ACCELEROMETERBUFFER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface AccelerometerBuffer : NSObject {
    NSMutableArray *_accelBuffer;
    NSUInteger _bufferSize;
    ? _movingSum;
    NSUInteger _sampleRate;
}


@property (nonatomic) CGFloat localMax; // ivar: _localMax
@property (nonatomic) CGFloat localMaxAboveAverage; // ivar: _localMaxAboveAverage
@property (nonatomic) CGFloat localMin; // ivar: _localMin
@property (nonatomic) CGFloat localMinBelowAverage; // ivar: _localMinBelowAverage


-(id)bufferWithMovingSum:(struct ? *)arg0 ;
-(id)description;
-(id)initWithCapacity:(NSUInteger)arg0 accelerometerSampleRateInHz:(NSUInteger)arg1 ;
-(id)logBuffer;
-(struct ? )data;
-(void)_fillAccelBufferBeforeFirstSampleTimestamp:(CGFloat)arg0 ;
-(void)addData:(struct ? )arg0 timestamp:(CGFloat)arg1 ;
-(void)reset;
-(void)resetMovingSum;


@end


#endif