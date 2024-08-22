// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTADDRESSSUBPREMISE_H
#define RTADDRESSSUBPREMISE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RTAddressSubPremise : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *subPremise; // ivar: _subPremise
@property (readonly, nonatomic) NSInteger subPremiseType; // ivar: _subPremiseType


+(BOOL)supportsSecureCoding;
+(id)stringForSubPremiseType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAddressSubPremise:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubPremise:(id)arg0 subPremiseType:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif