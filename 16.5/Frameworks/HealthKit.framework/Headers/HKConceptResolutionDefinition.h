// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCONCEPTRESOLUTIONDEFINITION_H
#define HKCONCEPTRESOLUTIONDEFINITION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKMedicalCodingCollection.h"

@interface HKConceptResolutionDefinition : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKMedicalCodingCollection *codingCollection; // ivar: _codingCollection
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) NSInteger recordCategoryType; // ivar: _recordCategoryType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCodingCollection:(id)arg0 countryCode:(id)arg1 ;
-(id)initWithCodingCollection:(id)arg0 countryCode:(id)arg1 recordCategoryType:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif