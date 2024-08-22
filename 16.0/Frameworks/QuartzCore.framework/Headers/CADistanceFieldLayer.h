// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADISTANCEFIELDLAYER_H
#define CADISTANCEFIELDLAYER_H

@class NSString;


#import "CALayer.h"

@interface CADistanceFieldLayer : CALayer

@property *CGColor foregroundColor;
@property BOOL invertsShape;
@property CGFloat lineWidth;
@property CGFloat offset;
@property (copy) NSString *renderMode;
@property CGFloat sharpness;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)_hasRenderLayerSubclass;
+(id)defaultValueForKey:(id)arg0 ;
-(*void)_copyRenderLayer:(*void)arg0 layerFlags:(unsigned int)arg1 commitFlags:(*unsigned int)arg2 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned int)arg0 ;
-(unsigned int)_renderImageCopyFlags;
-(unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0 ;
-(void)_colorSpaceDidChange;
-(void)didChangeValueForKey:(id)arg0 ;


@end


#endif