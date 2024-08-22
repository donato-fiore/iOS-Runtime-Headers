// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIPSDLAYEREFFECTS_H
#define CUIPSDLAYEREFFECTS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CUIPSDLayerEffects : NSObject

@property (retain) NSMutableDictionary *effectList; // ivar: _effectList
@property CGFloat effectScale; // ivar: _effectScale
@property BOOL visible; // ivar: _visible


-(id)colorOverlay;
-(id)dropShadow;
-(id)init;
-(void)addLayerEffectComponent:(id)arg0 ;
-(void)dealloc;


@end


#endif