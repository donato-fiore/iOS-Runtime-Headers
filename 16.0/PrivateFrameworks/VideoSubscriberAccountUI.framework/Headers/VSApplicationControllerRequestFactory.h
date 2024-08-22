// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSAPPLICATIONCONTROLLERREQUESTFACTORY_H
#define VSAPPLICATIONCONTROLLERREQUESTFACTORY_H


#import <Foundation/Foundation.h>


@interface VSApplicationControllerRequestFactory : NSObject



+(id)_attributeQuerySAMLRequestStringWithAttributeNames:(id)arg0 channelID:(id)arg1 authenticationToken:(id)arg2 error:(*id)arg3 ;
+(id)_authNRequestSAMLStringWithAuthenticationToken:(id)arg0 forced:(BOOL)arg1 error:(*id)arg2 ;
+(id)_logoutSAMLRequestStringWithError:(*id)arg0 ;
-(id)STBOptOutApplicationControllerRequest;
-(id)accountMetadataApplicationControllerRequestWithAccountMetadataRequest:(id)arg0 authenticationToken:(id)arg1 ;
-(id)authenticationApplicationControllerRequestWithAuthenticationToken:(id)arg0 forcedAuthentication:(BOOL)arg1 ;
-(id)logoutApplicationControllerRequestWithAuthenticationToken:(id)arg0 ;
-(id)silentAuthenticationApplicationControllerRequest;
-(id)silentAuthenticationApplicationControllerRequestWithAuthenticationToken:(id)arg0 forcedAuthentication:(BOOL)arg1 ;


@end


#endif