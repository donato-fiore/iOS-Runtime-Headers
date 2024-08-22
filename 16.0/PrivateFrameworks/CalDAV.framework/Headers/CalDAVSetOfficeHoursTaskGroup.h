// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVSETOFFICEHOURSTASKGROUP_H
#define CALDAVSETOFFICEHOURSTASKGROUP_H

@class CoreDAVTaskGroup, ICSDocument, NSString, NSURL;
@protocol CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate;



@interface CalDAVSetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>



@property (retain, nonatomic) ICSDocument *calendarAvailability; // ivar: _calendarAvailability
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *inboxURL; // ivar: _inboxURL
@property (readonly) Class superclass;


-(id)initWithAccountInfoProvider:(id)arg0 inboxURL:(id)arg1 calendarAvailability:(id)arg2 taskManager:(id)arg3 ;
-(void)propPatchTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)startTaskGroup;


@end


#endif