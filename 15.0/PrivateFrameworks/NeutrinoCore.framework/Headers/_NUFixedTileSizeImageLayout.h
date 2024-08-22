// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NUFIXEDTILESIZEIMAGELAYOUT_H
#define _NUFIXEDTILESIZEIMAGELAYOUT_H



#import "NUImageLayout.h"

@interface _NUFixedTileSizeImageLayout : NUImageLayout {
    ? _tileSize;
    ? _borderSize;
    ? _tileCounts;
}




-(BOOL)isEqualToLayout:(id)arg0 ;
-(NSInteger)tileCount;
-(id)initWithImageSize:(struct ? )arg0 tileSize:(struct ? )arg1 borderSize:(struct ? )arg2 ;
-(id)tileInfoAtIndex:(NSInteger)arg0 ;
-(struct ? )borderSize;
-(struct ? )contentRectForTileAtIndex:(NSInteger)arg0 ;
-(struct ? )frameRectForTileAtIndex:(NSInteger)arg0 ;
-(struct ? )tileCounts;
-(struct ? )tileSize;


@end


#endif