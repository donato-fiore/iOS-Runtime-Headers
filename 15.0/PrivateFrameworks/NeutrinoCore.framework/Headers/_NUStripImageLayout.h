// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NUSTRIPIMAGELAYOUT_H
#define _NUSTRIPIMAGELAYOUT_H



#import "NUImageLayout.h"

@interface _NUStripImageLayout : NUImageLayout {
    NSInteger _stripHeight;
    NSInteger _stripCount;
}




-(BOOL)isEqualToLayout:(id)arg0 ;
-(NSInteger)tileCount;
-(id)initWithImageSize:(struct ? )arg0 stripHeight:(NSInteger)arg1 ;
-(id)tileInfoAtIndex:(NSInteger)arg0 ;
-(struct ? )borderSize;
-(struct ? )contentRectForTileAtIndex:(NSInteger)arg0 ;
-(struct ? )frameRectForTileAtIndex:(NSInteger)arg0 ;
-(struct ? )tileCounts;
-(struct ? )tileSize;


@end


#endif