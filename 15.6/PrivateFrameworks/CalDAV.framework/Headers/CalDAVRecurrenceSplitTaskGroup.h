// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVRECURRENCESPLITTASKGROUP_H
#define CALDAVRECURRENCESPLITTASKGROUP_H

@class CoreDAVTaskGroup, NSURL, NSArray;
@protocol CalDAVRecurrenceSplitTaskGroupDelegate;



@interface CalDAVRecurrenceSplitTaskGroup : CoreDAVTaskGroup {
    NSURL *_folderURL;
    NSArray *_actions;
}


@property (weak, nonatomic) NSObject<CalDAVRecurrenceSplitTaskGroupDelegate> *delegate;


-(id)initWithCalendar:(id)arg0 accountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)startTaskGroup;


@end


#endif