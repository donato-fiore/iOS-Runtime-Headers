// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASPUBLICKEYCREDENTIALOPERATION_H
#define ASPUBLICKEYCREDENTIALOPERATION_H

@class NSMutableDictionary, LAContext, NSDictionary, NSError, _WKWebAuthenticationPanel, NSString, NSUUID;
@protocol OS_dispatch_semaphore, ASPublicKeyCredentialManagerDelegate;

#import <Foundation/Foundation.h>


@interface ASPublicKeyCredentialOperation : NSObject {
    NSObject<OS_dispatch_semaphore> *_internalSemaphore;
    NSMutableDictionary *_identifiersToAssertionResponses;
    id *_selectPlatformAssertionCallback;
    id *_selectSecurityKeyAssertionCallback;
}


@property (retain, nonatomic) LAContext *authenticatedLAContext; // ivar: _authenticatedLAContext
@property (weak, nonatomic) NSObject<ASPublicKeyCredentialManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasTornDown; // ivar: _hasTornDown
@property (readonly, copy, nonatomic) NSDictionary *identifiersToAssertionResponses;
@property (copy, nonatomic) NSError *overrideError; // ivar: _overrideError
@property (retain, nonatomic) _WKWebAuthenticationPanel *panel; // ivar: _panel
@property (copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (copy, nonatomic) NSString *sourceApplicationIdentifier; // ivar: _sourceApplicationIdentifier
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithRelyingPartyIdentifier:(id)arg0 delegate:(id)arg1 ;
-(void)mergeIdentifiersToAssertionResponses:(id)arg0 ;
-(void)selectPlatformAssertion:(id)arg0 ;
-(void)selectSecurityKeyAssertion:(id)arg0 ;
-(void)setPlatformAssertionSelectionCallback:(id)arg0 ;
-(void)setSecurityKeyAssertionSelectionCallback:(id)arg0 ;
-(void)tearDownIfNecessary;


@end


#endif