// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKPROFILESTORE_H
#define HKPROFILESTORE_H

@class HKObserverSet<HKProfileStoreObserver>, NSString;
@protocol _HKXPCExportable, HKProfileStoreClient;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKProfileStore : NSObject <_HKXPCExportable, HKProfileStoreClient>

 {
    HKProxyProvider *_proxyProvider;
    HKObserverSet<HKProfileStoreObserver> *_observers;
    BOOL _startedObserving;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(id)synchronouslyFetchFirstName;
// -(void)_fetchProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_getSynchronousProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)addObserver:(id)arg0 completion:(id)arg1 ;
-(void)client_remoteDidUpdateProfileList;
-(void)connectionInvalidated;
-(void)createProfileOfType:(NSInteger)arg0 displayName:(id)arg1 completion:(id)arg2 ;
-(void)deleteProfile:(id)arg0 completion:(id)arg1 ;
-(void)dispatchProfileListDidUpdate;
-(void)fetchAllProfilesWithCompletion:(id)arg0 ;
-(void)fetchDisplayImageData:(id)arg0 ;
-(void)fetchDisplayName:(id)arg0 ;
-(void)fetchProfileIdentifierForNRDeviceUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchProfileIdentifierForNRDeviceUUID:(id)arg0 ownerAppleID:(id)arg1 completion:(id)arg2 ;
-(void)fetchSharingInformationForProfileIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)setDisplayFirstName:(id)arg0 lastName:(id)arg1 completion:(id)arg2 ;
-(void)setDisplayImageData:(id)arg0 completion:(id)arg1 ;
-(void)startObservingWithCompletion:(id)arg0 ;


@end


#endif