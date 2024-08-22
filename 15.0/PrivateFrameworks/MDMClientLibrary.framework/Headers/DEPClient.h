// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEPCLIENT_H
#define DEPCLIENT_H

@class NSXPCConnection, NSString;

#import <Foundation/Foundation.h>

#import "DEPDeviceUploadSubmitDeviceRequestPayload.h"
#import "DEPDeviceUploadOrganization.h"
#import "DEPDeviceUploadCredentials.h"

@interface DEPClient : NSObject

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) DEPDeviceUploadSubmitDeviceRequestPayload *deviceUploadRequest; // ivar: _deviceUploadRequest
@property (retain, nonatomic) NSString *nonce; // ivar: _nonce
@property (retain, nonatomic) DEPDeviceUploadOrganization *organization; // ivar: _organization
@property (retain, nonatomic) DEPDeviceUploadCredentials *userCredentials; // ivar: _userCredentials


-(id)_cloudConfigRetrievalBlockWithClientCompletionBlock:(SEL)arg0 ;
-(id)_organizationFromDict:(id)arg0 ;
-(id)_organizationsFromArray:(id)arg0 ;
-(id)_requestTypesFromDict:(id)arg0 ;
-(id)_soldToIdsFromDict:(id)arg0 ;
-(id)init;
-(void)_callServiceByType:(NSInteger)arg0 onProxy:(id)arg1 completionBlock:(id)arg2 ;
-(void)_completeServiceWithSuccess:(BOOL)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)_retrieveProxyObjectAndRunServiceType:(NSInteger)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;
-(void)fetchConfigurationWithCompletionBlock:(id)arg0 ;
-(void)fetchConfigurationWithoutValidationWithCompletionBlock:(id)arg0 ;
-(void)pingWithCompletionBlock:(id)arg0 ;
-(void)provisionallyEnrollWithNonce:(id)arg0 completionBlock:(id)arg1 ;
-(void)retrieveDeviceUploadOrganizationsWithCredentials:(id)arg0 completionBlock:(id)arg1 ;
-(void)retrieveDeviceUploadRequestTypesWithCredentials:(id)arg0 completionBlock:(id)arg1 ;
-(void)retrieveDeviceUploadSoldToIdsForOrganization:(id)arg0 credentials:(id)arg1 completionBlock:(id)arg2 ;
-(void)submitDeviceUploadRequest:(id)arg0 credentials:(id)arg1 completionBlock:(id)arg2 ;
-(void)unenrollWithCompletionBlock:(id)arg0 ;


@end


#endif