// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFPARALLAXLAYERSTACK_H
#define PFPARALLAXLAYERSTACK_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "PFParallaxLayer.h"
#import "PFParallaxLayout.h"

@interface PFParallaxLayerStack : NSObject

@property (readonly, nonatomic) PFParallaxLayer *backgroundBackfillLayer;
@property (readonly, nonatomic) PFParallaxLayer *backgroundLayer;
@property (readonly, nonatomic) CGFloat clockAreaLuminance; // ivar: _clockAreaLuminance
@property (readonly, nonatomic) BOOL depthEnabled; // ivar: _depthEnabled
@property (readonly, nonatomic) PFParallaxLayer *foregroundBackfillLayer;
@property (readonly, nonatomic) PFParallaxLayer *foregroundLayer;
@property (readonly, nonatomic) BOOL hasBackfillLayers;
@property (readonly, nonatomic) BOOL hasDebugLayers;
@property (readonly, nonatomic) BOOL hasInactiveLayers;
@property (readonly, nonatomic) BOOL hasMainLayers;
@property (readonly, nonatomic) PFParallaxLayer *inactiveBackgroundLayer;
@property (readonly, nonatomic) PFParallaxLayer *inactiveForegroundLayer;
@property (retain, nonatomic) NSDictionary *layerMap; // ivar: _layerMap
@property (readonly, nonatomic) NSArray *layers; // ivar: _layers
@property (readonly, nonatomic) PFParallaxLayout *layout; // ivar: _layout
@property (readonly, nonatomic) BOOL parallaxDisabled; // ivar: _parallaxDisabled
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(id)description;
-(id)initWithLayers:(id)arg0 size:(struct CGSize )arg1 layout:(id)arg2 depthEnabled:(BOOL)arg3 parallaxDisabled:(BOOL)arg4 clockAreaLuminance:(CGFloat)arg5 ;
-(id)layerStackByRemovingLayersWithIdentifiers:(id)arg0 ;
-(id)layerStackByRemovingLayersWithOptions:(NSUInteger)arg0 ;
-(id)layerStackByUpdatingClockAreaLuminance:(CGFloat)arg0 ;
-(id)layerStackByUpdatingClockLayerOrder:(id)arg0 ;
-(id)layerStackByUpdatingDepthEnabled:(BOOL)arg0 ;
-(id)layerStackByUpdatingInactiveFrame:(struct CGRect )arg0 ;
-(id)layerStackByUpdatingLayers:(id)arg0 ;
-(id)layerStackByUpdatingLayout:(id)arg0 ;
-(id)layerStackByUpdatingParallaxDisabled:(BOOL)arg0 ;
-(id)layerStackByUpdatingVisibleFrame:(struct CGRect )arg0 ;
-(id)layerWithIdentifier:(id)arg0 ;


@end


#endif