// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHRECOGNITIONSESSIONRESULT_H
#define CHRECOGNITIONSESSIONRESULT_H

@class NSData, NSDictionary, NSString, NSArray;
@protocol NSCopying, NSSecureCoding, CHStrokeProviderVersion;

#import <Foundation/Foundation.h>

#import "CHStrokeClutterFilter.h"
#import "CHStrokeClassificationResult.h"
#import "CHStrokeGroupingResult.h"

@interface CHRecognitionSessionResult : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger __transcriptionCapability;
    NSData *_encodedStrokeProviderVersion;
    BOOL __shouldUseCachedHasCompleteRecognitionResults;
    BOOL __hasCompleteRecognitionResults;
}


@property (readonly, copy, nonatomic) NSDictionary *_recognitionResultsByGroupID; // ivar: __recognitionResultsByGroupID
@property (readonly, copy, nonatomic) NSDictionary *_textCorrectionResultsByGroupID; // ivar: __textCorrectionResultsByGroupID
@property (readonly, nonatomic) NSInteger _transcriptionCapability;
@property (readonly, nonatomic) NSString *allResultsDebugDescription;
@property (readonly, nonatomic) NSArray *allResultsDebugDescriptionByGroup;
@property (readonly, nonatomic) CHStrokeClutterFilter *clutterFilter; // ivar: _clutterFilter
@property (readonly, nonatomic) ? generationDuration; // ivar: _generationDuration
@property (readonly, nonatomic) NSString *highConfidenceDebugDescription;
@property (readonly, copy, nonatomic) NSArray *locales; // ivar: _locales
@property (readonly, nonatomic) NSArray *orderedStrokeIdentifiers; // ivar: _orderedStrokeIdentifiers
@property (readonly, copy, nonatomic) NSArray *preferredLocales; // ivar: _preferredLocales
@property (readonly, nonatomic) NSInteger recognitionEnvironment; // ivar: _recognitionEnvironment
@property (readonly, nonatomic) NSInteger sessionMode; // ivar: _sessionMode
@property (readonly, nonatomic) CHStrokeClassificationResult *strokeClassificationResult; // ivar: _strokeClassificationResult
@property (readonly, nonatomic) CHStrokeGroupingResult *strokeGroupingResult; // ivar: _strokeGroupingResult
@property (readonly, nonatomic) NSObject<CHStrokeProviderVersion> *strokeProviderVersion; // ivar: _strokeProviderVersion


+(BOOL)supportsSecureCoding;
-(BOOL)hasCompleteRecognitionResults;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecognitionSessionResult:(id)arg0 ;
-(BOOL)isEqualToSerializableRecognitionSessionResult:(id)arg0 ;
-(id)_resultsDebugDescriptionIntoGroupsArray:(id)arg0 groupHeaderBlock:(id)arg1 ;
-(id)allResultsDebugDescriptionWithGroupHeaderBlock:(id)arg0 ;
-(id)contextualResultsWithFullyCoveredStrokeGroups:(id)arg0 partiallyCoveredStrokeGroups:(id)arg1 drawingCanvasSize:(struct CGSize )arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)encodedStrokeProviderVersion;
-(id)fullyCoveredStrokeGroupsForContextStrokes:(id)arg0 partiallyCoveredStrokeGroups:(*id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResult:(id)arg0 validStrokes:(id)arg1 ;
-(id)initWithStrokeProviderVersion:(id)arg0 encodedStrokeProviderVersion:(id)arg1 orderedStrokeIdentifiers:(id)arg2 sessionMode:(NSInteger)arg3 locales:(id)arg4 preferredLocales:(id)arg5 clutterFilter:(id)arg6 strokeClassificationResult:(id)arg7 strokeGroupingResult:(id)arg8 recognitionResults:(id)arg9 inlineContinuousModeResults:(id)arg10 generationDuration:(struct ? )arg11 recognitionEnvironment:(NSInteger)arg12 ;
-(id)recognitionResultForStrokeGroupIdentifier:(NSInteger)arg0 ;
-(id)textCorrectionResultForStrokeGroupIdentifier:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif