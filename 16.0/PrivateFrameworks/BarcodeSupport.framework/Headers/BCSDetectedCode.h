// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSDETECTEDCODE_H
#define BCSDETECTEDCODE_H

@class AVMetadataMachineReadableCodeObject, VNBarcodeObservation;

#import <Foundation/Foundation.h>


@interface BCSDetectedCode : NSObject

@property (readonly, nonatomic) AVMetadataMachineReadableCodeObject *mrcObject; // ivar: _mrcObject
@property (readonly, nonatomic) VNBarcodeObservation *observation; // ivar: _observation


+(id)detectedCodeWithBarcodeObservation:(id)arg0 ;
+(id)detectedCodeWithMachineReadableObject:(id)arg0 ;
-(BOOL)isLikelyEqualToCode:(id)arg0 ;
-(void)parseCodeWithCompletion:(id)arg0 ;


@end


#endif