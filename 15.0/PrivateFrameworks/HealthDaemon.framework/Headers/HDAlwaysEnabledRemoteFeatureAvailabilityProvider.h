// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDALWAYSENABLEDREMOTEFEATUREAVAILABILITYPROVIDER_H
#define HDALWAYSENABLEDREMOTEFEATUREAVAILABILITYPROVIDER_H

@protocol HDRemoteFeatureAvailabilityProviding, HDRemoteFeatureAvailabilityProvidingDelegate;

#import <Foundation/Foundation.h>


@interface HDAlwaysEnabledRemoteFeatureAvailabilityProvider : NSObject <HDRemoteFeatureAvailabilityProviding>



@property (weak, nonatomic) NSObject<HDRemoteFeatureAvailabilityProvidingDelegate> *delegate; // ivar: _delegate


-(id)rescindedStatusForCountryCode:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
-(id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)arg0 error:(*id)arg1 ;


@end


#endif