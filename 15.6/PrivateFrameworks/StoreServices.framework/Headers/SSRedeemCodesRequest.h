// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSREDEEMCODESREQUEST_H
#define SSREDEEMCODESREQUEST_H

@class NSArray, NSString, NSDictionary;
@protocol SSXPCCoding;


#import "SSRequest.h"
#import "SSAuthenticationContext.h"

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding>

 {
    SSAuthenticationContext *_authenticationContext;
    NSArray *_redeemCodes;
}


@property (copy) SSAuthenticationContext *authenticationContext;
@property BOOL cameraRecognized; // ivar: _cameraRecognized
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL headless; // ivar: _headless
@property (retain, nonatomic) NSString *logCorrelationKey; // ivar: _logCorrelationKey
@property (retain, nonatomic) NSDictionary *params; // ivar: _params
@property (readonly) NSArray *redeemCodes;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithRedeemCodes:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithRedeemResponseBlock:(id)arg0 ;


@end


#endif