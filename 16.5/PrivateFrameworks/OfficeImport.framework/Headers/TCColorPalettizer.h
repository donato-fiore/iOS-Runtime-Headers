// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCCOLORPALETTIZER_H
#define TCCOLORPALETTIZER_H


#import <Foundation/Foundation.h>


@interface TCColorPalettizer : NSObject {
    *_tagOctree m_pTree;
    BOOL isDefaultPaletteSize;
}




-(?)createNodeOctreeparent;
-(?)createOctreemaxPaletteSize;
-(?)getPaletteFromOctree:(?)arg0 paletteEntryindex;
-(BOOL)addQuadColor:(struct _tagRgbQuad )arg0 ;
-(BOOL)addTSUColor:(id)arg0 ;
-(id)getPaletteData;
-(id)getPaletteDataRaw;
-(id)getPngPaletteData;
-(id)initWitDefaultPaletteSize;
-(id)initWitMaxPaletteSize:(unsigned int)arg0 ;
-(int)addPixelToOctree:(struct _tagOctree *)arg0 pixel:(struct _tagRgbQuad )arg1 ;
-(int)deleteListOctree:(struct _tagLevelItem *)arg0 ;
-(int)deleteNodeOctree:(struct _tagOctreeNode *)arg0 ;
-(int)deleteOctree:(struct _tagOctree *)arg0 ;
-(int)paletteIndexFromQuadColor:(struct _tagRgbQuad )arg0 ;
-(int)paletteIndexFromTSUColor:(id)arg0 ;
-(int)reduceOctree:(struct _tagOctree *)arg0 ;
-(int)rgbToIndexOctree:(struct _tagOctree *)arg0 source:(struct _tagRgbQuad )arg1 destination:(char *)arg2 ;
-(unsigned int)paletteColorCount;
-(void)createPalette;
-(void)dealloc;


@end


#endif