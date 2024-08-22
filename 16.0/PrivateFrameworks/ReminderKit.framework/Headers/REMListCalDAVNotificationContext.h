// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMLISTCALDAVNOTIFICATIONCONTEXT_H
#define REMLISTCALDAVNOTIFICATIONCONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "REMList.h"

@interface REMListCalDAVNotificationContext : NSObject

@property (readonly, nonatomic) NSArray *calDAVNotifications;
@property (retain, nonatomic) REMList *list; // ivar: _list


-(id)initWithList:(id)arg0 ;


@end


#endif