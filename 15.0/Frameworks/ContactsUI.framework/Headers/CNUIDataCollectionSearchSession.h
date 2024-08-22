// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIDATACOLLECTIONSEARCHSESSION_H
#define CNUIDATACOLLECTIONSEARCHSESSION_H


#import <Foundation/Foundation.h>


@interface CNUIDataCollectionSearchSession : NSObject

@property (nonatomic) BOOL pendingResults; // ivar: _pendingResults
@property (nonatomic) BOOL pendingSuggestionsResults; // ivar: _pendingSuggestionsResults


+(id)currentSession;
+(void)begin;
+(void)end;
-(void)didFetchResultSuggested:(BOOL)arg0 ;
-(void)didSelectResult:(id)arg0 ;
-(void)searchStringDidChange;


@end


#endif