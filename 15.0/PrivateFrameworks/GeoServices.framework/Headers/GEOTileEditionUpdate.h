// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTILEEDITIONUPDATE_H
#define GEOTILEEDITIONUPDATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface GEOTileEditionUpdate : NSObject {
    NSMutableArray *_entries;
}


@property (nonatomic) BOOL flushEverything; // ivar: _flushEverything
@property (nonatomic) BOOL invalidateEverything; // ivar: _invalidateEverything


-(NSUInteger)tilesetCount;
-(id)init;
-(id)initWithActiveTileGroup:(id)arg0 oldActiveTileGroup:(id)arg1 dataSetDiffers:(BOOL)arg2 flushEverything:(BOOL)arg3 ;
// -(void)addTileset:(unk)arg0 edition:(unsigned int)arg1 provider:(struct ? )arg2 invalidateOnly:(unsigned int)arg3  ;
-(void)tileset:(*unk)arg0 edition:(unsigned int)arg1 provider:(struct ? )arg2 invalidateOnly:(*unsigned int)arg3 atIndex:(*unsigned int)arg4 ;


@end


#endif