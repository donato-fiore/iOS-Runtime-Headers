// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTRENDERREQUEST_H
#define PTRENDERREQUEST_H

@class NSDictionary;
@protocol PTRenderState, MTLTexture;

#import <Foundation/Foundation.h>

#import "PTTexture.h"

@interface PTRenderRequest : NSObject

@property (nonatomic) int AGC; // ivar: _AGC
@property (nonatomic) float alphaLowLight; // ivar: _alphaLowLight
@property (nonatomic) float aperture; // ivar: _aperture
@property (retain, nonatomic) PTTexture *destinationColor; // ivar: _destinationColor
@property (nonatomic) float disparityMax; // ivar: _disparityMax
@property (nonatomic) float disparityMin; // ivar: _disparityMin
@property (nonatomic) float focusDistance; // ivar: _focusDistance
@property (nonatomic) unsigned int frameId; // ivar: _frameId
@property (nonatomic) float highlightBoostFactor; // ivar: _highlightBoostFactor
@property (nonatomic) float highlightChromaFactor; // ivar: _highlightChromaFactor
@property (retain, nonatomic) NSDictionary *options; // ivar: _options
@property (retain, nonatomic) NSObject<PTRenderState> *renderState; // ivar: _renderState
@property (nonatomic) ? scissorRect; // ivar: _scissorRect
@property (retain, nonatomic) PTTexture *sourceColor; // ivar: _sourceColor
@property (retain, nonatomic) NSObject<MTLTexture> *sourceDisparity; // ivar: _sourceDisparity


-(id)init;


@end


#endif