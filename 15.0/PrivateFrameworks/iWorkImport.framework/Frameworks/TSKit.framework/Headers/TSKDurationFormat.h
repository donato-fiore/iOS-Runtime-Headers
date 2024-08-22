// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKDURATIONFORMAT_H
#define TSKDURATIONFORMAT_H

@protocol NSCopying;


#import "TSKFormat.h"

@interface TSKDurationFormat : TSKFormat <NSCopying>



@property (readonly, nonatomic) unsigned char durationStyle; // ivar: _durationStyle
@property (readonly, nonatomic) unsigned char durationUnitLargest; // ivar: _durationUnitLargest
@property (readonly, nonatomic) unsigned char durationUnitSmallest; // ivar: _durationUnitSmallest
@property (readonly, nonatomic) BOOL useAutomaticUnits; // ivar: _useAutomaticUnits


+(unsigned char)automaticMaxAndMinDurationUnitsForTimeInterval:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asDurationFormat;
-(id)formatByFixingUnitsIfNecessaryForTimeInterval:(CGFloat)arg0 ;
-(id)initWithFormatType:(unsigned int)arg0 ;
-(id)initWithUseAutomaticUnits:(BOOL)arg0 durationUnitSmallest:(unsigned char)arg1 durationUnitLargest:(unsigned char)arg2 durationStyle:(unsigned char)arg3 ;
-(id)stringFromDurationTimeInterval:(CGFloat)arg0 locale:(id)arg1 ;
-(id)stringFromDurationTimeInterval:(CGFloat)arg0 locale:(id)arg1 showPrecision:(BOOL)arg2 ;
-(unsigned char)durationUnitLargestWithTimeInterval:(CGFloat)arg0 ;
-(unsigned char)maxAndMinDurationUnitsForTimeInterval:(CGFloat)arg0 ;


@end


#endif