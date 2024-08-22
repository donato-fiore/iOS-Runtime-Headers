// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRCAMERAREADEROUTPUTIDCARD_H
#define CRCAMERAREADEROUTPUTIDCARD_H

@class NSString, UIImage, NSArray;


#import "CRCameraReaderOutput.h"

@interface CRCameraReaderOutputIDCard : CRCameraReaderOutput

@property (readonly) NSString *capturePath;
@property (readonly) UIImage *imageValue;
@property (readonly) NSArray *targetVertices;
@property (readonly) NSArray *vertices;




@end


#endif