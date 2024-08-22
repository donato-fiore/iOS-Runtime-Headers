// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSACCOUNTMANAGER_H
#define VSACCOUNTMANAGER_H

@class NSString;
@protocol VSViewServiceRequestOperationDelegate, VSAccountManagerDelegate;

#import <Foundation/Foundation.h>

#import "VSLinkedOnOrAfterChecker.h"
#import "VSPrivacyInfoCenter.h"
#import "VSViewServiceRequestCenter.h"
#import "VSSecurityTask.h"

@interface VSAccountManager : NSObject <VSViewServiceRequestOperationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSAccountManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSLinkedOnOrAfterChecker *linkedOnOrAfterChecker; // ivar: _linkedOnOrAfterChecker
@property (retain, nonatomic) VSPrivacyInfoCenter *privacyInfoCenter; // ivar: _privacyInfoCenter
@property (retain, nonatomic) VSViewServiceRequestCenter *requestCenter; // ivar: _requestCenter
@property (retain, nonatomic) VSSecurityTask *securityTask; // ivar: _securityTask
@property (readonly) Class superclass;


-(BOOL)viewServiceRequestOperation:(id)arg0 shouldAuthenticateAccountProviderWithIdentifier:(id)arg1 ;
-(id)_enqueueViewServiceRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)enqueueAccountMetadataRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(void)checkAccessStatusWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)viewServiceRequestOperation:(id)arg0 dismissViewController:(id)arg1 ;
-(void)viewServiceRequestOperation:(id)arg0 presentViewController:(id)arg1 ;


@end


#endif