// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIIOSURFACEWRAPPER_H
#define SIIOSURFACEWRAPPER_H


#import <Foundation/Foundation.h>


@interface SIIOSurfaceWrapper : NSObject

@property *__IOSurface iosurface; // ivar: _iosurface


-(NSUInteger)_bytesPerElement:(unsigned int)arg0 ;
-(id)initWithResolution:(struct CGSize )arg0 ;
-(id)initWithResolution:(struct CGSize )arg0 pixelformat:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif