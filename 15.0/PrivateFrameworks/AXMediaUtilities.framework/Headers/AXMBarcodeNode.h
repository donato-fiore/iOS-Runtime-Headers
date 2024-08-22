// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMBARCODENODE_H
#define AXMBARCODENODE_H

@class AVCaptureMetadataOutput;
@protocol NSSecureCoding;


#import "AXMEvaluationNode.h"

@interface AXMBarcodeNode : AXMEvaluationNode <NSSecureCoding>



@property (retain, nonatomic) AVCaptureMetadataOutput *captureOutput; // ivar: _captureOutput


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;


@end


#endif