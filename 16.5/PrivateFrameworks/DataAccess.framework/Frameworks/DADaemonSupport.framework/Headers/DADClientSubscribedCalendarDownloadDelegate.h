// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADCLIENTSUBSCRIBEDCALENDARDOWNLOADDELEGATE_H
#define DADCLIENTSUBSCRIBEDCALENDARDOWNLOADDELEGATE_H

@class NSURL, DATaskManager, NSString;
@protocol SubCalValidationTaskDelegate, SubCalDATaskPasswordDelegate;


#import "DADClientDelegate.h"

@interface DADClientSubscribedCalendarDownloadDelegate : DADClientDelegate <SubCalValidationTaskDelegate, SubCalDATaskPasswordDelegate>

 {
    NSURL *_subscribedCalendarURL;
    DATaskManager *_taskManager;
    id *_passwordContinuation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldTrustChallenge:(id)arg0 ;
-(id)initWithURL:(id)arg0 client:(id)arg1 ;
-(unsigned int)evaluateTrust:(struct __SecTrust *)arg0 ;
-(void)beginDownload;
-(void)createAndSubmitValidationTask;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithError:(id)arg0 summary:(id)arg1 ;
-(void)handleTrustChallenge:(id)arg0 forTask:(id)arg1 ;
-(void)handleTrustChallenge:(id)arg0 forTask:(id)arg1 completionHandler:(id)arg2 ;
-(void)subCalTask:(id)arg0 needsUsernameAndPasswordForHost:(id)arg1 continuation:(id)arg2 ;
-(void)subCalValidationTask:(id)arg0 downloadProgressedTo:(NSInteger)arg1 outOf:(NSInteger)arg2 ;
-(void)subCalValidationTask:(id)arg0 finishedWithError:(id)arg1 calendarName:(id)arg2 document:(id)arg3 calendarData:(id)arg4 ;
-(void)tryUsername:(id)arg0 password:(id)arg1 ;


@end


#endif