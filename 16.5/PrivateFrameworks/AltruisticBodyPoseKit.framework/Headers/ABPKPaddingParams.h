// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKPADDINGPARAMS_H
#define ABPKPADDINGPARAMS_H


#import <Foundation/Foundation.h>


@interface ABPKPaddingParams : NSObject

@property unsigned int height; // ivar: _height
@property unsigned int offsetHeight; // ivar: _offsetHeight
@property unsigned int offsetWidth; // ivar: _offsetWidth
@property float scale; // ivar: _scale
@property unsigned int width; // ivar: _width


-(id)initWithInputResolution:(struct CGSize )arg0 andOutputResolution:(struct CGSize )arg1 ;


@end


#endif