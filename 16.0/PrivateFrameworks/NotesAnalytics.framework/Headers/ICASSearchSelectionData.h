// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSEARCHSELECTIONDATA_H
#define ICASSEARCHSELECTIONDATA_H

@class NSNumber, NSArray, NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASGmRankingStrategyType.h"
#import "ICASSelectedResultAccountType.h"
#import "ICASSelectedResultType.h"

@interface ICASSearchSelectionData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *charLengthOfQueryString; // ivar: _charLengthOfQueryString
@property (readonly, nonatomic) NSNumber *gmRank; // ivar: _gmRank
@property (readonly, nonatomic) NSNumber *gmRankIOS13; // ivar: _gmRankIOS13
@property (readonly, nonatomic) ICASGmRankingStrategyType *gmRankingStrategyType; // ivar: _gmRankingStrategyType
@property (readonly, nonatomic) NSNumber *isNoteFoundByAttachment; // ivar: _isNoteFoundByAttachment
@property (readonly, nonatomic) NSNumber *isTopHit; // ivar: _isTopHit
@property (readonly, nonatomic) NSArray *searchRankingExperimentSummary; // ivar: _searchRankingExperimentSummary
@property (readonly, nonatomic) ICASSelectedResultAccountType *selectedResultAccountType; // ivar: _selectedResultAccountType
@property (readonly, nonatomic) NSString *selectedResultID; // ivar: _selectedResultID
@property (readonly, nonatomic) ICASSelectedResultType *selectedResultType; // ivar: _selectedResultType


+(id)dataName;
-(id)initWithSelectedResultID:(id)arg0 selectedResultAccountType:(id)arg1 selectedResultType:(id)arg2 gmRankingStrategyType:(id)arg3 gmRank:(id)arg4 searchRankingExperimentSummary:(id)arg5 gmRankIOS13:(id)arg6 charLengthOfQueryString:(id)arg7 isNoteFoundByAttachment:(id)arg8 isTopHit:(id)arg9 ;
-(id)toDict;


@end


#endif