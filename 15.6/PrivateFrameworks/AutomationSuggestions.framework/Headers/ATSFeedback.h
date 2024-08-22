// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSFEEDBACK_H
#define ATSFEEDBACK_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ATSSuggestion.h"

@interface ATSFeedback : NSObject

@property (nonatomic) NSInteger action; // ivar: _action
@property (retain, nonatomic) NSString *automationIdentifier; // ivar: _automationIdentifier
@property (retain, nonatomic) ATSSuggestion *suggestion; // ivar: _suggestion


+(id)feedbackForAction:(NSInteger)arg0 suggestion:(id)arg1 automationIdentifier:(id)arg2 ;
-(id)description;
-(void)submitTelemetryFeedback;


@end


#endif