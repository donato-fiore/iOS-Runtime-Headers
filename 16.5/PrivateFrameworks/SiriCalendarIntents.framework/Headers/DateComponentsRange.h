// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DATECOMPONENTSRANGE_H
#define DATECOMPONENTSRANGE_H

@class INObject, NSNumber, NSDateComponents;


#import "RecurrenceRule.h"

@interface DateComponentsRange : INObject

@property (nonatomic, retain) NSNumber *allDay;
@property (nonatomic, copy) NSDateComponents *end;
@property (nonatomic, retain) RecurrenceRule *recurrenceRule;
@property (nonatomic, copy) NSDateComponents *start;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif