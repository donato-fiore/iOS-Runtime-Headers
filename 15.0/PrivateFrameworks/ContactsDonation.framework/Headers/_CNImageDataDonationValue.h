// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNIMAGEDATADONATIONVALUE_H
#define _CNIMAGEDATADONATIONVALUE_H

@class NSData;


#import "CNDonationValue.h"

@interface _CNImageDataDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSData *imageData; // ivar: _imageData


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithNewExpirationDate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageData:(id)arg0 origin:(id)arg1 ;
-(void)acceptDonationValueVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif