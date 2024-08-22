// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYVISIT_H
#define WBSHISTORYVISIT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WBSHistoryVisit.h"
#import "WBSHistoryItem.h"

@interface WBSHistoryVisit : NSObject

@property (nonatomic) NSUInteger attributes; // ivar: _attributes
@property (nonatomic) NSInteger databaseID; // ivar: _databaseID
@property (readonly, nonatomic) WBSHistoryVisit *endOfRedirectChain;
@property (nonatomic) NSInteger generation; // ivar: _generation
@property (readonly, nonatomic, getter=wasHTTPNonGet) BOOL httpNonGet; // ivar: _httpNonGet
@property (weak, nonatomic) WBSHistoryItem *item; // ivar: _item
@property (nonatomic, getter=loadWasSuccessful) BOOL loadSuccessful; // ivar: _loadSuccessful
@property (nonatomic) NSInteger origin; // ivar: _origin
@property (retain, nonatomic) WBSHistoryVisit *redirectDestination; // ivar: _redirectDestination
@property (nonatomic) NSInteger redirectDestinationDatabaseID; // ivar: _redirectDestinationDatabaseID
@property (retain, nonatomic) WBSHistoryVisit *redirectSource; // ivar: _redirectSource
@property (readonly, nonatomic) NSUInteger redirectSourceChainLength;
@property (nonatomic) NSInteger redirectSourceDatabaseID; // ivar: _redirectSourceDatabaseID
@property (nonatomic) int score; // ivar: _score
@property (readonly, nonatomic, getter=isSynthesized) BOOL synthesized; // ivar: _synthesized
@property (copy) NSString *title; // ivar: _title
@property (readonly, nonatomic) CGFloat visitTime; // ivar: _visitTime


+(float)weightedVisitCountFromScore:(int)arg0 ;
+(id)synthesizedVisitWithHistoryItem:(id)arg0 visitTime:(CGFloat)arg1 ;
+(int)scoreForWeightedVisitCount:(float)arg0 ;
-(BOOL)hasAttributes:(NSUInteger)arg0 ;
-(CGFloat)_weight;
-(id)initWithHistoryItem:(id)arg0 serviceVisit:(id)arg1 ;
-(id)initWithHistoryItem:(id)arg0 sqliteRow:(id)arg1 baseColumnIndex:(NSUInteger)arg2 ;
-(id)initWithHistoryItem:(id)arg0 streamedVisit:(struct _HistoryStreamedVisit *)arg1 ;
-(id)initWithHistoryItem:(id)arg0 visitTime:(CGFloat)arg1 ;
-(id)initWithHistoryItem:(id)arg0 visitTime:(CGFloat)arg1 loadWasSuccesful:(BOOL)arg2 wasHTTPNonGet:(BOOL)arg3 origin:(NSInteger)arg4 attributes:(NSUInteger)arg5 ;
-(void)recomputeScore;


@end


#endif