// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEALTHSTOREPROVIDER_H
#define HKHEALTHSTOREPROVIDER_H

@class NSString;
@protocol _HKXPCExportable, HKHealthStoreProviderProxyProvider;

#import <Foundation/Foundation.h>


@interface HKHealthStoreProvider : NSObject <_HKXPCExportable>

 {
    id<HKHealthStoreProviderProxyProvider> *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithProxyProvider:(id)arg0 ;
-(id)remoteInterface;
// -(void)_fetchProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)connectionInvalidated;
-(void)fetchAvailableIdentifiersWithCompletion:(id)arg0 ;
-(void)fetchStoreForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)requestAuthorizationToNewStoreToShareTypes:(id)arg0 readTypes:(id)arg1 completion:(id)arg2 ;
-(void)requestAuthorizationToNewStoreWithCompletion:(id)arg0 ;


@end


#endif