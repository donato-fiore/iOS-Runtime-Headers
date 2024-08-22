// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMETADATAMACHINEREADABLECODEOBJECT_H
#define AVMETADATAMACHINEREADABLECODEOBJECT_H

@class NSArray, CIBarcodeDescriptor, NSString;


#import "AVMetadataObject.h"
#import "AVMetadataMachineReadableCodeObjectInternal.h"

@interface AVMetadataMachineReadableCodeObject : AVMetadataObject {
    AVMetadataMachineReadableCodeObjectInternal *_internal;
}


@property (readonly) NSArray *corners;
@property (readonly) CIBarcodeDescriptor *descriptor;
@property (readonly) NSString *stringValue;


+(id)machineReadableCodeObjectWithAppClipCodeDictionary:(id)arg0 input:(id)arg1 ;
+(id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg0 input:(id)arg1 ;
-(id)basicDescriptor;
-(id)description;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg0 withTransform:(struct CGAffineTransform )arg1 isVideoMirrored:(BOOL)arg2 rollAdjustment:(CGFloat)arg3 ;
-(id)initWithAppClipCodeDictionary:(id)arg0 input:(id)arg1 ;
-(id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg0 input:(id)arg1 ;
-(void)dealloc;


@end


#endif