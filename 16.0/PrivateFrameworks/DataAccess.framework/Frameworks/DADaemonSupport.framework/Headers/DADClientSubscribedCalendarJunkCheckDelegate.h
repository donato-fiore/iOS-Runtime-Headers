// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DADCLIENTSUBSCRIBEDCALENDARJUNKCHECKDELEGATE_H
#define DADCLIENTSUBSCRIBEDCALENDARJUNKCHECKDELEGATE_H

@class NSString;


#import "DADClientDelegate.h"

@interface DADClientSubscribedCalendarJunkCheckDelegate : DADClientDelegate

@property (retain, nonatomic) NSString *requestID; // ivar: _requestID


-(id)_createURLRequestForSubscriptionCalendarURL:(id)arg0 ;
-(id)_findCalendarURLFromAccount:(id)arg0 ;
-(id)_generateBodyWithURL:(id)arg0 ;
-(void)_finishWithJunkStatusString:(id)arg0 error:(id)arg1 ;
-(void)checkSubscribedCalendarJunkStatus:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;


@end


#endif