// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCLEARONNOTIFICATIONLRUCACHE_H
#define ICCLEARONNOTIFICATIONLRUCACHE_H

@protocol NSObject;


#import "ICAtomicLRUCache.h"

@interface ICClearOnNotificationLRUCache : ICAtomicLRUCache

@property (retain, nonatomic) NSObject<NSObject> *notificationToken; // ivar: _notificationToken


-(id)initWithMaxSize:(NSUInteger)arg0 notificationName:(id)arg1 ;
-(void)dealloc;


@end


#endif