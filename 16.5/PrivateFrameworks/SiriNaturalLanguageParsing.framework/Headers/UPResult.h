// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPRESULT_H
#define UPRESULT_H

@class NSArray, SIRINLUINTERNALUAAP_PARSERUaaPParserResponse, NSUUID;

#import <Foundation/Foundation.h>

#import "UPResultRootNode.h"

@interface UPResult : NSObject

@property (readonly, copy, nonatomic) NSArray *_candidates; // ivar: __candidates
@property (readonly) SIRINLUINTERNALUAAP_PARSERUaaPParserResponse *protobufRepresentation;
@property (readonly, copy) NSUUID *queryUUID; // ivar: _queryUUID
@property (readonly, copy) UPResultRootNode *rootNode;


+(id)createResultFromExistingResult:(id)arg0 truncatedTo:(NSUInteger)arg1 ;
-(NSInteger)candidateCount;
-(id)candidateAtRank:(NSInteger)arg0 ;
-(id)initWithCandidates:(id)arg0 queryUUID:(id)arg1 ;


@end


#endif