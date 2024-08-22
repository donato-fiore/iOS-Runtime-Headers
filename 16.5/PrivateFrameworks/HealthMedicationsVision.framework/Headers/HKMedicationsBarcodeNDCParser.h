// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSBARCODENDCPARSER_H
#define HKMEDICATIONSBARCODENDCPARSER_H


#import <Foundation/Foundation.h>


@interface HKMedicationsBarcodeNDCParser : NSObject



+(BOOL)_isGTIN14CodeValid:(id)arg0 ;
+(BOOL)isObservationSupported:(id)arg0 ;
+(id)_barcodeObservationsFrom:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
+(id)_convertNDCFromGTIN14Code:(id)arg0 ;
+(id)_parsedGTIN14FromDataMatrix:(id)arg0 ;
+(id)_parsedGTIN14FromDataMatrixPayload:(id)arg0 ;
+(id)_parsedGTIN14FromEAN13:(id)arg0 ;
+(id)_parsedGTIN14FromEAN13Payload:(id)arg0 ;
+(id)_parsedNDCFromEAN13:(id)arg0 ;
+(id)hkt_convertGTIN14ToNDCCode:(id)arg0 ;
+(id)hkt_parsedGTIN14FromDataMatrixPayload:(id)arg0 ;
+(id)hkt_parsedGTIN14FromEAN13Payload:(id)arg0 ;
+(id)hkt_parsedNDCFromDataMatrixPayload:(id)arg0 ;
+(id)hkt_parsedNDCFromEAN13Payload:(id)arg0 ;
+(id)parsedGTIN14CodeFromBarcodeObservation:(id)arg0 ;
+(id)parsedGTIN14CodesFromCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
+(id)parsedNDCCodeFromBarcodeObservation:(id)arg0 ;
+(id)parsedNDCCodesFromCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
+(id)parsedNDCFromDataMatrix:(id)arg0 ;


@end


#endif