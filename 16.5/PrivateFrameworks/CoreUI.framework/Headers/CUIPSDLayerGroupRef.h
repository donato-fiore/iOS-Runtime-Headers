// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIPSDLAYERGROUPREF_H
#define CUIPSDLAYERGROUPREF_H



#import "CUIPSDLayerBaseRef.h"
#import "_CUIPSDSublayerInfo.h"

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {
    _CUIPSDSublayerInfo *_sublayerInfo;
}




-(BOOL)_isGroupType:(unsigned int)arg0 ;
-(BOOL)isGroupEnd;
-(BOOL)isGroupStart;
-(BOOL)isLayerGroup;
-(BOOL)isOpen;
-(id)initWithImageRef:(id)arg0 layerIndex:(unsigned int)arg1 ;
-(id)layerEnumerator;
-(id)layerNames;
-(id)layerRefAtIndex:(unsigned int)arg0 ;
-(struct CGRect )bounds;
-(unsigned int)numberOfLayers;
-(void)dealloc;
-(void)enumerateLayersUsingBlock:(id)arg0 ;


@end


#endif