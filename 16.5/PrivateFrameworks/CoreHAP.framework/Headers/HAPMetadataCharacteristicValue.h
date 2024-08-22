// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPMETADATACHARACTERISTICVALUE_H
#define HAPMETADATACHARACTERISTICVALUE_H

@class HMFObject, NSNumber, NSArray;



@interface HAPMetadataCharacteristicValue : HMFObject

@property (retain, nonatomic) NSNumber *maxLength; // ivar: _maxLength
@property (retain, nonatomic) NSNumber *maxValue; // ivar: _maxValue
@property (retain, nonatomic) NSNumber *minLength; // ivar: _minLength
@property (retain, nonatomic) NSNumber *minValue; // ivar: _minValue
@property (retain, nonatomic) NSNumber *stepValue; // ivar: _stepValue
@property (readonly, nonatomic) NSArray *validValues; // ivar: _validValues


+(id)initWithDictionary:(id)arg0 ;
-(id)description;
-(id)generateDictionary;
-(id)initWithMinLength:(id)arg0 maxLength:(id)arg1 ;
-(id)initWithMinValue:(id)arg0 maxValue:(id)arg1 stepValue:(id)arg2 validValues:(id)arg3 ;
-(void)dump;


@end


#endif