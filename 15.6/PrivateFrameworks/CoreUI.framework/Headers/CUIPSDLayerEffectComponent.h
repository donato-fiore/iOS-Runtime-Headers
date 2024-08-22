// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIPSDLAYEREFFECTCOMPONENT_H
#define CUIPSDLAYEREFFECTCOMPONENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CUIPSDLayerEffectComponent : NSObject

@property (retain) NSString *name; // ivar: _name
@property BOOL visible; // ivar: _visible


-(BOOL)updateLayerEffectPreset:(id)arg0 error:(*id)arg1 ;
// -(id)_colorFromShapeEffectValue:(unk)arg0  ;
-(id)initWithEffectFromPreset:(id)arg0 atIndex:(unsigned int)arg1 ;
-(unsigned int)effectType;
-(void)dealloc;


@end


#endif