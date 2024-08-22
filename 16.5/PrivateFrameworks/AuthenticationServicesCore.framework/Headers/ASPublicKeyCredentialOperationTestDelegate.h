// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASPUBLICKEYCREDENTIALOPERATIONTESTDELEGATE_H
#define ASPUBLICKEYCREDENTIALOPERATIONTESTDELEGATE_H

@class NSString;
@protocol ASPublicKeyCredentialManagerDelegate;

#import <Foundation/Foundation.h>


@interface ASPublicKeyCredentialOperationTestDelegate : NSObject <ASPublicKeyCredentialManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didCompletionRegistrationCallback; // ivar: _didCompletionRegistrationCallback
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didCompleteAssertionWithCredential:(id)arg0 error:(id)arg1 ;
-(void)didCompleteRegistrationWithCredential:(id)arg0 error:(id)arg1 ;
-(void)didFetchPlatformLoginChoices:(id)arg0 ;
-(void)didFetchSecurityKeyLoginChoices:(id)arg0 ;
-(void)didReceiveError:(NSInteger)arg0 ;
-(void)presentCABLESheetWithCompletionHandler:(id)arg0 ;
-(void)requestPINWithRemainingRetries:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif