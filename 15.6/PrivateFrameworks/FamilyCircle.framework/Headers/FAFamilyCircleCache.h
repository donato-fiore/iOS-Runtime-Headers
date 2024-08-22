// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAFAMILYCIRCLECACHE_H
#define FAFAMILYCIRCLECACHE_H

@class ACAccount;

#import <Foundation/Foundation.h>


@interface FAFamilyCircleCache : NSObject

@property (readonly, nonatomic) ACAccount *account; // ivar: _account


+(id)cacheQueue;
-(BOOL)_isCacheDate:(id)arg0 withinDuration:(CGFloat)arg1 ;
-(id)_cacheDataWithFamilyCircle:(id)arg0 ;
-(id)_cacheURL;
-(id)_cacheURLWithError:(*id)arg0 ;
-(id)_createCacheFile;
-(id)_fetchData:(*id)arg0 ;
-(id)_onQueue:(id)arg0 ;
-(id)_username;
-(id)initWithAccount:(id)arg0 ;
-(id)invalidate;
-(id)load;
-(id)load:(*id)arg0 ;
-(id)updateWithFamilyCircle:(id)arg0 ;


@end


#endif