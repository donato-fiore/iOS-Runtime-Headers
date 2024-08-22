// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNDETECTTEXTRECTANGLESREQUEST_H
#define VNDETECTTEXTRECTANGLESREQUEST_H

@class NSString, NSArray;


#import "VNImageBasedRequest.h"

@interface VNDetectTextRectanglesRequest : VNImageBasedRequest

@property (copy, nonatomic) NSString *additionalCharacters;
@property (nonatomic) NSUInteger algorithm;
@property (nonatomic) BOOL detectDiacritics;
@property (nonatomic) BOOL minimizeFalseDetections;
@property (nonatomic) NSUInteger minimumCharacterPixelHeight;
@property (nonatomic) BOOL reportCharacterBoxes;
@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) NSString *textRecognition;


+(Class)configurationClass;
+(void)initialize;
-(BOOL)_detectCreditCardTextWithRequestPerformingContext:(id)arg0 requestRevision:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_detectTextWithRequestPerformingContext:(id)arg0 requestRevision:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_futharkRecognitionLanguage;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif