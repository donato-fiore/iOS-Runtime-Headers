// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXNEWMAGAZINEFRAME_H
#define PXNEWMAGAZINEFRAME_H


#import <Foundation/Foundation.h>


@interface PXNewMagazineFrame : NSObject

@property (nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (nonatomic) NSInteger height; // ivar: _height
@property (nonatomic) CGFloat maxAspectRatio; // ivar: _maxAspectRatio
@property (nonatomic) CGFloat minAspectRatio; // ivar: _minAspectRatio
@property (readonly, nonatomic) NSInteger numberOfTiles;
@property (nonatomic) NSInteger width; // ivar: _width


-(id)description;
-(id)initWithWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;


@end


#endif