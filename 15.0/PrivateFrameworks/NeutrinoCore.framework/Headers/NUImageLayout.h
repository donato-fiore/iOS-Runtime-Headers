// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUIMAGELAYOUT_H
#define NUIMAGELAYOUT_H


#import <Foundation/Foundation.h>


@interface NUImageLayout : NSObject

@property (readonly, nonatomic) ? imageSize; // ivar: _imageSize
@property (readonly, nonatomic) NSInteger tileCount;


+(id)contiguousLayoutForImageSize:(struct ? )arg0 ;
+(id)overlappingTiledLayoutForImageSize:(struct ? )arg0 tileSize:(struct ? )arg1 borderSize:(struct ? )arg2 ;
+(id)stripLayoutForImageSize:(struct ? )arg0 stripHeight:(NSInteger)arg1 ;
+(id)tiledLayoutForImageSize:(struct ? )arg0 tileSize:(struct ? )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLayout:(id)arg0 ;
-(NSInteger)tileIndexAtPoint:(struct ? )arg0 ;
-(NSUInteger)hash;
-(id)initWithImageSize:(struct ? )arg0 ;
-(id)tileInfoAtIndex:(NSInteger)arg0 ;
-(struct ? )borderSize;
-(struct ? )contentRectForTileAtIndex:(NSInteger)arg0 ;
-(struct ? )frameRectForTileAtIndex:(NSInteger)arg0 ;
-(struct ? )tileSize;
-(void)enumerateTilesForReadingInRect:(struct ? )arg0 withBlock:(id)arg1 ;
-(void)enumerateTilesForWritingInRect:(struct ? )arg0 withBlock:(id)arg1 ;


@end


#endif