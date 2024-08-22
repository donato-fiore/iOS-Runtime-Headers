// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVSCHEDULERESPONSEITEM_H
#define CALDAVSCHEDULERESPONSEITEM_H

@class CoreDAVItem, NSMutableSet;



@interface CalDAVScheduleResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *failedResponseItems; // ivar: _failedResponseItems
@property (retain, nonatomic) NSMutableSet *responses; // ivar: _responses
@property (retain, nonatomic) NSMutableSet *successfulICS; // ivar: _successfulICS


-(id)copyParseRules;
-(id)description;
-(void)addNewTopLevelItem:(id)arg0 ;


@end


#endif