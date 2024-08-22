// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPSTARTLOCALSEARCHFEEDBACK_H
#define _CPSTARTLOCALSEARCHFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPFeedbackUUID, _CPStartLocalSearchFeedback, NSSecureCoding;


#import "_CPPerformEntityQueryCommandForFeedback.h"
#import "_CPIndexStateForFeedback.h"

@interface _CPStartLocalSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPStartLocalSearchFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _CPPerformEntityQueryCommandForFeedback *entityQueryCommand; // ivar: _entityQueryCommand
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _CPIndexStateForFeedback *indexState; // ivar: _indexState
@property (nonatomic) int indexType; // ivar: _indexType
@property (copy, nonatomic) NSString *input; // ivar: _input
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *originatingApp; // ivar: _originatingApp
@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (nonatomic) int searchType; // ivar: _searchType
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) int triggerEvent; // ivar: _triggerEvent
@property (readonly, copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif