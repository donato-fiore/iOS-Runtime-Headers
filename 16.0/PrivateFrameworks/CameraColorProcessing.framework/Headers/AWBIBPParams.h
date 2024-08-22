// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWBIBPPARAMS_H
#define AWBIBPPARAMS_H

@class NSDictionary, NSNumber, NSString, NSMutableDictionary;
@protocol AWBIBPParams, MTLTexture;

#import <Foundation/Foundation.h>


@interface AWBIBPParams : NSObject <AWBIBPParams>



@property (nonatomic) ? awbComboGains; // ivar: _awbComboGains
@property (nonatomic) ? awbComboGainsNormalized; // ivar: _awbComboGainsNormalized
@property (nonatomic) ? awbGains; // ivar: _awbGains
@property (retain, nonatomic) NSDictionary *cameraInfo; // ivar: _cameraInfo
@property (retain, nonatomic) NSNumber *cfaLayout; // ivar: _cfaLayout
@property (retain, nonatomic) NSObject<MTLTexture> *clippedTex; // ivar: _clippedTex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *digitalFlash; // ivar: _digitalFlash
@property (retain, nonatomic) NSNumber *firstPixel; // ivar: _firstPixel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MTLTexture> *imageTex; // ivar: _imageTex
@property (retain, nonatomic) NSObject<MTLTexture> *lscGainsTex; // ivar: _lscGainsTex
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSDictionary *moduleConfig; // ivar: _moduleConfig
@property (retain, nonatomic) NSMutableDictionary *outputMetadata; // ivar: _outputMetadata
@property (retain, nonatomic) NSDictionary *registers; // ivar: _registers
@property (retain, nonatomic) NSDictionary *setFileDict; // ivar: _setFileDict
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *validBufferRect; // ivar: _validBufferRect


-(void)reset;


@end


#endif