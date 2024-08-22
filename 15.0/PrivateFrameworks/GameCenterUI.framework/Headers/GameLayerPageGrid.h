// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GAMELAYERPAGEGRID_H
#define GAMELAYERPAGEGRID_H


#import <Foundation/Foundation.h>


@interface GameLayerPageGrid : NSObject {
    ? rowHeight;
    ? representingWidth;
    ? columnSizeCategory;
    ? contentSizeCategory;
    ? horizontalSizeClass;
}


@property (nonatomic, readonly) UIEdgeInsets centeringInsets; // ivar: centeringInsets
@property (nonatomic, readonly) NSInteger columnCount; // ivar: columnCount
@property (nonatomic, readonly) CGFloat columnWidth; // ivar: columnWidth
@property (nonatomic, readonly) CGFloat interColumnSpacing; // ivar: interColumnSpacing
@property (nonatomic, readonly) UIEdgeInsets minimumInsets; // ivar: minimumInsets


-(id)init;
-(id)initWithContainerSize:(struct CGSize )arg0 traitCollection:(id)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 traitCollection:(id)arg1 ;
-(id)initWithWidth:(CGFloat)arg0 columnSizeCategory:(NSInteger)arg1 maxColumns:(id)arg2 ;


@end


#endif