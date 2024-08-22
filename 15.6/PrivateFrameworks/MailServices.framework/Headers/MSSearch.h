// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSSEARCH_H
#define MSSEARCH_H

@class NSString;
@protocol MSDSearchResultsProtocol, MSSearchDelegate;


#import "MSXPCService.h"

@interface MSSearch : MSXPCService <MSDSearchResultsProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MSSearchDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)findMessageData:(id)arg0 matchingCriterion:(id)arg1 options:(NSUInteger)arg2 delegate:(id)arg3 ;
+(id)findMessageData:(id)arg0 matchingCriterion:(id)arg1 shouldFetch:(BOOL)arg2 onServer:(BOOL)arg3 delegate:(id)arg4 ;
+(id)findMessageData:(id)arg0 matchingCriterion:(id)arg1 shouldFetch:(BOOL)arg2 onServer:(BOOL)arg3 onlyInboxes:(BOOL)arg4 delegate:(id)arg5 ;
+(void)setUnitTestingResultsArray:(id)arg0 ;
-(BOOL)_unitTestsAreEnabled;
-(id)_generateUnitTestReplyForMethod:(id)arg0 arg:(id)arg1 error:(*id)arg2 ;
-(id)_initWithDelegate:(id)arg0 ;
-(id)initWithRemoteObjectInterface:(id)arg0 ;
-(id)newConnectionForInterface:(id)arg0 ;
-(void)_delegateDidFindResults:(id)arg0 ;
-(void)_delegateDidFinishWithError:(id)arg0 ;
-(void)_findMessageData:(id)arg0 matchingCriterion:(id)arg1 options:(NSUInteger)arg2 ;
-(void)_generateUnitTestResponsesForResultArray:(id)arg0 ;
-(void)cancel;
-(void)foundResults:(id)arg0 error:(id)arg1 ;


@end


#endif