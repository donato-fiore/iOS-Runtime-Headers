// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNRECOGNIZEDOCUMENTELEMENTSREQUESTCONFIGURATION_H
#define VNRECOGNIZEDOCUMENTELEMENTSREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"
#import "VNRecognizeDocumentElementsRequestElementConfiguration.h"

@interface VNRecognizeDocumentElementsRequestConfiguration : VNImageBasedRequestConfiguration

@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *documentElements; // ivar: _documentElements
@property NSUInteger imageCropAndScaleOption; // ivar: _imageCropAndScaleOption
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *machineReadableCodeElements; // ivar: _machineReadableCodeElements
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *textElements; // ivar: _textElements


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif