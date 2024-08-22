// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRCAMERAREADEROUTPUTCAMERATEXT_H
#define CRCAMERAREADEROUTPUTCAMERATEXT_H

@class NSAttributedString;


#import "CRCameraReaderOutput.h"

@interface CRCameraReaderOutputCameraText : CRCameraReaderOutput

@property (readonly) CGRect boundingBox;
@property (copy) NSAttributedString *overlayString;
@property (readonly) float rotation;




@end


#endif