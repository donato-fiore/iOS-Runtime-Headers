// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUCONTIGUOUSIMAGELAYOUT_H
#define _NUCONTIGUOUSIMAGELAYOUT_H



#import "NUImageLayout.h"

@interface _NUContiguousImageLayout : NUImageLayout



-(NSInteger)tileCount;
-(NSInteger)tileIndexAtPoint:(struct ? )arg0 ;
-(id)tileInfoAtIndex:(NSInteger)arg0 ;
-(struct ? )borderSize;
-(struct ? )contentRectForTileAtIndex:(NSInteger)arg0 ;
-(struct ? )frameRectForTileAtIndex:(NSInteger)arg0 ;
-(struct ? )tileCounts;
-(struct ? )tileSize;
-(void)enumerateTilesForReadingInRect:(struct ? )arg0 withBlock:(id)arg1 ;
-(void)enumerateTilesForWritingInRect:(struct ? )arg0 withBlock:(id)arg1 ;


@end


#endif