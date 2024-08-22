// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPIXELBUFFERATTRIBUTEMEDIATOR_H
#define AVPIXELBUFFERATTRIBUTEMEDIATOR_H


#import <Foundation/Foundation.h>


@interface AVPixelBufferAttributeMediator : NSObject {
    *OpaqueVTPixelBufferAttributesMediator _mediator;
}




-(id)init;
-(id)mediatedPixelBufferAttributes;
-(void)dealloc;
-(void)removeRequestedPixelBufferAttributesAttributesForKey:(id)arg0 ;
-(void)setLayersAreSuppressed:(BOOL)arg0 ;
-(void)setRequestedPixelBufferAttributes:(id)arg0 forKey:(id)arg1 ;


@end


#endif