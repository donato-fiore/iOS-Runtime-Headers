// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSAPPRANKER_H
#define BCSAPPRANKER_H


#import <Foundation/Foundation.h>


@interface BCSAppRanker : NSObject



+(id)bundleIdentifierOfLastUsedAppForURL:(id)arg0 ;
+(id)orderAppLinks:(id)arg0 forLastUsedApp:(id)arg1 ;
+(id)orderApplicationRecords:(id)arg0 forPreferredBundleID:(id)arg1 ;
+(id)orderApps:(id)arg0 forLastUsedApp:(id)arg1 ;
+(void)setLastUsedApp:(id)arg0 forURL:(id)arg1 ;


@end


#endif