// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBDISMISSALSYNCCACHE_H
#define BBDISMISSALSYNCCACHE_H

@class NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface BBDismissalSyncCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache; // ivar: _cache
@property (retain, nonatomic) NSDate *timeToCheck; // ivar: _timeToCheck


-(BOOL)_isTimeToCheck;
-(id)description;
-(id)findBulletinMatch:(id)arg0 ;
-(id)init;
-(void)_checkCache;
-(void)cacheDismissalDictionaries:(id)arg0 dismissalIDs:(id)arg1 inSection:(id)arg2 forFeeds:(NSUInteger)arg3 ;
-(void)removeBulletinMatch:(id)arg0 ;


@end


#endif