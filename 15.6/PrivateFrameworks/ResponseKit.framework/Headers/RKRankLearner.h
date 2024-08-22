// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RKRANKLEARNER_H
#define RKRANKLEARNER_H


#import <Foundation/Foundation.h>


@interface RKRankLearner : NSObject



-(BOOL)insertRankingInfo:(id)arg0 forLanguageID:(id)arg1 ;
-(id)getDBManager:(id)arg0 ;
-(id)getDBManager:(id)arg0 withCustomPath:(id)arg1 ;
-(id)getRankedResponses:(id)arg0 forRecipientID:(id)arg1 withLanguageID:(id)arg2 ;
-(id)init;
-(id)rankResponses:(id)arg0 ;
-(id)updateFeaturesForResponse:(id)arg0 selectCounts:(id)arg1 inputMethodCounts:(id)arg2 sourceCounts:(id)arg3 currentTime:(id)arg4 languageCode:(id)arg5 ;
-(void)flushRankingData:(id)arg0 ;


@end


#endif