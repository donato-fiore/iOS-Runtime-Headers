// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETEQUERY_H
#define CNAUTOCOMPLETEQUERY_H

@class CNCancelationToken, NSString;
@protocol CNCancelable, CNAutocompleteProbeProvider, CNScheduler, CNAutocompleteSearchProvider, CNAutocompleteSourceInclusionPolicy;

#import <Foundation/Foundation.h>

#import "CNAutocompleteDelegateWrapper.h"
#import "CNAutocompleteFetchRequest.h"
#import "CNAutocompleteUserSession.h"

@interface CNAutocompleteQuery : NSObject <CNCancelable>



@property (retain) CNCancelationToken *cancelationToken; // ivar: _cancelationToken
@property (readonly, copy) NSString *debugDescription;
@property (retain) CNAutocompleteDelegateWrapper *delegate; // ivar: _delegate
@property (weak) NSObject<CNCancelable> *delegateToken; // ivar: _delegateToken
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<CNAutocompleteProbeProvider> *probeProvider; // ivar: _probeProvider
@property (copy) CNAutocompleteFetchRequest *request; // ivar: _request
@property (retain) NSObject<CNScheduler> *scheduler; // ivar: _scheduler
@property (retain) NSObject<CNAutocompleteSearchProvider> *searchProvider; // ivar: _searchProvider
@property (retain) NSObject<CNAutocompleteSourceInclusionPolicy> *sourceInclusionPolicy; // ivar: _sourceInclusionPolicy
@property (readonly) Class superclass;
@property (retain) CNAutocompleteUserSession *userSession; // ivar: _userSession


+(BOOL)searchTypeSupportsSuppressionOfAlreadyChosenAddresses:(NSUInteger)arg0 ;
+(BOOL)shouldPerformQueryForRequest:(id)arg0 ;
+(BOOL)shouldSortResultsForPolicy:(id)arg0 ;
+(BOOL)shouldSuppressAddressesAlreadyChosenForRequest:(id)arg0 ;
+(id)observableForQuery:(id)arg0 context:(id)arg1 ;
+(id)observableWithSupplementalResultsForQuery:(id)arg0 ;
+(id)queryWithRequest:(id)arg0 searchProvider:(id)arg1 delegate:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4 userSession:(id)arg5 delegateToken:(id)arg6 ;
+(void)configureNetworkActivityHandlersForBuilder:(id)arg0 query:(id)arg1 ;
+(void)configureNetworkForBuilder:(id)arg0 query:(id)arg1 ;
+(void)configureNetworkPolicyForBuilder:(id)arg0 query:(id)arg1 ;
-(id)execute;
-(id)executeWithContext:(id)arg0 ;
-(id)initWithRequest:(id)arg0 searchProvider:(id)arg1 delegate:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4 userSession:(id)arg5 delegateToken:(id)arg6 ;
-(id)makeDelegateWrapperWithDelegate:(id)arg0 forRequest:(id)arg1 sourceInclusionPolicy:(id)arg2 userSession:(id)arg3 ;
-(void)cancel;
-(void)searchOperationEncounteredError:(id)arg0 ;
-(void)searchOperationReportedResults:(id)arg0 ;
-(void)searchOperationsHaveBegunNetworkActivity;
-(void)searchOperationsHaveEndedNetworkActivity;
-(void)searchOperationsHaveFinished;


@end


#endif