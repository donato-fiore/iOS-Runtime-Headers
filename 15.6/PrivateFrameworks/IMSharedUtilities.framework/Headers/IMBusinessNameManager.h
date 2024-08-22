// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMBUSINESSNAMEMANAGER_H
#define IMBUSINESSNAMEMANAGER_H

@class NSMutableDictionary, NSLock;

#import <Foundation/Foundation.h>


@interface IMBusinessNameManager : NSObject

@property (retain) NSMutableDictionary *cache; // ivar: _cache
@property (retain) NSLock *cacheLock; // ivar: _cacheLock
@property (retain) NSMutableDictionary *pendingRequests; // ivar: _pendingRequests


+(id)placeholderBusinessName;
+(id)sharedInstance;
-(id)businessNameForUID:(id)arg0 updateHandler:(id)arg1 ;
-(id)init;
-(void)_fetchBusinessNameForUID:(id)arg0 ;
-(void)_fetchedBrandName:(id)arg0 forUID:(id)arg1 ;


@end


#endif