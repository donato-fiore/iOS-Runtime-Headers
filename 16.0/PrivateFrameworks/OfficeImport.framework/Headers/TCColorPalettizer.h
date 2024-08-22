// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCCOLORPALETTIZER_H
#define TCCOLORPALETTIZER_H


#import <Foundation/Foundation.h>


@interface TCColorPalettizer : NSObject {
    ? m_pTree;
    BOOL isDefaultPaletteSize;
}




-(?)addPixelToOctreepixel;
-(?)createNodeOctreeparent;
-(?)getPaletteFromOctree:(?)arg0 paletteEntryindex;
-(?)rgbToIndexOctree:(?)arg0 sourcedestination;
-(BOOL)addQuadColor:(struct _tagRgbQuad )arg0 ;
-(BOOL)addTSUColor:(id)arg0 ;
-(id)getPaletteData;
-(id)getPaletteDataRaw;
-(id)getPngPaletteData;
-(id)initWitDefaultPaletteSize;
-(id)initWitMaxPaletteSize:(unsigned int)arg0 ;
-(int)createOctree:(struct _tagOctree **)arg0 maxPaletteSize:(unsigned short)arg1 ;
-(int)deleteListOctree:(struct _tagLevelItem *)arg0 ;
-(int)deleteNodeOctree:(struct _tagOctreeNode *)arg0 ;
-(int)deleteOctree:(struct _tagOctree *)arg0 ;
-(int)paletteIndexFromQuadColor:(struct _tagRgbQuad )arg0 ;
-(int)paletteIndexFromTSUColor:(id)arg0 ;
-(int)reduceOctree:(struct _tagOctree *)arg0 ;
-(unsigned int)paletteColorCount;
-(void)createPalette;
-(void)dealloc;


@end


#endif