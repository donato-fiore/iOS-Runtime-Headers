// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVGETOFFICEHOURSTASKGROUP_H
#define CALDAVGETOFFICEHOURSTASKGROUP_H

@class CoreDAVTaskGroup, ICSDocument, NSString, CoreDAVPropFindTask, NSURL;
@protocol CoreDAVPropFindTaskDelegate, CoreDAVTaskGroupDelegate;



@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>



@property (retain, nonatomic) ICSDocument *calendarAvailability; // ivar: _calendarAvailability
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CoreDAVPropFindTask *fetchTask; // ivar: _fetchTask
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *inboxURL; // ivar: _inboxURL
@property (readonly) Class superclass;


-(id)initWithAccountInfoProvider:(id)arg0 inboxURL:(id)arg1 taskManager:(id)arg2 ;
-(void)_finishWithError:(id)arg0 ;
-(void)propFindTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)startTaskGroup;


@end


#endif