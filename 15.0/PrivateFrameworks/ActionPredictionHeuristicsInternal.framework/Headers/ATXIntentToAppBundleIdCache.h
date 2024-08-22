// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXINTENTTOAPPBUNDLEIDCACHE_H
#define ATXINTENTTOAPPBUNDLEIDCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXIntentToAppBundleIdCache : NSObject {
    NSMutableDictionary *_intentTypeToBundleIdsCache;
}




+(id)sharedInstance;
-(id)init;
-(void)_appRegistrationDidChange:(id)arg0 ;
-(void)_slowlyFetchBundleIdsForIntent:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchBundleIdsForIntent:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif