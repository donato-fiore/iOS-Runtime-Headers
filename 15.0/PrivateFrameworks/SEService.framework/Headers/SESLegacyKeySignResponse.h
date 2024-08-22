// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SESLEGACYKEYSIGNRESPONSE_H
#define SESLEGACYKEYSIGNRESPONSE_H

@class NSNumber, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SESLegacyKeySignResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *localValidationVerified; // ivar: _localValidationVerified
@property (retain, nonatomic) NSData *signature; // ivar: _signature


+(BOOL)supportsSecureCoding;
+(id)withSignature:(id)arg0 localValidationVerified:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif