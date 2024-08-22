// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13COREIDVSHARED33IDENTITYPROOFINGDATASHARINGCLIENT_H
#define _TTC13COREIDVSHARED33IDENTITYPROOFINGDATASHARINGCLIENT_H

@protocol _TtP13CoreIDVShared27IdentityProofingDataSharing_;

#import <Foundation/Foundation.h>


@interface _TtC13CoreIDVShared33IdentityProofingDataSharingClient : NSObject <_TtP13CoreIDVShared27IdentityProofingDataSharing_>

 {
    ? serverConnection;
    ? disconnectHandler;
    ? remoteObjectProxy;
    ? remoteObjectProxyError;
}




-(id)init;
-(void)checkUserConsentWithCompletion:(id)arg0 ;
-(void)didChangeUserConsent:(NSInteger)arg0 completion:(id)arg1 ;
-(void)fetchUserConsentWithCompletion:(id)arg0 ;


@end


#endif