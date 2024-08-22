// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKCROPPARAMS_H
#define ABPKCROPPARAMS_H


#import <Foundation/Foundation.h>


@interface ABPKCropParams : NSObject

@property unsigned int height; // ivar: _height
@property unsigned int offsetHeight; // ivar: _offsetHeight
@property unsigned int offsetWidth; // ivar: _offsetWidth
@property unsigned int width; // ivar: _width


-(id)initWithAspectRatio:(float)arg0 andInputResolution:(struct CGSize )arg1 ;
-(id)initWithInputResolution:(struct CGSize )arg0 andOutputResolution:(struct CGSize )arg1 ;


@end


#endif