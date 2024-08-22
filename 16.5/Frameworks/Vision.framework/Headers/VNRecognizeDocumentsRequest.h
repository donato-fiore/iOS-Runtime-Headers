// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNRECOGNIZEDOCUMENTSREQUEST_H
#define VNRECOGNIZEDOCUMENTSREQUEST_H

@class NSArray, NSString;
@protocol VNRequestProgressProviding, VNDocumentObservationsAccepting;


#import "VNImageBasedRequest.h"
#import "VNDetectBarcodesRequest.h"

@interface VNRecognizeDocumentsRequest : VNImageBasedRequest <VNRequestProgressProviding, VNDocumentObservationsAccepting>



@property (retain, nonatomic) VNDetectBarcodesRequest *barcodeRequest; // ivar: _barcodeRequest
@property (copy, nonatomic) NSArray *customWords;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL detectionOnly;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL indeterminate; // ivar: indeterminate
@property (copy, nonatomic) NSArray *inputTextBlocks; // ivar: inputTextBlocks
@property (nonatomic) NSUInteger maximumCandidateCount;
@property (nonatomic) float minimumTextHeight;
@property (copy, nonatomic) id *progressHandler; // ivar: progressHandler
@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (nonatomic) NSInteger recognitionLevel;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesAlternateLineGrouping;
@property (nonatomic) BOOL usesLanguageCorrection;
@property (nonatomic) BOOL usesLanguageDetection;


+(Class)configurationClass;
+(id)supportedRecognitionLanguagesForTextRecognitionLevel:(NSInteger)arg0 revision:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)hasCancellationHook;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(id)supportedRecognitionLanguagesAndReturnError:(*id)arg0 ;


@end


#endif