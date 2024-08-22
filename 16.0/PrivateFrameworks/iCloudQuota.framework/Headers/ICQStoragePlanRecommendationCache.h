// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQSTORAGEPLANRECOMMENDATIONCACHE_H
#define ICQSTORAGEPLANRECOMMENDATIONCACHE_H

@class NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface ICQStoragePlanRecommendationCache : NSObject {
    NSNumber *_extraQuotaNeeded;
    NSDate *_expiry;
    os_unfair_lock_s _cacheLock;
}




+(id)sharedInstance;
-(id)extraQuotaNeeded;
-(id)init;
-(void)setExtraQuotaNeeded:(id)arg0 expiry:(id)arg1 ;


@end


#endif