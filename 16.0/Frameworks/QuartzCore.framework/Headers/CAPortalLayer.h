// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAPORTALLAYER_H
#define CAPORTALLAYER_H



#import "CALayer.h"

@interface CAPortalLayer : CALayer

@property BOOL allowsBackdropGroups;
@property BOOL crossDisplay;
@property BOOL hidesSourceLayer;
@property BOOL matchesOpacity;
@property BOOL matchesPosition;
@property BOOL matchesTransform;
@property unsigned int sourceContextId;
@property (weak) CALayer *sourceLayer;
@property NSUInteger sourceLayerRenderId;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)_hasRenderLayerSubclass;
-(*void)_copyRenderLayer:(*void)arg0 layerFlags:(unsigned int)arg1 commitFlags:(*unsigned int)arg2 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned int)arg0 ;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;


@end


#endif