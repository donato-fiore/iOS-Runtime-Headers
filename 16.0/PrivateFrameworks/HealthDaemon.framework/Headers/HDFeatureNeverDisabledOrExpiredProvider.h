// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDFEATURENEVERDISABLEDOREXPIREDPROVIDER_H
#define HDFEATURENEVERDISABLEDOREXPIREDPROVIDER_H

@protocol HDFeatureDisableAndExpiryProviding, HDFeatureDisableAndExpiryProvidingDelegate;

#import <Foundation/Foundation.h>


@interface HDFeatureNeverDisabledOrExpiredProvider : NSObject <HDFeatureDisableAndExpiryProviding>



@property (weak, nonatomic) NSObject<HDFeatureDisableAndExpiryProvidingDelegate> *delegate; // ivar: _delegate


-(id)rescindedStatusForCountryCode:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
-(id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)arg0 error:(*id)arg1 ;


@end


#endif