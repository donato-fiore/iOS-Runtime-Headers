// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUBCALVALIDATIONTASK_H
#define SUBCALVALIDATIONTASK_H

@class NSString, NSData, ICSDocument, NSURL;
@protocol SubCalURLRequestDelegate, SubCalValidationTaskDelegate;


#import "SubCalDATask.h"
#import "SubCalURLRequest.h"

@interface SubCalValidationTask : SubCalDATask <SubCalURLRequestDelegate>



@property (retain, nonatomic) NSString *calendarName; // ivar: _calendarName
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SubCalValidationTaskDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL foundBeginVCal; // ivar: _foundBeginVCal
@property (nonatomic) BOOL foundCalName; // ivar: _foundCalName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *icsData; // ivar: _icsData
@property (retain, nonatomic) ICSDocument *icsDocument; // ivar: _icsDocument
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) BOOL performQuickValidation; // ivar: _performQuickValidation
@property (retain, nonatomic) SubCalURLRequest *request; // ivar: _request
@property (nonatomic) NSUInteger searchIndex; // ivar: _searchIndex
@property (retain, nonatomic) NSURL *subscriptionURL; // ivar: _subscriptionURL
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *username; // ivar: _username


-(BOOL)_isInvalidVCalBeginningForData:(id)arg0 ;
-(id)_searchForCalNameInConnectionData:(id)arg0 ;
-(id)_stringBeforeNewline:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)_tryQuickValidationCurrentData:(id)arg0 ;
-(void)didFinish;
-(void)handleTrustChallenge:(id)arg0 forSubCalURLRequest:(id)arg1 ;
-(void)handleTrustChallenge:(id)arg0 forSubCalURLRequest:(id)arg1 completionHandler:(id)arg2 ;
-(void)performDelegateCallbackWithError:(id)arg0 ;
-(void)performTask;
-(void)subCalURLRequest:(id)arg0 didRedirectToURL:(id)arg1 ;
-(void)subCalURLRequest:(id)arg0 finishedWithData:(id)arg1 error:(id)arg2 ;
-(void)subCalURLRequest:(id)arg0 updatedData:(id)arg1 ;
-(void)subCalURLRequestNeedsUsernameAndPasswordForHost:(id)arg0 continuation:(id)arg1 ;
-(void)willFinish;


@end


#endif