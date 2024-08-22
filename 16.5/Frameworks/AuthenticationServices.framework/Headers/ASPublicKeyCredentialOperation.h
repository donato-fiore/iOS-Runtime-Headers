// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASPUBLICKEYCREDENTIALOPERATION_H
#define ASPUBLICKEYCREDENTIALOPERATION_H

@class NSMutableDictionary, LAContext, NSDictionary, NSError, _WKWebAuthenticationPanel, NSString, NSUUID;
@protocol OS_dispatch_semaphore, OS_os_activity, ASPublicKeyCredentialManagerDelegate;

#import <Foundation/Foundation.h>


@interface ASPublicKeyCredentialOperation : NSObject {
    NSObject<OS_dispatch_semaphore> *_internalSemaphore;
    NSMutableDictionary *_identifiersToAssertionResponses;
    id *_selectPlatformAssertionCallback;
    id *_selectSecurityKeyAssertionCallback;
}


@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (retain, nonatomic) LAContext *authenticatedLAContext; // ivar: _authenticatedLAContext
@property (weak, nonatomic) NSObject<ASPublicKeyCredentialManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasTornDown; // ivar: _hasTornDown
@property (readonly, copy, nonatomic) NSDictionary *identifiersToAssertionResponses;
@property (copy, nonatomic) NSError *overrideError; // ivar: _overrideError
@property (retain, nonatomic) _WKWebAuthenticationPanel *panel; // ivar: _panel
@property (copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (nonatomic) BOOL shouldRequireUserVerification; // ivar: _shouldRequireUserVerification
@property (copy, nonatomic) NSString *sourceApplicationIdentifier; // ivar: _sourceApplicationIdentifier
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithRelyingPartyIdentifier:(id)arg0 delegate:(id)arg1 parentActivity:(id)arg2 ;
-(void)mergeIdentifiersToAssertionResponses:(id)arg0 ;
-(void)selectPlatformAssertion:(id)arg0 ;
-(void)selectSecurityKeyAssertion:(id)arg0 ;
-(void)setPlatformAssertionSelectionCallback:(id)arg0 ;
-(void)setSecurityKeyAssertionSelectionCallback:(id)arg0 ;
-(void)tearDownIfNecessary;


@end


#endif