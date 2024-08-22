// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIAACCESSORYADVERTISEMENT_H
#define HMDMEDIAACCESSORYADVERTISEMENT_H

@protocol HMDWACAccessoryAssociation, HMFLocking;


#import "HMDAccessoryAdvertisement.h"
#import "HMDMediaOutputDevice.h"

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement <HMDWACAccessoryAssociation>

 {
    id<HMFLocking> *_lock;
}


@property (getter=isAssociated) BOOL associated; // ivar: _associated
@property (retain) HMDMediaOutputDevice *outputDevice; // ivar: _outputDevice


+(BOOL)canAirPortExpressSupportMediaAccessory:(id)arg0 ;
-(BOOL)matchesWACDeviceID:(id)arg0 ;
-(NSInteger)associationOptions;
-(id)description;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 category:(id)arg2 ;
-(id)initWithOutputDevice:(id)arg0 ;


@end


#endif