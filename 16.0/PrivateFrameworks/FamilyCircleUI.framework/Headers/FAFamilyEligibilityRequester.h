// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAFAMILYELIGIBILITYREQUESTER_H
#define FAFAMILYELIGIBILITYREQUESTER_H

@class AAGrandSlamSigner, AIDAAccountManager, NSOperationQueue;

#import <Foundation/Foundation.h>


@interface FAFamilyEligibilityRequester : NSObject {
    AAGrandSlamSigner *_grandSlamSigner;
    AIDAAccountManager *_accountManager;
    NSOperationQueue *_networkActivityQueue;
}


@property (nonatomic) BOOL allowsAuthenticationPrompt; // ivar: _allowsAuthenticationPrompt


-(id)_accountStore;
-(id)_appleAccount;
-(id)_grandSlamSigner;
-(id)init;
-(id)initWithAccountManager:(id)arg0 ;
-(void)requestFamilyEligibilityWithCompletion:(id)arg0 ;


@end


#endif