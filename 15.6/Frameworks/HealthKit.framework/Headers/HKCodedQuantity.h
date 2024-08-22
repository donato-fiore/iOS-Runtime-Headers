// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODEDQUANTITY_H
#define HKCODEDQUANTITY_H

@class NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKMedicalCoding.h"

@interface HKCodedQuantity : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) HKMedicalCoding *comparatorCoding; // ivar: _comparatorCoding
@property (readonly, nonatomic) CGFloat doubleValue;
@property (readonly, copy, nonatomic) NSString *localizedValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSString *rawValue; // ivar: _rawValue
@property (readonly, copy, nonatomic) HKMedicalCoding *unitCoding; // ivar: _unitCoding
@property (readonly, copy, nonatomic) NSString *value;


+(BOOL)supportsSecureCoding;
+(id)_numberFormatter;
+(id)codedQuantityWithValue:(id)arg0 comparatorCoding:(id)arg1 unitCoding:(id)arg2 ;
+(id)codedQuantityWithValue:(id)arg0 unitCoding:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRawValue:(id)arg0 comparatorCoding:(id)arg1 unitCoding:(id)arg2 ;
-(id)quantityRepresentationWithUCUMConverter:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif