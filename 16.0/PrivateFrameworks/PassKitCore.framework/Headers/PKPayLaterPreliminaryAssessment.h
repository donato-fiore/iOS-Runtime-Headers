// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERPRELIMINARYASSESSMENT_H
#define PKPAYLATERPRELIMINARYASSESSMENT_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterPreliminaryAssessment : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *installmentPlans; // ivar: _installmentPlans
@property (nonatomic) NSUInteger productType; // ivar: _productType
@property (nonatomic, getter=isReapplication) BOOL reapplication; // ivar: _reapplication


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 productType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif