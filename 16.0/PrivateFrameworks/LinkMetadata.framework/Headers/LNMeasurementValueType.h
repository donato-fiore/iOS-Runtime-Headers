// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNMEASUREMENTVALUETYPE_H
#define LNMEASUREMENTVALUETYPE_H



#import "LNValueType.h"

@interface LNMeasurementValueType : LNValueType

@property (readonly, nonatomic) NSInteger unitType; // ivar: _unitType


+(BOOL)supportsSecureCoding;
+(id)durationValueType;
+(id)energyValueType;
+(id)lengthValueType;
+(id)massValueType;
+(id)speedValueType;
+(id)temperatureValueType;
+(id)unsupportedMeasurementValueType;
+(id)volumeValueType;
-(BOOL)isEqual:(id)arg0 ;
-(Class)objectClass;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUnitType:(NSInteger)arg0 ;
-(id)typeIdentifierAsString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif