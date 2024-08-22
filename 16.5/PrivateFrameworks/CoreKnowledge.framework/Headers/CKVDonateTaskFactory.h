// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVDONATETASKFACTORY_H
#define CKVDONATETASKFACTORY_H

@class KMProviderBridgeFactory, NSString;
@protocol CKVDonateTaskProvider, OS_dispatch_queue, CKVDonatorProvider;

#import <Foundation/Foundation.h>


@interface CKVDonateTaskFactory : NSObject <CKVDonateTaskProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<CKVDonatorProvider> *_donatorProvider;
    CGFloat _timeout;
    KMProviderBridgeFactory *_factory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property BOOL useSimulatedProviderBridge; // ivar: _useSimulatedProviderBridge


-(id)derivativeTaskForId:(unsigned short)arg0 usingSettings:(id)arg1 modifiedItemIds:(id)arg2 deletedItemIds:(id)arg3 ;
-(id)init;
-(id)initWithQueue:(id)arg0 serviceProvider:(id)arg1 timeout:(CGFloat)arg2 ;
-(id)taskForId:(unsigned short)arg0 usingSettings:(id)arg1 ;
-(id)verificationTaskForId:(unsigned short)arg0 ;
-(void)enableSimulatedTasks:(BOOL)arg0 ;


@end


#endif