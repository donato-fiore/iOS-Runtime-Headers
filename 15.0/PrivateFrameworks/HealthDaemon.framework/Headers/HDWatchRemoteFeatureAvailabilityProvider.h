// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDWATCHREMOTEFEATUREAVAILABILITYPROVIDER_H
#define HDWATCHREMOTEFEATUREAVAILABILITYPROVIDER_H

@class NSString, NRPairedDeviceRegistry, NSUserDefaults;
@protocol HDRemoteFeatureAvailabilityProviding, OS_os_log, HDRemoteFeatureAvailabilityProvidingDelegate;

#import <Foundation/Foundation.h>


@interface HDWatchRemoteFeatureAvailabilityProvider : NSObject <HDRemoteFeatureAvailabilityProviding>

 {
    NSString *_remoteDisableCondition;
    NSString *_seedExpirationCondition;
    NSObject<OS_os_log> *_loggingCategory;
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
    NSUserDefaults *_remoteFeatureAvailabilityUserDefaults;
}


@property (weak, nonatomic) NSObject<HDRemoteFeatureAvailabilityProvidingDelegate> *delegate; // ivar: _delegate


-(id)description;
-(id)initWithFeatureIdentifier:(id)arg0 loggingCategory:(id)arg1 ;
-(id)initWithRemoteDisableCondition:(id)arg0 seedExpirationCondition:(id)arg1 loggingCategory:(id)arg2 ;
-(id)rescindedStatusForCountryCode:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
-(id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setPairedDeviceRegistry:(id)arg0 ;
-(void)setRemoteFeatureAvailabilityUserDefaults:(id)arg0 ;


@end


#endif