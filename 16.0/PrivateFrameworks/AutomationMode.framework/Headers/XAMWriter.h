// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XAMWRITER_H
#define XAMWRITER_H

@protocol XAMAuthorizationProvider;

#import <Foundation/Foundation.h>


@interface XAMWriter : NSObject

@property (readonly) NSObject<XAMAuthorizationProvider> *authorizationProvider; // ivar: _authorizationProvider
@property (readonly) id *writerConnectionFactory; // ivar: _writerConnectionFactory


+(id)sharedInstance;
+(void)resetSharedWriter;
// -(BOOL)_usingSyncProxy:(id)arg0 withError:(unk)arg1  ;
-(BOOL)createNoAuthenticationRequiredCookieWithError:(*id)arg0 ;
-(BOOL)disableAutomationModeWithError:(*id)arg0 ;
-(BOOL)enableAutomationModeWithError:(*id)arg0 ;
-(BOOL)removeNoAuthenticationRequiredCookieWithError:(*id)arg0 ;
// -(id)initWithWriterConnectionFactory:(id)arg0 authorizationProvider:(unk)arg1  ;
-(void)_authenticateAndEnableAutomationModeWithProxy:(id)arg0 completion:(id)arg1 ;
-(void)_enableAutomationModeWithProxy:(id)arg0 authorization:(id)arg1 completion:(id)arg2 ;
-(void)_enableAutomationModeWithProxy:(id)arg0 completion:(id)arg1 ;
-(void)_setAutomationModeEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_usingAsyncProxyEnablePasswordlessAutomation:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)createNoAuthenticationRequiredCookieWithCompletion:(id)arg0 ;
-(void)disableAutomationModeWithCompletion:(id)arg0 ;
-(void)enableAutomationModeWithCompletion:(id)arg0 ;
-(void)removeNoAuthenticationRequiredCookieWithCompletion:(id)arg0 ;


@end


#endif