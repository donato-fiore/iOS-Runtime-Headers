// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMREMINDERFLAGGEDCONTEXT_H
#define REMREMINDERFLAGGEDCONTEXT_H


#import <Foundation/Foundation.h>

#import "REMReminder.h"

@interface REMReminderFlaggedContext : NSObject

@property (readonly, nonatomic) NSInteger flagged;
@property (retain, nonatomic) REMReminder *reminder; // ivar: _reminder


-(id)initWithReminder:(id)arg0 ;


@end


#endif