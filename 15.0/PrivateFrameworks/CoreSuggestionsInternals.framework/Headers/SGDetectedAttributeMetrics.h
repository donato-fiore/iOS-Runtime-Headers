// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGDETECTEDATTRIBUTEMETRICS_H
#define SGDETECTEDATTRIBUTEMETRICS_H

@class SGMContactDetailExtraction, SGMContactDetailSent, PETEventTracker2;

#import <Foundation/Foundation.h>


@interface SGDetectedAttributeMetrics : NSObject

@property (retain, nonatomic) SGMContactDetailExtraction *contactDetailExtraction; // ivar: _contactDetailExtraction
@property (retain, nonatomic) SGMContactDetailSent *contactDetailSent; // ivar: _contactDetailSent
@property (retain, nonatomic) PETEventTracker2 *pet2Tracker; // ivar: _pet2Tracker


+(id)instance;
+(id)nameForDataDetectorMatch:(id)arg0 withValue:(id)arg1 ;
+(id)tokenizeMessageContent:(id)arg0 ;
+(void)_recordExtractionEventFromSource:(struct SGMDocumentType_ )arg0 foundInSignature:(BOOL)arg1 isDDSignature:(BOOL)arg2 detailType:(struct SGMContactDetailType_ )arg3 outcome:(struct SGMContactDetailExtractionOutcome_ )arg4 foundInCNContact:(struct SGMContactDetailOwner_ )arg5 modelVersion:(id)arg6 isUnlikelyPhone:(BOOL)arg7 sigSource:(struct SGMContactDetailExtractionSignatureSource_ )arg8 ;
+(void)_recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ )arg0 detailType:(struct SGMContactDetailType_ )arg1 fromMessage:(id)arg2 foundInSignature:(BOOL)arg3 isDDSignature:(BOOL)arg4 detailType:(NSUInteger)arg5 detailValue:(id)arg6 modelVersion:(id)arg7 isUnlikelyPhone:(BOOL)arg8 ;
+(void)recordBirthdayExtractionAccuracy:(unsigned char)arg0 withOffset:(id)arg1 withModelVersion:(id)arg2 isFromCongratulation:(unsigned char)arg3 didRegexTrigger:(unsigned char)arg4 didResponseKitTrigger:(unsigned char)arg5 ;
+(void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ )arg0 forDetectionsInMessage:(id)arg1 signatureRange:(struct _NSRange )arg2 isDDSignature:(BOOL)arg3 ;
+(void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ )arg0 fromMessage:(id)arg1 foundInSignature:(BOOL)arg2 isDDSignature:(BOOL)arg3 detection:(id)arg4 ;
+(void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ )arg0 fromMessage:(id)arg1 foundInSignature:(BOOL)arg2 isDDSignature:(BOOL)arg3 match:(id)arg4 foundInCNContact:(struct SGMContactDetailOwner_ )arg5 modelVersion:(id)arg6 isUnlikelyPhone:(BOOL)arg7 ;
+(void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ )arg0 fromMessage:(id)arg1 foundInSignature:(BOOL)arg2 isDDSignature:(BOOL)arg3 match:(id)arg4 modelVersion:(id)arg5 isUnlikelyPhone:(BOOL)arg6 ;
+(void)recordSelfIdModelScore:(BOOL)arg0 model:(int)arg1 supervision:(int)arg2 ;
+(void)recordSentContactDetailWithMessage:(id)arg0 match:(id)arg1 found:(struct SGMContactDetailFoundIn_ )arg2 ;
-(id)initWithTracker:(id)arg0 ;


@end


#endif