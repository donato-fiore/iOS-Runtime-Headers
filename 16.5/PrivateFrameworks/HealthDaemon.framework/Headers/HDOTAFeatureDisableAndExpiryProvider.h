// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDOTAFEATUREDISABLEANDEXPIRYPROVIDER_H
#define HDOTAFEATUREDISABLEANDEXPIRYPROVIDER_H

@class NSString, NRPairedDeviceRegistry;
@protocol HDOTAFeatureAvailabilityObserver, HDFeatureDisableAndExpiryProviding, OS_os_log, HDFeatureDisableAndExpiryProvidingDelegate;

#import <Foundation/Foundation.h>

#import "HDOTAFeatureAvailabilityManager.h"

@interface HDOTAFeatureDisableAndExpiryProvider : NSObject <HDOTAFeatureAvailabilityObserver, HDFeatureDisableAndExpiryProviding>

 {
    NSString *_remoteDisableCondition;
    NSString *_seedExpirationCondition;
    NSObject<OS_os_log> *_loggingCategory;
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
    HDOTAFeatureAvailabilityManager *_OTAFeatureAvailabilityManager;
}


@property (weak, nonatomic) NSObject<HDFeatureDisableAndExpiryProvidingDelegate> *delegate; // ivar: _delegate


-(id)description;
-(id)initWithDaemon:(id)arg0 featureIdentifier:(id)arg1 ;
-(id)initWithDaemon:(id)arg0 remoteDisableCondition:(id)arg1 seedExpirationCondition:(id)arg2 ;
-(id)rescindedStatusForCountryCode:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
-(id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)arg0 error:(*id)arg1 ;
-(void)OTAFeatureAvailabilityManagerDidUpdateFeatureAvailabilityInfo:(id)arg0 ;
-(void)setPairedDeviceRegistry:(id)arg0 ;


@end


#endif