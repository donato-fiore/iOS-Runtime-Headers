// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGCOLORPROGRAM_H
#define PXGCOLORPROGRAM_H

@protocol MTLTexture, MTLDevice, MTLBuffer;

#import <Foundation/Foundation.h>


@interface PXGColorProgram : NSObject {
    unsigned int _num_trc_luts;
    *unsigned int _trc_lut_widths;
}


@property (readonly, nonatomic) NSObject<MTLTexture> *TRCLUTs; // ivar: _TRCLUTs
@property (readonly, nonatomic) NSObject<MTLTexture> *colorCube; // ivar: _colorCube
@property (readonly, nonatomic) *CGColorSpace destinationColorSpace; // ivar: _destinationColorSpace
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly, nonatomic) BOOL needsHDRToSDRConversion;
@property (readonly, nonatomic) unsigned short numInputs; // ivar: _numInputs
@property (readonly, nonatomic) unsigned int opcodes; // ivar: _opcodes
@property (readonly, nonatomic) unsigned short paramCount; // ivar: _paramCount
@property (readonly, nonatomic) NSObject<MTLBuffer> *params; // ivar: _params
@property (readonly, nonatomic) *CGColorSpace sourceColorSpace; // ivar: _sourceColorSpace


-(BOOL)_compactProgramWithConversionInfo:(struct CGColorConversionInfo *)arg0 cubeSize:(int)arg1 cubeOnly:(BOOL)arg2 ;
-(BOOL)_generateProgram;
-(id)description;
-(id)diagnosticDescription;
-(id)init;
-(id)initWithDevice:(id)arg0 sourceColorSpace:(struct CGColorSpace *)arg1 destinationColorSpace:(struct CGColorSpace *)arg2 flags:(NSUInteger)arg3 ;
-(void)dealloc;


@end


#endif