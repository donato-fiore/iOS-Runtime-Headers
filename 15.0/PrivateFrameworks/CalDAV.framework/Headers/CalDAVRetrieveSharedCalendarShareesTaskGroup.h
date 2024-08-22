// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVRETRIEVESHAREDCALENDARSHAREESTASKGROUP_H
#define CALDAVRETRIEVESHAREDCALENDARSHAREESTASKGROUP_H

@class CoreDAVTaskGroup, NSString, NSSet, NSURL;
@protocol CoreDAVPropFindTaskDelegate;



@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *sharees; // ivar: _sharees
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)initWithAccountInfoProvider:(id)arg0 taskManager:(id)arg1 ;
-(id)initWithCalendarURL:(id)arg0 accountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)startTaskGroup;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif