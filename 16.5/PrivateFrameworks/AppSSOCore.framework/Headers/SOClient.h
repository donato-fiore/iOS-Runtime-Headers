// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOCLIENT_H
#define SOCLIENT_H

@class NSString;
@protocol SOServiceProtocol;

#import <Foundation/Foundation.h>

#import "SOServiceConnection.h"

@interface SOClient : NSObject <SOServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) SOServiceConnection *serviceConnection; // ivar: _serviceConnection
@property (readonly) Class superclass;


+(id)_queue;
-(id)init;
-(void)beginAuthorizationWithRequestParameters:(id)arg0 completion:(id)arg1 ;
-(void)cancelAuthorization:(id)arg0 completion:(id)arg1 ;
-(void)configurationWithCompletion:(id)arg0 ;
-(void)debugHintsWithCompletion:(id)arg0 ;
-(void)finishAuthorization:(id)arg0 completion:(id)arg1 ;
-(void)getAuthorizationHintsWithURL:(id)arg0 responseCode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)isExtensionProcessWithAuditToken:(struct ? )arg0 completion:(id)arg1 ;
-(void)performAuthorizationWithRequestParameters:(id)arg0 completion:(id)arg1 ;
-(void)profilesWithExtensionBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)realmsWithCompletion:(id)arg0 ;


@end


#endif