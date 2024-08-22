// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVUPDATEFREEBUSYSETTASKGROUP_H
#define CALDAVUPDATEFREEBUSYSETTASKGROUP_H

@class CoreDAVTaskGroup, NSString, CoreDAVPropFindTask, NSURL;
@protocol CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate;



@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CoreDAVPropFindTask *fetchTask; // ivar: _fetchTask
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *inboxURL; // ivar: _inboxURL
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) NSString *suffixToFilterOut; // ivar: _suffixToFilterOut
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *urlToAdd; // ivar: _urlToAdd


-(id)initWithAccountInfoProvider:(id)arg0 inboxURL:(id)arg1 urlToAdd:(id)arg2 suffixToFilterOut:(id)arg3 taskManager:(id)arg4 ;
-(void)_finishWithError:(id)arg0 state:(int)arg1 ;
-(void)_startFetchFreeBusySet;
-(void)_startPropPatchWithURLs:(id)arg0 ;
-(void)propFindTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)propPatchTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)startTaskGroup;
-(void)taskGroupWillCancelWithError:(id)arg0 ;


@end


#endif