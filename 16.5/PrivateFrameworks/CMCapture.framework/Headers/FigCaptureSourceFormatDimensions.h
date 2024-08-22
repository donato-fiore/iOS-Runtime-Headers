// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESOURCEFORMATDIMENSIONS_H
#define FIGCAPTURESOURCEFORMATDIMENSIONS_H


#import <Foundation/Foundation.h>


@interface FigCaptureSourceFormatDimensions : NSObject

@property (readonly) ? deferredPhotoProxyDimensions; // ivar: _deferredPhotoProxyDimensions
@property (readonly) ? dimensions; // ivar: _dimensions
@property (readonly) int flavor; // ivar: _flavor
@property (readonly) BOOL isPrivate; // ivar: _isPrivate
@property (readonly) ? maxUpscalingDimensions; // ivar: _maxUpscalingDimensions


+(id)identifyDimensionsFromFlavor:(int)arg0 availableHighResStillImageDimensions:(id)arg1 ;
+(id)identifySourceFormatDimensionsFromDimensions:(struct ? )arg0 availableHighResStillImageDimensions:(id)arg1 ;
+(int)identifyResolutionFlavorFromDimensions:(struct ? )arg0 availableHighResStillImageDimensions:(id)arg1 ;
-(BOOL)dimensionsAreEqualToDimensions:(struct ? )arg0 ;
-(id)description;
-(id)initWithDimensions:(struct ? )arg0 deferredPhotoProxyDimensions:(struct ? )arg1 isPrivate:(BOOL)arg2 flavor:(int)arg3 maxUpscalingDimensions:(struct ? )arg4 ;


@end


#endif