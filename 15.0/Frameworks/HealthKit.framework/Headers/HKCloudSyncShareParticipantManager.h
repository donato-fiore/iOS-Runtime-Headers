// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCLOUDSYNCSHAREPARTICIPANTMANAGER_H
#define HKCLOUDSYNCSHAREPARTICIPANTMANAGER_H

@class NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"
#import "HKHealthStore.h"

@interface HKCloudSyncShareParticipantManager : NSObject <_HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
    HKHealthStore *_healthStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger lastKnownParticipantSharingStatus;
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)fetchAllShareParticipantEmailAddressesForSharingType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)revokeAccessForAllShareParticipantsForSharingType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)tearDownHealthSharingForProfile:(id)arg0 completion:(id)arg1 ;


@end


#endif