// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVMODIFYCALENDARSHARINGLEVELTASKGROUP_H
#define CALDAVMODIFYCALENDARSHARINGLEVELTASKGROUP_H

@class CoreDAVTaskGroup, NSString, NSURL;
@protocol CoreDAVPropPatchTaskDelegate;



@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>



@property (nonatomic) int action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *publishedURL; // ivar: _publishedURL
@property (nonatomic) int state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)initWithAccountInfoProvider:(id)arg0 taskManager:(id)arg1 ;
-(id)initWithSharingAction:(int)arg0 atCalendarURL:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3 ;
-(void)finishWithError:(id)arg0 ;
-(void)startTaskGroup;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif