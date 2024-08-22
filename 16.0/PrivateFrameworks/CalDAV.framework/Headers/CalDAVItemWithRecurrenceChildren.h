// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVITEMWITHRECURRENCECHILDREN_H
#define CALDAVITEMWITHRECURRENCECHILDREN_H

@class CoreDAVItem, NSMutableSet;



@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *recurrences; // ivar: _recurrences


-(id)copyParseRules;
-(void)addRecurrence:(id)arg0 ;


@end


#endif