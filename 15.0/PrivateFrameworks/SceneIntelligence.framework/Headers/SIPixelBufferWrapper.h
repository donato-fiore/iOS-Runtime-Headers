// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIPIXELBUFFERWRAPPER_H
#define SIPIXELBUFFERWRAPPER_H


#import <Foundation/Foundation.h>


@interface SIPixelBufferWrapper : NSObject

@property *__CVBuffer pixelBuffer; // ivar: _pixelBuffer


-(id)initWithResolution:(struct CGSize )arg0 ;
-(id)initWithResolution:(struct CGSize )arg0 pixelformat:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif