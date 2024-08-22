// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPARSECZKWNEWSOPERATION_H
#define NTPARSECZKWNEWSOPERATION_H

@class FCOperation, NSDate, NSString, SFRankingFeedback, NSOrderedSet, NSDictionary, PARSession;



@interface NTParsecZKWNewsOperation : FCOperation

@property (copy, nonatomic) NSDate *fetchDate; // ivar: _fetchDate
@property (copy, nonatomic) NSString *keyboardInputMode; // ivar: _keyboardInputMode
@property (copy, nonatomic) id *newsCompletionHandler; // ivar: _newsCompletionHandler
@property (copy, nonatomic) SFRankingFeedback *resultRankingFeedback; // ivar: _resultRankingFeedback
@property (copy, nonatomic) NSOrderedSet *resultSearchResultIDs; // ivar: _resultSearchResultIDs
@property (copy, nonatomic) NSDictionary *resultSearchResultsBySearchResultID; // ivar: _resultSearchResultsBySearchResultID
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (retain, nonatomic) PARSession *session; // ivar: _session


-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)setTimeoutDuration:(CGFloat)arg0 ;


@end


#endif