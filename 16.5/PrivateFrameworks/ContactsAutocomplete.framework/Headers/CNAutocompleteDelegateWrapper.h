// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETEDELEGATEWRAPPER_H
#define CNAUTOCOMPLETEDELEGATEWRAPPER_H

@class CNCancelationToken, NSString;
@protocol CNAutocompleteFetchDelegate, CNCancelable, CNScheduler;

#import <Foundation/Foundation.h>

#import "CNAutocompleteFetchRequest.h"
#import "CNAutocompleteQueryResponsePreparer.h"
#import "CNAutocompleteUserSession.h"

@interface CNAutocompleteDelegateWrapper : NSObject <CNAutocompleteFetchDelegate, CNCancelable>



@property (readonly, nonatomic) CNCancelationToken *cancelationToken; // ivar: _cancelationToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<CNAutocompleteFetchDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNAutocompleteFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger openNetworkActivityCalls; // ivar: _openNetworkActivityCalls
@property (readonly, nonatomic) CNAutocompleteQueryResponsePreparer *responsePreparer; // ivar: _responsePreparer
@property (readonly, nonatomic) NSObject<CNScheduler> *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNAutocompleteUserSession *userSession; // ivar: _userSession


+(id)responseScheduler;
-(BOOL)autocompleteFetch:(id)arg0 shouldExpectSupplementalResultsForRequest:(id)arg1 completionHandler:(id)arg2 ;
-(id)addDiagnosticLog:(id)arg0 ;
-(id)askDelegateToAdjustResults;
-(id)initWithDelegate:(id)arg0 userSession:(id)arg1 fetchRequest:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 userSession:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3 ;
-(id)sortResults;
-(id)suppressResultsWithAddresses:(id)arg0 ;
-(void)autocompleteFetch:(id)arg0 didFailWithError:(id)arg1 ;
-(void)autocompleteFetch:(id)arg0 didReceiveResults:(id)arg1 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg0 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg0 ;
-(void)autocompleteFetchDidFinish:(id)arg0 ;
-(void)cancel;
-(void)queueDidEndNetworkActivityMessageForFetch:(id)arg0 ;
-(void)queueMessageToDelegate:(id)arg0 ;
-(void)queueUncancelableMessageToDelegate:(id)arg0 ;
-(void)setPredictionResultsFuture:(id)arg0 ;


@end


#endif