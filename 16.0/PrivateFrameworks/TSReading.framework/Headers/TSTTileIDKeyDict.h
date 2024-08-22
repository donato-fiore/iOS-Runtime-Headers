// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTILEIDKEYDICT_H
#define TSTTILEIDKEYDICT_H



#import "TSPContainedObject.h"

@interface TSTTileIDKeyDict : TSPContainedObject {
    *void mMap;
}




-(NSInteger)count;
-(id)initWithOwner:(id)arg0 ;
-(id)tileForID:(struct ? )arg0 ;
-(void)applyFunction:(*unk)arg0 withState:(*void)arg1 ;
-(void)dealloc;
-(void)makeTilesPerformSelector:(SEL)arg0 ;
-(void)removeAllTiles;
-(void)removeTileForID:(struct ? )arg0 ;
-(void)setTile:(id)arg0 forID:(struct ? )arg1 ;


@end


#endif