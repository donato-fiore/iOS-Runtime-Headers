// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEENDPOINTCONFIGURATION_H
#define SEENDPOINTCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SEEndPointConfiguration : NSObject <NSSecureCoding>



@property BOOL authorizeEndPointAllowed; // ivar: _authorizeEndPointAllowed
@property BOOL authorizeEndPointWithAuthorizeAllowed; // ivar: _authorizeEndPointWithAuthorizeAllowed
@property BOOL confidentialDataAllowed; // ivar: _confidentialDataAllowed
@property BOOL enabledOnContactless; // ivar: _enabledOnContactless
@property BOOL enabledOnWire; // ivar: _enabledOnWire
@property BOOL exchangeAllowedInFastFlow; // ivar: _exchangeAllowedInFastFlow
@property BOOL exchangeAllowedOnWire; // ivar: _exchangeAllowedOnWire
@property BOOL exportEraseConfidentialMailBox; // ivar: _exportEraseConfidentialMailBox
@property BOOL fastFlowAllowedOnContactless; // ivar: _fastFlowAllowedOnContactless
@property BOOL fastFlowAllowedOnWire; // ivar: _fastFlowAllowedOnWire
@property unsigned short lengthConfidentialMailBox; // ivar: _lengthConfidentialMailBox
@property unsigned short lengthPrivateMailBox; // ivar: _lengthPrivateMailBox
@property BOOL nfcExpressOnlyInLPM; // ivar: _nfcExpressOnlyInLPM
@property unsigned short offsetConfidentialMailBox; // ivar: _offsetConfidentialMailBox
@property unsigned short offsetPrivateMailBox; // ivar: _offsetPrivateMailBox
@property BOOL signAllowed; // ivar: _signAllowed
@property BOOL standardFlowAllowedOnContactless; // ivar: _standardFlowAllowedOnContactless
@property BOOL standardFlowAllowedOnWire; // ivar: _standardFlowAllowedOnWire
@property BOOL terminationNotPersisted; // ivar: _terminationNotPersisted


+(BOOL)supportsSecureCoding;
+(id)configurationWithOpt1:(unsigned char)arg0 opt2:(unsigned char)arg1 ;
+(id)homeDefaults;
+(id)hydraDefaults;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(unsigned char)opt1;
-(unsigned char)opt2;
-(unsigned char)optA;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif