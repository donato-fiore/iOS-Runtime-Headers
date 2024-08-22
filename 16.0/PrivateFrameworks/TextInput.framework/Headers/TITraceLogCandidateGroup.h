// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITRACELOGCANDIDATEGROUP_H
#define TITRACELOGCANDIDATEGROUP_H

@class NSMutableArray, NSArray, NSString, NSDictionary;
@protocol TITraceLogCandidateExportRepresenting;

#import <Foundation/Foundation.h>


@interface TITraceLogCandidateGroup : NSObject <TITraceLogCandidateExportRepresenting>

 {
    NSMutableArray *_candidates;
}


@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *omegaFactorsString; // ivar: _omegaFactorsString
@property (nonatomic) CGFloat omegaGeometryScore; // ivar: _omegaGeometryScore
@property (nonatomic) CGFloat omegaLanguagePowerScore; // ivar: _omegaLanguagePowerScore
@property (nonatomic) CGFloat omegaTypingScore; // ivar: _omegaTypingScore
@property (nonatomic) CGFloat omegaWordScore; // ivar: _omegaWordScore
@property (nonatomic) CGFloat probability; // ivar: _probability
@property (retain, nonatomic) NSString *sequenceString; // ivar: _sequenceString
@property (readonly) Class superclass;


+(id)groupFromGroupString:(id)arg0 ;
-(id)init;
-(void)addCandidate:(id)arg0 ;


@end


#endif