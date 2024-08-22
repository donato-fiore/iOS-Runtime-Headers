// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIQRCODEDESCRIPTOR_H
#define CIQRCODEDESCRIPTOR_H

@class NSData;


#import "CIBarcodeDescriptor.h"

@interface CIQRCodeDescriptor : CIBarcodeDescriptor

@property (readonly) NSData *errorCorrectedPayload; // ivar: errorCorrectedPayload
@property (readonly) NSInteger errorCorrectionLevel; // ivar: errorCorrectionLevel
@property (readonly) unsigned char maskPattern; // ivar: maskPattern
@property (readonly) NSInteger symbolVersion; // ivar: symbolVersion


+(BOOL)supportsSecureCoding;
+(id)descriptorWithPayload:(id)arg0 symbolVersion:(NSInteger)arg1 maskPattern:(unsigned char)arg2 errorCorrectionLevel:(NSInteger)arg3 ;
-(BOOL)isValid;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 symbolVersion:(NSInteger)arg1 maskPattern:(unsigned char)arg2 errorCorrectionLevel:(NSInteger)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif