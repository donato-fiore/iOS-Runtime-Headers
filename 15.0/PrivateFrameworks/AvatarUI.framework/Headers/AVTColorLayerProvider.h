// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCOLORLAYERPROVIDER_H
#define AVTCOLORLAYERPROVIDER_H


#import <Foundation/Foundation.h>


@interface AVTColorLayerProvider : NSObject



-(id)providerForColorIntoLayer:(SEL)arg0 ;
-(id)providerForGradientFromColor:(SEL)arg0 ;
-(void)renderColorForColorPreset:(id)arg0 skinColor:(id)arg1 intoLayer:(id)arg2 ;
-(void)renderColorGradientForModelColor:(id)arg0 skinColor:(id)arg1 handler:(id)arg2 ;


@end


#endif