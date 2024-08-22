// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCALENDAREVENTACTIONACTIVITYPROVIDER_H
#define SXCALENDAREVENTACTIONACTIVITYPROVIDER_H

@class NSString;
@protocol SXActionActivityProvider, SXCalendarPresenter, SXHost;

#import <Foundation/Foundation.h>


@interface SXCalendarEventActionActivityProvider : NSObject <SXActionActivityProvider>



@property (readonly, nonatomic) NSObject<SXCalendarPresenter> *calendarPresenter; // ivar: _calendarPresenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXHost> *host; // ivar: _host
@property (readonly) Class superclass;


-(id)activityGroupForAction:(id)arg0 ;
-(id)initWithCalendarPresenter:(id)arg0 host:(id)arg1 ;
-(void)createEvent:(id)arg0 ;
-(void)showInCalendar:(id)arg0 ;


@end


#endif