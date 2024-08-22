// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADCLIENTSUBSCRIBEDCALENDARJUNKREPORTDELEGATE_H
#define DADCLIENTSUBSCRIBEDCALENDARJUNKREPORTDELEGATE_H

@class NSString;


#import "DADClientDelegate.h"

@interface DADClientSubscribedCalendarJunkReportDelegate : DADClientDelegate

@property (retain, nonatomic) NSString *requestID; // ivar: _requestID


-(id)_createURLRequestForSubscriptionCalendarURL:(id)arg0 ;
-(id)_findCalendarURLFromAccount:(id)arg0 ;
-(id)_generateBodyWithURL:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)reportSubscribedCalendarAsJunk:(id)arg0 ;


@end


#endif