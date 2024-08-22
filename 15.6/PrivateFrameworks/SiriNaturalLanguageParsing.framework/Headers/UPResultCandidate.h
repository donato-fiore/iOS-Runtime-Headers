// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPRESULTCANDIDATE_H
#define UPRESULTCANDIDATE_H

@class NSDictionary, NSString, NSNumber, NSArray, SIRINLUEXTERNALUserParse;
@protocol SIRINLUUserDialogAct;

#import <Foundation/Foundation.h>

#import "UPModelIdentifier.h"
#import "UPResultRootNode.h"
#import "UPUsoSerializer.h"

@interface UPResultCandidate : NSObject

@property (readonly) NSDictionary *_candidateEntitiesByStartIndex; // ivar: __candidateEntitiesByStartIndex
@property (readonly, copy) NSString *annotatedString;
@property (readonly, nonatomic) CGFloat bestAvailableProbability;
@property (readonly) NSNumber *calibratedProbability; // ivar: _calibratedProbability
@property (readonly) NSArray *entities; // ivar: _entities
@property (readonly) NSString *intent; // ivar: _intent
@property (readonly, nonatomic) UPModelIdentifier *modelIdentifier; // ivar: _modelIdentifier
@property (readonly) CGFloat probability;
@property (readonly, nonatomic) SIRINLUEXTERNALUserParse *protobufRepresentation;
@property (readonly) UPResultRootNode *rootNodeRepresentation;
@property (readonly, copy) NSObject<SIRINLUUserDialogAct> *task; // ivar: _task
@property (readonly) CGFloat uncalibratedProbability; // ivar: _uncalibratedProbability
@property (readonly) UPUsoSerializer *usoSerializer; // ivar: _usoSerializer
@property (readonly) NSString *utterance; // ivar: _utterance


+(id)_buildCandidateEntitiesByStartIndex:(id)arg0 ;
-(id)_intermediateNodeRepresentations:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUncalibratedProbability:(CGFloat)arg0 calibratedProbability:(id)arg1 utterance:(id)arg2 intent:(id)arg3 entities:(id)arg4 modelIdentifier:(id)arg5 task:(id)arg6 ;


@end


#endif