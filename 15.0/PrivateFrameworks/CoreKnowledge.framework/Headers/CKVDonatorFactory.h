// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVDONATORFACTORY_H
#define CKVDONATORFACTORY_H

@protocol CKVDonatorProvider, OS_dispatch_queue, CKVDonateServiceProvider, CKVDonateAuthorization;

#import <Foundation/Foundation.h>


@interface CKVDonatorFactory : NSObject <CKVDonatorProvider>

 {
    NSObject<OS_dispatch_queue> *_donatorQueue;
    NSObject<CKVDonateServiceProvider> *_serviceProvider;
    NSObject<CKVDonateAuthorization> *_authorization;
}




+(id)sharedDonatorFactory;
-(id)init;
-(id)initWithQueue:(id)arg0 serviceProvider:(id)arg1 authorization:(id)arg2 ;
-(id)makeDonatorForOriginApp:(id)arg0 ;


@end


#endif