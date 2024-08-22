// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMLISTCALDAVNOTIFICATIONCONTEXTCHANGEITEM_H
#define REMLISTCALDAVNOTIFICATIONCONTEXTCHANGEITEM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "REMListChangeItem.h"

@interface REMListCalDAVNotificationContextChangeItem : NSObject

@property (readonly, nonatomic) NSArray *calDAVNotifications;
@property (retain, nonatomic) REMListChangeItem *listChangeItem; // ivar: _listChangeItem


-(id)addCalDAVNotificationWithUUIDString:(id)arg0 hostURL:(id)arg1 externalIdentifier:(id)arg2 externalModificationTag:(id)arg3 ;
-(id)initWithListChangeItem:(id)arg0 ;
-(void)_addCalDAVNotification:(id)arg0 ;
-(void)clearCalDAVNotifications;
-(void)removeCalDAVNotication:(id)arg0 ;
-(void)updateCalDAVNotification:(id)arg0 withBlock:(id)arg1 ;


@end


#endif