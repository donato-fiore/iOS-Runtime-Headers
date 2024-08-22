// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODELOGGER_H
#define ATXMODELOGGER_H

@class NSDateFormatter, NSUserDefaults;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXModeDuetHelper.h"

@interface ATXModeLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDateFormatter *_formatter;
    NSUserDefaults *_defaults;
    ATXModeDuetHelper *_duetHelper;
}


@property BOOL shareDiagnosticDataWrapper; // ivar: _shareDiagnosticDataWrapper


-(id)_lastSubmissionDate;
-(id)_userDefaults;
-(id)_userID;
-(id)initWithDuetHelper:(id)arg0 ;
-(id)stringForDate:(id)arg0 ;
-(void)_updateLastSubmissionDate:(id)arg0 ;
-(void)logEventsFromModeStream;


@end


#endif