// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEENDPOINTBINDINGATTESTATIONREQUESTITEMS_H
#define SEENDPOINTBINDINGATTESTATIONREQUESTITEMS_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SEEndPointBindingAttestationRequestItems : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *casdECDSACertificate; // ivar: _casdECDSACertificate
@property (retain, nonatomic) NSData *casdRSACertificate; // ivar: _casdRSACertificate
@property (retain, nonatomic) NSData *subCAAttestation; // ivar: _subCAAttestation


+(BOOL)supportsSecureCoding;
+(id)withSubCAAttestation:(id)arg0 casdECDSACertificate:(id)arg1 casdRSACertificate:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif