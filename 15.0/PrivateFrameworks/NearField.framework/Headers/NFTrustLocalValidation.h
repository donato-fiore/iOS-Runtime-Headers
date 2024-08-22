// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFTRUSTLOCALVALIDATION_H
#define NFTRUSTLOCALVALIDATION_H

@protocol NFTrustLocalValidation;


#import "NFTrustObject.h"

@interface NFTrustLocalValidation : NFTrustObject <NFTrustLocalValidation>



@property (nonatomic) unsigned char primitiveLocalValidation; // ivar: _primitiveLocalValidation


+(BOOL)supportsSecureCoding;
+(id)localValidationWithFaceID;
+(id)localValidationWithPassCode;
+(id)localValidationWithTouchID;
+(id)withPrimitiveLocalValidation:(unsigned char)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif