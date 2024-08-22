// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITRACELOGRECORD_H
#define TITRACELOGRECORD_H

@class NSArray, NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface TITraceLogRecord : NSObject

@property (retain, nonatomic) NSArray *finalAutocorrectionCandidates; // ivar: _finalAutocorrectionCandidates
@property (retain, nonatomic) NSArray *finalCompletionCandidates; // ivar: _finalCompletionCandidates
@property (retain, nonatomic) NSArray *finalPredictionCandidates; // ivar: _finalPredictionCandidates
@property (readonly, retain, nonatomic) NSArray *parsedSections; // ivar: _parsedSections
@property (retain, nonatomic) NSArray *rawAutocorrectionCandidates; // ivar: _rawAutocorrectionCandidates
@property (retain, nonatomic) NSArray *rawCompletionCandidates; // ivar: _rawCompletionCandidates
@property (retain, nonatomic) NSArray *rawPredictionCandidates; // ivar: _rawPredictionCandidates
@property (retain, nonatomic) NSString *recordType; // ivar: _recordType
@property (retain, nonatomic) NSUUID *recordUUID; // ivar: _recordUUID
@property (retain, nonatomic) NSArray *removedAutocorrectionCandidates; // ivar: _removedAutocorrectionCandidates
@property (retain, nonatomic) NSArray *removedCompletionCandidates; // ivar: _removedCompletionCandidates
@property (retain, nonatomic) NSArray *removedPredictionCandidates; // ivar: _removedPredictionCandidates
@property (retain, nonatomic) NSString *typedString; // ivar: _typedString


-(id)initWithRecordUUID:(id)arg0 ;
-(void)addParsedSection:(id)arg0 ;


@end


#endif