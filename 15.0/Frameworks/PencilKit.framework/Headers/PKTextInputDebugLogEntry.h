// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTINPUTDEBUGLOGENTRY_H
#define PKTEXTINPUTDEBUGLOGENTRY_H

@class NSDate, CHTextInputTargetContentInfo, NSString, NSArray, CHTokenizedTextResult;

#import <Foundation/Foundation.h>

#import "PKDrawing.h"

@interface PKTextInputDebugLogEntry : NSObject

@property (retain, nonatomic) NSDate *entryDate; // ivar: _entryDate
@property (nonatomic) BOOL inputContainsInProgressStroke; // ivar: _inputContainsInProgressStroke
@property (retain, nonatomic) PKDrawing *inputDrawing; // ivar: _inputDrawing
@property (retain, nonatomic) CHTextInputTargetContentInfo *inputTargetContentInfo; // ivar: _inputTargetContentInfo
@property (copy, nonatomic) NSString *inputTargetElementType; // ivar: _inputTargetElementType
@property (copy, nonatomic) NSArray *inputTargets; // ivar: _inputTargets
@property (copy, nonatomic) NSArray *recognitionLocaleIdentifiers; // ivar: _recognitionLocaleIdentifiers
@property (nonatomic) _NSRange resultAffectedRange; // ivar: _resultAffectedRange
@property (copy, nonatomic) NSString *resultCommitReason; // ivar: _resultCommitReason
@property (copy, nonatomic) NSString *resultCommittedText; // ivar: _resultCommittedText
@property (nonatomic) NSInteger resultCommittedTokenColumnCount; // ivar: _resultCommittedTokenColumnCount
@property (nonatomic) CGFloat resultRecognitionDuration; // ivar: _resultRecognitionDuration
@property (copy, nonatomic) NSString *resultTopTranscription; // ivar: _resultTopTranscription
@property (readonly, nonatomic) NSInteger resultType;
@property (copy, nonatomic) NSString *resultTypeDescription; // ivar: _resultTypeDescription
@property (retain, nonatomic) CHTokenizedTextResult *tokenizedTextResult; // ivar: _tokenizedTextResult


+(id)_minimalReferenceString:(id)arg0 rangeOfInterest:(struct _NSRange )arg1 tokenSearchDistance:(NSInteger)arg2 localeIdentifier:(id)arg3 ;
+(id)_mutableDictionaryRepresentationForResultQueryItem:(id)arg0 detailLevel:(NSInteger)arg1 ;
+(id)_referenceSubstringForTargetContentInfo:(id)arg0 resultAffectedRange:(struct _NSRange )arg1 targetContentLevel:(NSInteger)arg2 localeIdentifier:(id)arg3 ;
+(id)loggedDateFormatter;
+(id)mediumDescriptionForResultQueryItem:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentationWithDetailLevel:(NSInteger)arg0 targetContentLevel:(NSInteger)arg1 ;
-(id)dictionaryRepresentationWithTargetContentLevel:(NSInteger)arg0 ;
-(id)mediumDescription;
-(id)minimalDescription;
-(id)referenceSubstringWithTargetContentLevel:(NSInteger)arg0 ;


@end


#endif