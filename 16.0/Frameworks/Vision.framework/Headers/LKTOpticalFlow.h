// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LKTOPTICALFLOW_H
#define LKTOPTICALFLOW_H


#import <Foundation/Foundation.h>


@interface LKTOpticalFlow : NSObject

@property (readonly, nonatomic) int height; // ivar: _height
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, nonatomic) int levelCount; // ivar: _levelCount
@property (nonatomic) int nlreg_padding; // ivar: _nlreg_padding
@property (nonatomic) int nlreg_radius; // ivar: _nlreg_radius
@property (nonatomic) float nlreg_sigma_c; // ivar: _nlreg_sigma_c
@property (nonatomic) float nlreg_sigma_l; // ivar: _nlreg_sigma_l
@property (nonatomic) float nlreg_sigma_w; // ivar: _nlreg_sigma_w
@property (readonly, nonatomic) int numScales; // ivar: _numScales
@property (nonatomic) int numWarpings; // ivar: _numWarpings
@property (nonatomic) unsigned int outputPixelFormat; // ivar: _outputPixelFormat
@property (nonatomic) BOOL useNonLocalRegularization; // ivar: _useNonLocalRegularization
@property (readonly, nonatomic) int width; // ivar: _width


-(BOOL)_validateInputImage:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(BOOL)_validateOutputImage:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(BOOL)estimateFlowFromReference:(struct __CVBuffer *)arg0 target:(struct __CVBuffer *)arg1 error:(*id)arg2 ;
-(BOOL)estimateFlowStream:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(BOOL)setOutputUV:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 numScales:(int)arg2 ;
-(void)waitUntilCompleted;


@end


#endif