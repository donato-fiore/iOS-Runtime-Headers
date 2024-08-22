// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUTILEINFO_H
#define NUTILEINFO_H


#import <Foundation/Foundation.h>


@interface NUTileInfo : NSObject

@property (readonly, nonatomic) ? contentRect; // ivar: _contentRect
@property (readonly, nonatomic) ? frameRect; // ivar: _frameRect
@property (readonly, nonatomic) NSInteger index; // ivar: _index
@property (readonly, nonatomic) ? size; // ivar: _size


+(id)tileInfoWithIndex:(NSInteger)arg0 size:(struct ? )arg1 frameRect:(struct ? )arg2 contentRect:(struct ? )arg3 ;
-(id)debugDescription;
-(id)translatedAndClippedRegion:(id)arg0 ;


@end


#endif