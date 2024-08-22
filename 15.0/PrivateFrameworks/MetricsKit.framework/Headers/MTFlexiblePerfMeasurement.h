// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTFLEXIBLEPERFMEASUREMENT_H
#define MTFLEXIBLEPERFMEASUREMENT_H

@class NSArray, NSString;
@protocol MTFlexiblePerfMeasurementData;


#import "MTPerfBaseMeasurement.h"

@interface MTFlexiblePerfMeasurement : MTPerfBaseMeasurement <MTFlexiblePerfMeasurementData>



@property (readonly, copy, nonatomic) NSArray *additionalFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *eventData;
@property (readonly, copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMeasurementTransformer:(id)arg0 eventType:(id)arg1 eventData:(id)arg2 ;
-(void)mark:(id)arg0 ;
-(void)mark:(id)arg0 date:(id)arg1 ;
-(void)mark:(id)arg0 time:(NSInteger)arg1 ;
-(void)setXpSamplingForced:(BOOL)arg0 ;
-(void)setXpSamplingPercentage:(CGFloat)arg0 ;


@end


#endif