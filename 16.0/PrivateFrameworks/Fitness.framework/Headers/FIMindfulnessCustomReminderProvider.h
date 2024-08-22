// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIMINDFULNESSCUSTOMREMINDERPROVIDER_H
#define FIMINDFULNESSCUSTOMREMINDERPROVIDER_H

@class NPSManager;

#import <Foundation/Foundation.h>


@interface FIMindfulnessCustomReminderProvider : NSObject {
    NPSManager *_syncManager;
}




-(id)init;
-(id)reminders;
-(void)updateReminders:(id)arg0 ;


@end


#endif