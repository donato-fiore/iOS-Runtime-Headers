// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONAPPLEIDPROVIDER_H
#define ASAUTHORIZATIONAPPLEIDPROVIDER_H

@class NSString;
@protocol AKAuthorizationNotificationHandler, ASAuthorizationProvider;

#import <Foundation/Foundation.h>


@interface ASAuthorizationAppleIDProvider : NSObject <AKAuthorizationNotificationHandler, ASAuthorizationProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)createRequest;
-(void)credentialStateDidChange:(NSInteger)arg0 completion:(id)arg1 ;
-(void)getCredentialStateForUserID:(id)arg0 completion:(id)arg1 ;


@end


#endif