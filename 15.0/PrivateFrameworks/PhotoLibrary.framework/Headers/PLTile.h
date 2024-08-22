// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLTILE_H
#define PLTILE_H


#import <Foundation/Foundation.h>


@interface PLTile : NSObject {
    *__IOSurface _decodedSurface;
    CGRect _imageRect;
    id *_tileId;
    BOOL _visible;
}




-(BOOL)visible;
-(id)tileId;
-(struct CGRect )imageRect;
-(struct __IOSurface *)decodedSurface;
-(void)dealloc;
-(void)setDecodedSurface:(struct __IOSurface *)arg0 ;
-(void)setImageRect:(struct CGRect )arg0 ;
-(void)setTileId:(id)arg0 ;
-(void)setVisible:(BOOL)arg0 ;


@end


#endif