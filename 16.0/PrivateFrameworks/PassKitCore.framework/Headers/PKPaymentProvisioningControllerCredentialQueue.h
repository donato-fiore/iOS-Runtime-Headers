// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPROVISIONINGCONTROLLERCREDENTIALQUEUE_H
#define PKPAYMENTPROVISIONINGCONTROLLERCREDENTIALQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {
    NSMutableArray *_credentials;
    NSMutableArray *_completedCredentials;
    NSUInteger _currentIndex;
}




-(NSUInteger)completedCount;
-(NSUInteger)count;
-(NSUInteger)remaining;
-(id)completedCredentials;
-(id)credentials;
-(id)init;
-(id)nextCredentialToProvision;
-(void)removeCredential:(id)arg0 ;
-(void)setCredentialsToProvision:(id)arg0 ;
-(void)setCurrentCredential:(id)arg0 ;


@end


#endif