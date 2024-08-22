// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUIELIGIBLETIPPICKER_H
#define ICQUIELIGIBLETIPPICKER_H

@class ACAccount, ICQStoragePlanRecommendation;

#import <Foundation/Foundation.h>


@interface ICQUIEligibleTipPicker : NSObject {
    ACAccount *_account;
    ICQStoragePlanRecommendation *_planRecommendation;
}




-(BOOL)_deviceStoragePassesCriteria:(id)arg0 freeCloudStorage:(id)arg1 ;
-(BOOL)_eligibleForSyncWithiCloudTipExcludingApps:(id)arg0 ;
-(id)initWithAccount:(id)arg0 planRecommendation:(id)arg1 ;
-(void)getFirstEligibleTipFromTips:(id)arg0 completion:(id)arg1 ;


@end


#endif