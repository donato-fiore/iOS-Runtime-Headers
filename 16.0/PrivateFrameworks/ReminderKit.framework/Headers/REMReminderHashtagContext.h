// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMREMINDERHASHTAGCONTEXT_H
#define REMREMINDERHASHTAGCONTEXT_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "REMReminder.h"

@interface REMReminderHashtagContext : NSObject

@property (readonly, nonatomic) NSSet *hashtags;
@property (weak, nonatomic) REMReminder *reminder; // ivar: _reminder


-(id)initWithReminder:(id)arg0 ;


@end


#endif