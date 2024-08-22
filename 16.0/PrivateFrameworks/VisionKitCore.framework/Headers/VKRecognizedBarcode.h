// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKRECOGNIZEDBARCODE_H
#define VKRECOGNIZEDBARCODE_H

@class CIBarcodeDescriptor, VNBarcodeObservation, NSString;


#import "VKRecognizedItem.h"

@interface VKRecognizedBarcode : VKRecognizedItem

@property (readonly, nonatomic) CIBarcodeDescriptor *barcodeDescriptor;
@property (readonly, nonatomic) VNBarcodeObservation *observation;
@property (readonly, nonatomic) NSString *payloadStringValue;
@property (readonly, nonatomic) NSString *symbology;


-(id)description;
-(id)initWithFrameInfo:(id)arg0 barcodeObservation:(id)arg1 ;


@end


#endif