// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCHARACTERISTICMETADATA_H
#define HMDCHARACTERISTICMETADATA_H

@class HMFObject, NSString, NSNumber, NSArray;
@protocol NSSecureCoding, NSCopying, HMFDumpState;



@interface HMDCharacteristicMetadata : HMFObject <NSSecureCoding, NSCopying, HMFDumpState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *format; // ivar: _format
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *manufacturerDescription; // ivar: _manufacturerDescription
@property (readonly, nonatomic) NSNumber *maxLength; // ivar: _maxLength
@property (readonly, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (readonly, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (readonly, nonatomic) NSNumber *stepValue; // ivar: _stepValue
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *units; // ivar: _units
@property (readonly, copy, nonatomic) NSArray *validValues; // ivar: _validValues


+(BOOL)supportsSecureCoding;
+(id)characteristicMetadataWithDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)dumpState;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMinimumValue:(id)arg0 maximumValue:(id)arg1 stepValue:(id)arg2 maxLength:(id)arg3 validValues:(id)arg4 format:(id)arg5 units:(id)arg6 manufacturerDescription:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif