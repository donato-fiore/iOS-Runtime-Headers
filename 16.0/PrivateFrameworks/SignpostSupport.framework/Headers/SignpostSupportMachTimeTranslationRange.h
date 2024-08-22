// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTSUPPORTMACHTIMETRANSLATIONRANGE_H
#define SIGNPOSTSUPPORTMACHTIMETRANSLATIONRANGE_H


#import <Foundation/Foundation.h>


@interface SignpostSupportMachTimeTranslationRange : NSObject

@property (readonly, nonatomic) NSInteger absoluteMinusContinuousDelta;
@property (readonly, nonatomic) NSInteger continuousMinusAbsoluteDelta;
@property (readonly, nonatomic) NSUInteger endMachAbsoluteTime; // ivar: _endMachAbsoluteTime
@property (readonly, nonatomic) NSUInteger endMachContinuousTime; // ivar: _endMachContinuousTime
@property (readonly, nonatomic) NSUInteger machContinuousTimeDuration;
@property (readonly, nonatomic) NSUInteger startMachAbsoluteTime; // ivar: _startMachAbsoluteTime
@property (readonly, nonatomic) NSUInteger startMachContinuousTime; // ivar: _startMachContinuousTime


-(BOOL)containsMachAbsoluteTime:(NSUInteger)arg0 ;
-(BOOL)containsMachContinuousTime:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)machAbsoluteTimeForMachContinuousTime:(NSUInteger)arg0 ;
-(NSUInteger)machContinuousTimeForMachAbsoluteTime:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)initWithArrayRepresentation:(id)arg0 ;
-(id)initWithStartMachAbsoluteTime:(NSUInteger)arg0 startContinuousTime:(NSUInteger)arg1 ;
-(id)serializableArrayRepresentation;


@end


#endif