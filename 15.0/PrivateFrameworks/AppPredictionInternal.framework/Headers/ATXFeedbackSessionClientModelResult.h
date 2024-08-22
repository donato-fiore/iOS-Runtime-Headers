// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXFEEDBACKSESSIONCLIENTMODELRESULT_H
#define ATXFEEDBACKSESSIONCLIENTMODELRESULT_H

@class ATXClientModelCacheUpdate, NSArray, ATXFeedbackSession;

#import <Foundation/Foundation.h>

#import "ATXPredictionContext.h"

@interface ATXFeedbackSessionClientModelResult : NSObject

@property (retain, nonatomic) ATXClientModelCacheUpdate *cacheUpdate; // ivar: _cacheUpdate
@property (retain, nonatomic) ATXPredictionContext *context; // ivar: _context
@property (retain, nonatomic) NSArray *engagedSuggestions; // ivar: _engagedSuggestions
@property (retain, nonatomic) ATXFeedbackSession *feedbackSession; // ivar: _feedbackSession
@property (retain, nonatomic) NSArray *rejectedSuggestions; // ivar: _rejectedSuggestions
@property (retain, nonatomic) NSArray *shownSuggestions; // ivar: _shownSuggestions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXFeedbackSessionClientModelResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)clientModelId;
-(id)init;
-(id)initWithEngagedSuggestions:(id)arg0 rejectedSuggestions:(id)arg1 shownSuggestions:(id)arg2 cacheUpdate:(id)arg3 feedbackSession:(id)arg4 context:(id)arg5 ;
-(unsigned char)consumerSubType;


@end


#endif