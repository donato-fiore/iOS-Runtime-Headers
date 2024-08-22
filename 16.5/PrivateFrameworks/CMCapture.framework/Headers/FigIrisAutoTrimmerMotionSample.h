// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGIRISAUTOTRIMMERMOTIONSAMPLE_H
#define FIGIRISAUTOTRIMMERMOTIONSAMPLE_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FigIrisAutoTrimmerMotionSample : NSObject

@property (readonly, nonatomic) ? accel; // ivar: _accel
@property (readonly, nonatomic) ? attitude; // ivar: _attitude
@property (readonly, nonatomic) ? cmTimestamp;
@property (readonly, nonatomic) ? delta; // ivar: _delta
@property (readonly, nonatomic) CGFloat deltaPeriod; // ivar: _deltaPeriod
@property (readonly, nonatomic) ? gravity; // ivar: _gravity
@property (retain, nonatomic) NSDictionary *inferences; // ivar: _inferences
@property (readonly, nonatomic) NSMutableDictionary *intermediateCalculations; // ivar: _intermediateCalculations
@property (readonly, nonatomic) ? originatingFrameTime; // ivar: _originatingFrameTime
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) int vitalityObjectCount; // ivar: _vitalityObjectCount


+(void)initialize;
-(id)initWithAttitude:(struct ? *)arg0 gravity:(struct ? *)arg1 motionTimestamp:(CGFloat)arg2 frameTimestamp:(struct ? )arg3 previousSample:(id)arg4 ;
-(struct ? )attitudeRelativeTo:(id)arg0 ;
-(void)dealloc;
-(void)prepareIntermediates:(NSInteger)arg0 ;


@end


#endif