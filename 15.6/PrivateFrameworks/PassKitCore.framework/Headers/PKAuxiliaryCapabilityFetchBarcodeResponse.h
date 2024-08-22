// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAUXILIARYCAPABILITYFETCHBARCODERESPONSE_H
#define PKAUXILIARYCAPABILITYFETCHBARCODERESPONSE_H

@class NSArray;


#import "PKAuxiliaryCapabilityWebServiceResponse.h"

@interface PKAuxiliaryCapabilityFetchBarcodeResponse : PKAuxiliaryCapabilityWebServiceResponse

@property (readonly, nonatomic) NSArray *barcodes; // ivar: _barcodes


-(id)initWithData:(id)arg0 ;


@end


#endif