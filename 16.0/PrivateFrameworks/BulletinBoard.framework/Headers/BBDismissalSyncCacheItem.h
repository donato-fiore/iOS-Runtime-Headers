// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BBDISMISSALSYNCCACHEITEM_H
#define BBDISMISSALSYNCCACHEITEM_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BBDismissalSyncCacheItem : NSObject

@property (readonly, nonatomic) NSMutableArray *dismissalDictionariesAndFeeds; // ivar: _dismissalDictionariesAndFeeds
@property (readonly, nonatomic) NSMutableDictionary *dismissalIDToFeeds; // ivar: _dismissalIDToFeeds


-(id)description;
-(id)findBulletinMatch:(id)arg0 ;
-(id)init;
-(id)purgeExpired;
-(void)cacheDismissalDictionaries:(id)arg0 dismissalIDs:(id)arg1 forFeeds:(NSUInteger)arg2 ;
-(void)removeBulletinMatch:(id)arg0 ;


@end


#endif