// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUITHEMESCHEMARENDITIONGROUP_H
#define CUITHEMESCHEMARENDITIONGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CUIRenditionKey.h"

@interface CUIThemeSchemaRenditionGroup : NSObject {
    CUIRenditionKey *_baseKey;
    *? _part;
}


@property (retain, nonatomic) NSArray *renditions; // ivar: _renditions


+(id)renditionGroupsForRenditions:(id)arg0 part:(struct ? *)arg1 ;
-(NSInteger)partFeatures;
-(id)_layerNameForDrawingLayer:(NSInteger)arg0 ;
-(id)_layerNameForState:(NSInteger)arg0 ;
-(id)baseKey;
-(id)description;
-(id)initWithRenditions:(id)arg0 part:(struct ? *)arg1 ;
-(id)mutablePSDImageRef;
-(id)mutablePSDImageRefColumnStyle;
-(id)schemaLayersAndLayerGroups;
-(id)themeSchemaLayers;
-(void)addLayoutMetricsToPSDImageRef:(id)arg0 withRendition:(id)arg1 ;
-(void)addStatesAndDrawingLayersToPSDLayers:(id)arg0 forPresentationState:(NSUInteger)arg1 ;
-(void)addValueOrDim1LayersToPSDLayers:(id)arg0 forPresentationState:(NSUInteger)arg1 state:(NSUInteger)arg2 drawingLayer:(NSUInteger)arg3 ;
-(void)dealloc;


@end


#endif