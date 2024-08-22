// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCIMAGEANALYSISRESULT_H
#define VKCIMAGEANALYSISRESULT_H

@class NSArray, UIMenu, UIViewController;


#import "VKCTextRecognitionResult.h"
#import "VKImageAnalyzerRequest.h"
#import "VKCVisualSearchResult.h"

@interface VKCImageAnalysisResult : VKCTextRecognitionResult

@property (nonatomic) int analysisRequestID; // ivar: _analysisRequestID
@property (readonly, nonatomic) NSArray *appClipDataDetectorElements;
@property (readonly, nonatomic) NSArray *barcodeActions;
@property (readonly, nonatomic) NSArray *mrcDataDetectorElements;
@property (readonly, nonatomic) UIMenu *mrcMenu;
@property (weak, nonatomic) UIViewController *presentingViewControllerForMrcAction;
@property (retain, nonatomic) VKImageAnalyzerRequest *request; // ivar: _request
@property (readonly, nonatomic) NSArray *textDataDetectorElements;
@property (nonatomic) CGFloat totalBoundingBoxTextArea; // ivar: _totalBoundingBoxTextArea
@property (nonatomic) CGFloat totalQuadTextArea; // ivar: _totalQuadTextArea
@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult; // ivar: _visualSearchResult


+(BOOL)supportsSecureCoding;
-(id)dataDetectorsFromRecognitionResult:(id)arg0 ;
-(id)ddDictionaryFromDataDetectorElement:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentObservation:(id)arg0 mrcDataDetectors:(id)arg1 imageSize:(struct CGSize )arg2 ;
-(id)linesPlistFromSourceDocument:(id)arg0 ;
-(id)wordPlistFromOutputRegion:(id)arg0 document:(id)arg1 ;
-(id)wordsPlistFromRegion:(id)arg0 sourceDocument:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif