// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVMODIFYSHAREDCALENDARSHAREELISTTASKGROUP_H
#define CALDAVMODIFYSHAREDCALENDARSHAREELISTTASKGROUP_H

@class CoreDAVTaskGroup, NSURL, NSString, NSMutableSet, NSSet;
@protocol CoreDAVPostTaskDelegate, CoreDAVTaskGroupDelegate;



@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate>



@property (retain, nonatomic) NSURL *calendarURL; // ivar: _calendarURL
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *invalidSharees; // ivar: _invalidSharees
@property BOOL muteNotifications; // ivar: _muteNotifications
@property (retain, nonatomic) NSSet *shareesToRemove; // ivar: _shareesToRemove
@property (retain, nonatomic) NSSet *shareesToSet; // ivar: _shareesToSet
@property (retain, nonatomic) NSString *summary; // ivar: _summary
@property (readonly) Class superclass;


-(id)generateModificationMessageBody;
-(id)initWithAccountInfoProvider:(id)arg0 taskManager:(id)arg1 ;
-(id)initWithShareesToSet:(id)arg0 shareesToRemove:(id)arg1 muteNotifications:(BOOL)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 ;
-(void)startTaskGroup;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif