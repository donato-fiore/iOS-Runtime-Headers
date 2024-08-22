// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLEMEDIAACCESSORIESSTATEMANAGER_H
#define HMDAPPLEMEDIAACCESSORIESSTATEMANAGER_H

@class HMFObject, NSString, NSUUID;
@protocol HMDAppleMediaAccessoriesStateMessengerDelegate, HMFLogging, HMDAppleMediaAccessoriesStateManagerDataSource;


#import "HMDAppleMediaAccessoriesStateMessenger.h"
#import "HMDAppleMediaAccessoriesStateManagerMetricsDispatcher.h"

@interface HMDAppleMediaAccessoriesStateManager : HMFObject <HMDAppleMediaAccessoriesStateMessengerDelegate, HMFLogging>



@property (weak) NSObject<HMDAppleMediaAccessoriesStateManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMDAppleMediaAccessoriesStateMessenger *messenger; // ivar: _messenger
@property (readonly) HMDAppleMediaAccessoriesStateManagerMetricsDispatcher *metricsDispatcher; // ivar: _metricsDispatcher
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithIdentifier:(id)arg0 messenger:(id)arg1 metricsDispatcher:(id)arg2 ;
-(id)logIdentifier;
-(id)remoteAppleMediaAccessories;
-(id)remoteAppleMediaAccessoriesByIdentifier;
-(id)sendModelIdentifierRequestMessageForAppleMediaAccessory:(id)arg0 accessoryIdentifier:(id)arg1 ;
-(void)_correctStateForMatchingIdentifier:(id)arg0 appleMediaAccessories:(id)arg1 sendList:(id)arg2 ;
-(void)appleMediaAccessoriesStateMessenger:(id)arg0 didReceiveModelIdentiferRequestMessage:(id)arg1 withAccessoryIdentifier:(id)arg2 ;
-(void)correctStateForMatchingAppleMediaAccessories:(id)arg0 modelIdentifier:(id)arg1 ;
-(void)correctStateForMatchingIdentifier:(id)arg0 appleMediaAccessories:(id)arg1 ;
-(void)run;
-(void)runMultipleIdentifierCorrectionSequence;


@end


#endif