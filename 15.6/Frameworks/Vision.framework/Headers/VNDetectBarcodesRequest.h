// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNDETECTBARCODESREQUEST_H
#define VNDETECTBARCODESREQUEST_H

@class NSString, NSArray;


#import "VNImageBasedRequest.h"

@interface VNDetectBarcodesRequest : VNImageBasedRequest

@property (copy, nonatomic) NSString *locateMode;
@property (readonly, copy) NSArray *results;
@property (nonatomic) BOOL stopAtFirstPyramidWith2DCode;
@property (copy, nonatomic) NSArray *symbologies;
@property (nonatomic) BOOL useSegmentationPregating; // ivar: _useSegmentationPregating


+(Class)configurationClass;
+(id)ACBSBarcodeTypeForBarcodeSymbology:(id)arg0 ;
+(id)_allBarcodeSymbologiesRev1;
+(id)_allBarcodeSymbologiesRev2;
+(id)_allBarcodeSymbologiesRev2Private;
+(id)availableLocateModes;
+(id)availableLocateModesRev1;
+(id)availableLocateModesRev2;
+(id)barcodeSymbologyForACBSBarcodeType:(id)arg0 ;
+(id)barcodeSymbologyForMRCSymbology:(struct __CFString *)arg0 ;
+(id)descriptionForPrivateRevision:(NSUInteger)arg0 ;
+(id)supportedPrivateRevisions;
+(id)supportedSymbologies;
+(id)supportedSymbologiesRev1;
+(id)supportedSymbologiesRev2;
+(id)supportedSymbologiesRev2Private;
+(struct ? *)revisionAvailability;
+(struct __CFString *)MRCSymbologyForBarcodeSymbology:(id)arg0 ;
+(void)initialize;
-(BOOL)_getCornerPointsFromCodeLocationPoints:(id)arg0 bottomLeft:(struct CGPoint *)arg1 topLeft:(struct CGPoint *)arg2 topRight:(struct CGPoint *)arg3 bottomRight:(struct CGPoint *)arg4 ;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)_MRCLocateMode;
-(id)_barcodesDetectedInImageBuffer:(id)arg0 usingACBSConfig:(struct ACBSConfig *)arg1 originatingRequestSpecifier:(id)arg2 error:(*id)arg3 ;
-(id)_machineReadableCodesDetectedInImageBuffer:(id)arg0 originatingRequestSpecifier:(id)arg1 error:(*id)arg2 ;
-(id)_newVNBarcodeSymbologyAztecDescriptorForACBSBarcodeInfo:(id)arg0 ;
-(id)_newVNBarcodeSymbologyAztecDescriptorForMRCDescriptor:(struct __MRCDescriptor *)arg0 error:(*id)arg1 ;
-(id)_newVNBarcodeSymbologyPDF417DescriptorForACBSBarcodeInfo:(id)arg0 ;
-(id)_newVNBarcodeSymbologyPDF417DescriptorForMRCDescriptor:(struct __MRCDescriptor *)arg0 error:(*id)arg1 ;
-(id)_newVNBarcodeSymbologyQRDescriptorForACBSBarcodeInfo:(id)arg0 ;
-(id)_newVNBarcodeSymbologyQRDescriptorForMRCDescriptor:(struct __MRCDescriptor *)arg0 error:(*id)arg1 ;
-(id)availableLocateModesAndReturnError:(*id)arg0 ;
-(id)newBarcodeObservationForACBSBarcodeInfo:(id)arg0 imageWidth:(NSUInteger)arg1 imageHeight:(NSUInteger)arg2 roiCroppingPixelRect:(struct CGRect )arg3 originatingRequestSpecifier:(id)arg4 error:(*id)arg5 ;
-(id)newBarcodeObservationForMRCDescriptor:(struct __MRCDescriptor *)arg0 roiCroppingPixelRect:(struct CGRect )arg1 originatingRequestSpecifier:(id)arg2 error:(*id)arg3 ;
-(id)supportedSymbologiesAndReturnError:(*id)arg0 ;
-(int)_ACBarcodeRecognizerLocateMode;
-(struct ACBSConfig *)_createACBSConfigAndReturnError:(*id)arg0 ;
-(struct __CFDictionary *)_createMRCDecoderOptionsAndReturnError:(*id)arg0 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;
-(void)resolvedRevisionDidChangeFromRevision:(NSUInteger)arg0 ;


@end


#endif