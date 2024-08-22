// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKSUGGESTIONCOALESCEDINFO_H
#define CUIKSUGGESTIONCOALESCEDINFO_H

@class NSString, EKCalendarSuggestionNotification;

#import <Foundation/Foundation.h>


@interface CUIKSuggestionCoalescedInfo : NSObject

@property (readonly) NSString *descriptionText; // ivar: _descriptionText
@property (readonly) EKCalendarSuggestionNotification *earliestSuggestionNotification; // ivar: _earliestSuggestionNotification
@property (readonly) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 descriptionText:(id)arg1 earliestSuggestionNotification:(id)arg2 ;


@end


#endif