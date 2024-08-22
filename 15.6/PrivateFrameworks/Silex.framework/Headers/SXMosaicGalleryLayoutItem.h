// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXMOSAICGALLERYLAYOUTITEM_H
#define SXMOSAICGALLERYLAYOUTITEM_H


#import <Foundation/Foundation.h>


@interface SXMosaicGalleryLayoutItem : NSObject

@property (readonly, nonatomic) CGSize dimensions; // ivar: _dimensions
@property (readonly, nonatomic) int tileType; // ivar: _tileType


-(CGFloat)aspectRatio;
-(id)description;
-(id)initWithDimensions:(struct CGSize )arg0 ;


@end


#endif