// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHRECOGNITIONINSIGHT_H
#define CHRECOGNITIONINSIGHT_H

@class NSString, NSError, NSCharacterSet, NSLocale, NSDictionary;

#import <Foundation/Foundation.h>

#import "CHDrawing.h"
#import "CHRecognitionInsightRequest.h"
#import "CHTokenizedTextResult.h"

@interface CHRecognitionInsight : NSObject

@property (nonatomic) int autoCapitalizationMode; // ivar: _autoCapitalizationMode
@property (readonly, nonatomic) NSString *autoCapitalizationModeDescription;
@property (nonatomic) int autoCorrectionMode; // ivar: _autoCorrectionMode
@property (readonly, nonatomic) NSString *autoCorrectionModeDescription;
@property (copy, nonatomic) CHDrawing *inputDrawing; // ivar: _inputDrawing
@property (retain, nonatomic) CHRecognitionInsightRequest *insightRequest; // ivar: _insightRequest
@property (copy, nonatomic) NSError *recognitionError; // ivar: _recognitionError
@property (copy, nonatomic) NSCharacterSet *recognizerActiveCharacterSet; // ivar: _recognizerActiveCharacterSet
@property (nonatomic) int recognizerContentType; // ivar: _recognizerContentType
@property (readonly, nonatomic) NSString *recognizerContentTypeDescription;
@property (copy, nonatomic) NSLocale *recognizerLocale; // ivar: _recognizerLocale
@property (nonatomic) NSUInteger recognizerMaxRecognitionResultCount; // ivar: _recognizerMaxRecognitionResultCount
@property (nonatomic) CGSize recognizerMinimumDrawingSize; // ivar: _recognizerMinimumDrawingSize
@property (copy, nonatomic) NSDictionary *recognizerOptions; // ivar: _recognizerOptions
@property (nonatomic) int recognizerRecognitionMode; // ivar: _recognizerRecognitionMode
@property (readonly, nonatomic) NSString *recognizerRecognitionModeDescription;
@property (copy, nonatomic) CHTokenizedTextResult *textResult; // ivar: _textResult


-(id)description;
-(void)recordConfigurationForRecognizer:(id)arg0 options:(id)arg1 ;
-(void)recordInputDrawing:(id)arg0 ;
-(void)recordInsightRequest:(id)arg0 ;
-(void)recordTextResult:(id)arg0 recognitionError:(id)arg1 ;


@end


#endif