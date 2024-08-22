// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFAMILYCIRCLECACHE_H
#define ATXFAMILYCIRCLECACHE_H


#import <Foundation/Foundation.h>


@interface ATXFamilyCircleCache : NSObject



+(id)cachedDefaultsKey;
+(id)lastFetchDateDefaultsKey;
-(BOOL)hasiCloudFamily;
-(id)_fetchFamilyCircleWithUserDefaults:(id)arg0 ;
-(id)_requestUpdatedFamilyCircle;
-(id)fetchFamilyCircle;


@end


#endif