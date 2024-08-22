// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLADJUSTMENTS_H
#define CPLADJUSTMENTS_H

@class NSString, NSDate, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CPLResource.h"

@interface CPLAdjustments : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *adjustmentCompoundVersion; // ivar: _adjustmentCompoundVersion
@property (copy, nonatomic) NSString *adjustmentCreatorCode; // ivar: _adjustmentCreatorCode
@property (retain, nonatomic) CPLResource *adjustmentData; // ivar: _adjustmentData
@property (nonatomic) NSUInteger adjustmentRenderTypes; // ivar: _adjustmentRenderTypes
@property (nonatomic) NSUInteger adjustmentSourceType; // ivar: _adjustmentSourceType
@property (copy, nonatomic) NSDate *adjustmentTimestamp; // ivar: _adjustmentTimestamp
@property (copy, nonatomic) NSString *adjustmentType; // ivar: _adjustmentType
@property (copy, nonatomic) NSString *creatorCode; // ivar: _creatorCode
@property (copy, nonatomic) NSString *otherAdjustmentsFingerprint; // ivar: _otherAdjustmentsFingerprint
@property (copy, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint; // ivar: _similarToOriginalAdjustmentsFingerprint
@property (retain, nonatomic) NSData *simpleAdjustmentData; // ivar: _simpleAdjustmentData


+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)adjustmentSimpleDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif