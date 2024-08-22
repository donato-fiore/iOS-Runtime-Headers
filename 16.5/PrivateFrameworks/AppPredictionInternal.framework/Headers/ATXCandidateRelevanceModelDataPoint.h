// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCANDIDATERELEVANCEMODELDATAPOINT_H
#define ATXCANDIDATERELEVANCEMODELDATAPOINT_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "ATXCandidate.h"
#import "ATXPredictionContext.h"

@interface ATXCandidateRelevanceModelDataPoint : NSObject

@property (retain, nonatomic) ATXCandidate *candidate; // ivar: _candidate
@property (readonly, nonatomic) ATXPredictionContext *context; // ivar: _context
@property (readonly, nonatomic) NSUUID *contextDefinedSessionId; // ivar: _contextDefinedSessionId
@property (nonatomic) BOOL engaged; // ivar: _engaged


-(id)initWithContext:(id)arg0 candidate:(id)arg1 engaged:(BOOL)arg2 contextDefinedSessionId:(id)arg3 ;


@end


#endif