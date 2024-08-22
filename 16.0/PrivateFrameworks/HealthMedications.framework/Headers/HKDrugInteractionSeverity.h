// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDRUGINTERACTIONSEVERITY_H
#define HKDRUGINTERACTIONSEVERITY_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKDrugInteractionSeverity : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger severityLevel; // ivar: _severityLevel
@property (readonly, copy, nonatomic) NSSet *validRegionCodes; // ivar: _validRegionCodes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeverityLevel:(NSUInteger)arg0 validRegionCodes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif