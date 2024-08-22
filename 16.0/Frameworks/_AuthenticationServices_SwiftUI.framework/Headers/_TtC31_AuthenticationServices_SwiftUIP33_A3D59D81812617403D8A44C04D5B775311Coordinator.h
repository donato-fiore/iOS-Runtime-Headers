// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC31_AUTHENTICATIONSERVICES_SWIFTUIP33_A3D59D81812617403D8A44C04D5B775311COORDINATOR_H
#define _TTC31_AUTHENTICATIONSERVICES_SWIFTUIP33_A3D59D81812617403D8A44C04D5B775311COORDINATOR_H

@protocol ASAuthorizationControllerPresentationContextProviding, ASAuthorizationControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC31_AuthenticationServices_SwiftUIP33_A3D59D81812617403D8A44C04D5B775311Coordinator : NSObject <ASAuthorizationControllerPresentationContextProviding, ASAuthorizationControllerDelegate>

 {
    ? config;
    ? presentationAnchor;
    ? button;
}




-(id)init;
-(id)presentationAnchorForAuthorizationController:(id)arg0 ;
-(void)authorizationController:(id)arg0 didCompleteWithAuthorization:(id)arg1 ;
-(void)authorizationController:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)buttonPressed;


@end


#endif