// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSTRUCTUREDEVENTDOCUMENT_H
#define SGSTRUCTUREDEVENTDOCUMENT_H

@class NSArray, NSString;


#import "SGExtractionDocument.h"

@interface SGStructuredEventDocument : SGExtractionDocument {
    BOOL _fromSuggestTool;
}


@property (readonly, nonatomic) unsigned char category; // ivar: _category
@property (readonly, nonatomic) NSArray *dataDetectorMatches; // ivar: _dataDetectorMatches
@property (readonly, nonatomic) NSString *plainText; // ivar: _plainText


+(BOOL)caseInsensitiveContainsString:(id)arg0 inCandidates:(id)arg1 ;
+(id)candidatesForLabelIndexSets:(id)arg0 inPlainText:(id)arg1 forTaggedCharacterRanges:(id)arg2 ;
+(id)cleanCandidates:(id)arg0 outputName:(id)arg1 label:(id)arg2 ;
+(id)modelOutputSummary:(id)arg0 ;
+(id)simpleCandidateResolutionFromCandidates:(id)arg0 ;
+(id)stripRepeatedContent:(id)arg0 repeatedLength:(NSUInteger)arg1 ;
-(BOOL)detectedEventPolarity;
-(id)_simpleCandidateForOutputName:(id)arg0 label:(id)arg1 withError:(*id)arg2 ;
-(id)detectedAddressForLabel:(id)arg0 withError:(*id)arg1 ;
-(id)detectedEndAddressWithError:(*id)arg0 ;
-(id)detectedEndDateComponents;
-(id)detectedEndPlaceWithError:(*id)arg0 ;
-(id)detectedEventName;
-(id)detectedPostalAddressExtractionForTokenIndexes:(id)arg0 dataDetectorMatches:(id)arg1 label:(id)arg2 ;
-(id)detectedReservationIdWithError:(*id)arg0 ;
-(id)detectedStartAddressWithError:(*id)arg0 ;
-(id)detectedStartDateComponents;
-(id)detectedStartPlaceWithError:(*id)arg0 ;
-(id)filterCandidateDateComponents:(id)arg0 ;
-(id)initWithPlainText:(id)arg0 category:(unsigned char)arg1 dataDetectorMatches:(id)arg2 enrichedTaggedCharacterRanges:(id)arg3 modelOutput:(id)arg4 fromSuggestTool:(BOOL)arg5 ;
-(id)labelTokenIndexesForOutputName:(id)arg0 label:(id)arg1 ;
-(id)mergePostalAddressComponents:(id)arg0 ;
-(id)modelOutputSummary;
-(id)predictedStringsFromModelOutput;
-(id)resolveCandidates:(id)arg0 forCategory:(unsigned char)arg1 label:(id)arg2 rawIndexSet:(id)arg3 taggedCharacterRanges:(id)arg4 ;
-(id)titleMapping;


@end


#endif