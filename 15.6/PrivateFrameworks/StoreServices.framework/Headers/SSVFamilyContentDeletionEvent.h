// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVFAMILYCONTENTDELETIONEVENT_H
#define SSVFAMILYCONTENTDELETIONEVENT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SSVFamilyContentDeletionEvent : NSObject

@property (readonly, nonatomic) NSArray *deletedAccounts; // ivar: _deletedAccounts


+(id)notificationPayloadWithAccountPairs:(id)arg0 ;
+(void)postDistributedNotificationWithAccountPairs:(id)arg0 ;
-(id)initWithNotificationUserInfo:(id)arg0 ;
-(id)initWithXPCEventStreamEvent:(id)arg0 ;


@end


#endif