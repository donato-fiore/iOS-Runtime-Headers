// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMOSAICLAYOUTGEOMETRY_H
#define HUMOSAICLAYOUTGEOMETRY_H


#import <Foundation/Foundation.h>


@interface HUMosaicLayoutGeometry : NSObject

@property (nonatomic) CGFloat cellSize; // ivar: _cellSize
@property (nonatomic) CGFloat cellSpacing; // ivar: _cellSpacing
@property (nonatomic) HUGridSize gridSize; // ivar: _gridSize
@property (nonatomic) BOOL isPortrait; // ivar: _isPortrait


-(id)description;


@end


#endif