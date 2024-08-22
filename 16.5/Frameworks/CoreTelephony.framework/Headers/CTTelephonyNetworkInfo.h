// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTTELEPHONYNETWORKINFO_H
#define CTTELEPHONYNETWORKINFO_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol CoreTelephonyClientDataDelegateInternal, CoreTelephonyClientRegistrationDelegateInternal, CTTelephonyNetworkInfoDelegate;

#import <Foundation/Foundation.h>

#import "CoreTelephonyClient.h"
#import "CTTelephonyNetworkInfoDelegatePlus.h"
#import "CTServiceDescriptorContainer.h"
#import "CTCarrier.h"

@interface CTTelephonyNetworkInfo : NSObject <CoreTelephonyClientDataDelegateInternal, CoreTelephonyClientRegistrationDelegateInternal>

 {
    CoreTelephonyClient *_client;
    CoreTelephonyClient *_clientPlus;
    CTTelephonyNetworkInfoDelegatePlus *_delegatePlus;
    id<CTTelephonyNetworkInfoDelegate> *_delegate;
    id *_subscriberCellularProviderDidUpdateNotifier;
    BOOL _initialized;
}


@property (retain) NSMutableDictionary *cachedCellIds; // ivar: _cachedCellIds
@property (retain) NSMutableDictionary *cachedCurrentRadioAccessTechnology; // ivar: _cachedCurrentRadioAccessTechnology
@property int cachedDataBearerCellularTechnology; // ivar: _cachedDataBearerCellularTechnology
@property unsigned int cachedNrFrequencyRange; // ivar: _cachedNrFrequencyRange
@property (retain) NSMutableDictionary *cachedSignalStrength; // ivar: _cachedSignalStrength
@property queue clientQueue; // ivar: _clientQueue
@property (readonly, retain, nonatomic) NSString *currentRadioAccessTechnology;
@property BOOL dataBearerCellularTechnologyInitialized; // ivar: _dataBearerCellularTechnologyInitialized
@property (readonly, copy) NSString *dataServiceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<CTTelephonyNetworkInfoDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) CTServiceDescriptorContainer *descriptors; // ivar: _descriptors
@property (readonly) NSUInteger hash;
@property BOOL nrFrequencyRangeInitialized; // ivar: _nrFrequencyRangeInitialized
@property (readonly, retain, nonatomic) NSDictionary *serviceCurrentRadioAccessTechnology;
@property (retain) NSMutableDictionary *serviceSubscriberCellularProviders; // ivar: _serviceSubscriberCellularProviders
@property (copy, nonatomic) id *serviceSubscriberCellularProvidersDidUpdateNotifier; // ivar: _serviceSubscriberCellularProvidersDidUpdateNotifier
@property (readonly, retain) CTCarrier *subscriberCellularProvider;
@property (copy, nonatomic) id *subscriberCellularProviderDidUpdateNotifier;
@property (readonly) Class superclass;


-(BOOL)getAllowsVOIP:(*BOOL)arg0 forContext:(id)arg1 withError:(*id)arg2 ;
-(BOOL)getCarrierName:(id)arg0 forContext:(id)arg1 withError:(*id)arg2 ;
-(BOOL)getMobileCountryCode:(id)arg0 andIsoCountryCode:(id)arg1 forContext:(id)arg2 withError:(*id)arg3 ;
-(BOOL)getMobileNetworkCode:(id)arg0 forContext:(id)arg1 withError:(*id)arg2 ;
-(BOOL)updateNetworkInfoAndShouldNotifyClient:(*BOOL)arg0 forContext:(id)arg1 ;
-(id)cellId;
-(id)currentDataBearerTechnology;
-(id)currentNrFrequencyRange;
-(id)getFirstCellId;
-(id)init;
-(id)initWithClient:(id)arg0 ;
-(id)radioAccessTechnology;
-(id)serviceCellId;
-(id)serviceSignalStrength;
-(id)serviceSubscribersCellularProviderDidUpdateNotifier:(SEL)arg0 ;
-(id)signalStrength;
-(void)carrierBundleChange:(id)arg0 ;
-(void)cellChanged:(id)arg0 cell:(id)arg1 ;
-(void)currentDataServiceDescriptorChanged:(id)arg0 ;
-(void)dataStatusUpdate:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)dealloc;
-(void)postNotificationIfReady:(id)arg0 object:(id)arg1 ;
-(void)queryCTSignalStrength;
-(void)queryCellIds;
-(void)queryDataBearer;
-(void)queryNrFrequencyRange;
-(void)queryRat;
-(void)queryRatForDescriptor:(id)arg0 ;
-(void)querySignalStrengthForDescriptor:(id)arg0 ;
-(void)regDataModeChanged:(id)arg0 dataMode:(int)arg1 ;
-(void)setServiceSubscriberCellularProviderDidUpdateNotifier:(id)arg0 ;
-(void)signalStrengthChanged:(id)arg0 info:(id)arg1 ;
-(void)tryInitDataBearer;
-(void)tryInitDelegatePlus;
-(void)tryInitNrFrequencyRange;
-(void)tryInitPrivateFunctionality;
-(void)updateCellId:(id)arg0 forDescriptor:(id)arg1 ;
-(void)updateDataBearer:(int)arg0 ;
-(void)updateLegacyRat:(id)arg0 ;
-(void)updateNrFrequencyRange:(unsigned int)arg0 ;
-(void)updateRat:(id)arg0 descriptor:(id)arg1 ;
-(void)updateSignalStrength:(id)arg0 descriptor:(id)arg1 ;


@end


#endif