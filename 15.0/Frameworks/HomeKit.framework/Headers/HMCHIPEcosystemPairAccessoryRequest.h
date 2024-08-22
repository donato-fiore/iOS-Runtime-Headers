// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCHIPECOSYSTEMPAIRACCESSORYREQUEST_H
#define HMCHIPECOSYSTEMPAIRACCESSORYREQUEST_H

@class NSString;


#import "HMCHIPEcosystemRequest.h"
#import "HMCHIPServiceHome.h"

@interface HMCHIPEcosystemPairAccessoryRequest : HMCHIPEcosystemRequest

@property (readonly, copy, nonatomic) HMCHIPServiceHome *home; // ivar: _home
@property (readonly, copy, nonatomic) NSString *pairingIdentifier; // ivar: _pairingIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPairingIdentifier:(id)arg0 home:(id)arg1 ;
-(id)initWithSetupPayload:(id)arg0 ;
-(id)initWithSetupURLString:(id)arg0 ;
-(id)messageType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif