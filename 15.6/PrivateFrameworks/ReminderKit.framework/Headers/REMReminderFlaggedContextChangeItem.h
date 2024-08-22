// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMREMINDERFLAGGEDCONTEXTCHANGEITEM_H
#define REMREMINDERFLAGGEDCONTEXTCHANGEITEM_H


#import <Foundation/Foundation.h>

#import "REMReminderChangeItem.h"

@interface REMReminderFlaggedContextChangeItem : NSObject

@property (nonatomic) NSInteger flagged;
@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem; // ivar: _reminderChangeItem


-(id)initWithReminderChangeItem:(id)arg0 ;


@end


#endif