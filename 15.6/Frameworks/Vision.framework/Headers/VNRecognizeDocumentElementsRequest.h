// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNRECOGNIZEDOCUMENTELEMENTSREQUEST_H
#define VNRECOGNIZEDOCUMENTELEMENTSREQUEST_H

@class NSString, NSArray;
@protocol VNImageIdealImageSizeProviding;


#import "VNImageBasedRequest.h"
#import "VNRecognizeDocumentElementsRequestElementConfiguration.h"

@interface VNRecognizeDocumentElementsRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *documentElements;
@property (readonly) NSUInteger hash;
@property NSUInteger imageCropAndScaleOption;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *machineReadableCodeElements;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *textElements;


+(Class)configurationClass;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)_applicableDetectorAndOptions:(*id)arg0 loadedInSession:(id)arg1 error:(*id)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(id)supportedIdentifiersAndReturnError:(*id)arg0 ;


@end


#endif