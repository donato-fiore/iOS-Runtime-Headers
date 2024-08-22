// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECSASLCLIENT_H
#define ECSASLCLIENT_H

@class NSString, NSArray, NSError;
@protocol EFLoggable, ECAuthenticationCredentials;

#import <Foundation/Foundation.h>


@interface ECSASLClient : NSObject <EFLoggable>

 {
    char * _userLanguageCode;
    char * _authenticationName;
    char * _authorizationName;
    *sasl_secret _password;
    char * _authenticationPersonID;
    char * _authorizationPersonID;
    char * _appleToken;
    char * _machineID;
    char * _oneTimePassword;
    char * _clientInfo;
    char * _oauthToken;
}


@property (readonly, nonatomic) *sasl_callback callbacks; // ivar: _callbacks
@property (weak, nonatomic) NSObject<ECAuthenticationCredentials> *credentials; // ivar: _credentials
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int encryptionBufferSize; // ivar: _encryptionBufferSize
@property (nonatomic) BOOL excludeAuthorizationName; // ivar: _excludeAuthorizationName
@property (nonatomic) BOOL excludeInitialResponse; // ivar: _excludeInitialResponse
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastResponseIncludesCredential; // ivar: _lastResponseIncludesCredential
@property (readonly, nonatomic) BOOL lastResponseIncludesPlainTextCredential;
@property (copy, nonatomic) NSArray *mechanismNames; // ivar: _mechanismNames
@property (nonatomic) BOOL mechanismUsesPlainText; // ivar: _mechanismUsesPlainText
@property (readonly, nonatomic) *sasl_conn saslConnection; // ivar: _saslConnection
@property (retain, nonatomic) NSError *saslError; // ivar: _saslError
@property (nonatomic) NSInteger saslStatus; // ivar: _saslStatus
@property (copy, nonatomic) NSString *selectedMechanismName; // ivar: _selectedMechanismName
@property (readonly) Class superclass;


+(id)installedMechanisms;
+(id)log;
-(BOOL)_logGenericError:(int)arg0 saslConnection:(struct sasl_conn *)arg1 description:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithMechanismNames:(id)arg0 credentials:(id)arg1 externalSecurityLayer:(unsigned int)arg2 allowPlainText:(BOOL)arg3 ;
-(id)newDecryptedDataForBytes:(char *)arg0 length:(unsigned int)arg1 ;
-(id)newEncryptedDataForBytes:(char *)arg0 length:(unsigned int)arg1 ;
-(id)responseForServerData:(id)arg0 ;
-(id)start;
-(void)_clearAuthenticationCallbackBuffers;
-(void)_handleGenericError:(int)arg0 description:(id)arg1 ;
-(void)_handleNeedsUserInteraction:(struct sasl_interact *)arg0 ;
-(void)_handleStartFailure:(int)arg0 ;
-(void)_retrieveEncryptionBufferSize;
-(void)dealloc;


@end


#endif