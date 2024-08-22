// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMEDIAREQUESTENCODER_H
#define AMSMEDIAREQUESTENCODER_H

@class ACAccount, NSString;
@protocol AMSBagConsumer, AMSRequestEncoding, AMSBagProtocol, AMSResponseDecoding, AMSMediaTokenServiceProtocol;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"
#import "AMSURLRequestEncoder.h"

@interface AMSMediaRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding>



@property (nonatomic) BOOL URLKnownToBeTrusted;
@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAccountMediaTypeComponent; // ivar: _disableAccountMediaTypeComponent
@property (nonatomic) BOOL disableResponseDecoding;
@property (retain, nonatomic) NSString *gsTokenIdentifier;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *logKey;
@property (readonly, nonatomic) AMSURLRequestEncoder *requestEncoder; // ivar: _requestEncoder
@property NSInteger requestEncoding;
@property (retain, nonatomic) NSObject<AMSResponseDecoding> *responseDecoder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<AMSMediaTokenServiceProtocol> *tokenService; // ivar: _tokenService


+(id)createBagForSubProfile;
-(id)initWithTokenService:(id)arg0 bag:(id)arg1 ;
-(id)requestByEncodingRequest:(id)arg0 parameters:(id)arg1 ;
-(id)requestWithComponents:(id)arg0 ;
-(id)requestWithURL:(id)arg0 ;


@end


#endif