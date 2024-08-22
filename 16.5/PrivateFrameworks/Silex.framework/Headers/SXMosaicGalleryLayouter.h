// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXMOSAICGALLERYLAYOUTER_H
#define SXMOSAICGALLERYLAYOUTER_H

@class NSMutableArray, NSArray;
@protocol SXMosaicGalleryLayouterDataSource;

#import <Foundation/Foundation.h>

#import "SXMosaicGalleryColumnLayout.h"

@interface SXMosaicGalleryLayouter : NSObject

@property (readonly, nonatomic) NSMutableArray *clusters; // ivar: _clusters
@property (readonly, nonatomic) SXMosaicGalleryColumnLayout *columnLayout; // ivar: _columnLayout
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (weak, nonatomic) NSObject<SXMosaicGalleryLayouterDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSMutableArray *frames; // ivar: _frames
@property (readonly, nonatomic) NSMutableArray *items; // ivar: _items
@property (readonly, nonatomic) NSMutableArray *layouts; // ivar: _layouts
@property (readonly, nonatomic) NSUInteger numberOfItems; // ivar: _numberOfItems
@property (nonatomic) BOOL reverseNextHorizontalLivingRoomLayout; // ivar: _reverseNextHorizontalLivingRoomLayout
@property (readonly, nonatomic) NSArray *supportedTileTypeClusters; // ivar: _supportedTileTypeClusters
@property (readonly, nonatomic) NSMutableArray *views; // ivar: _views
@property (nonatomic) CGFloat width; // ivar: _width


-(id)clusterForItemsInRange:(struct _NSRange )arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)itemAtIndex:(NSUInteger)arg0 ;
-(id)itemsForRange:(struct _NSRange )arg0 ;
-(id)layoutForCluster:(id)arg0 previousLayouts:(id)arg1 ;
-(id)viewForItem:(id)arg0 ;
-(id)viewForItemAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForItemAtIndex:(NSUInteger)arg0 ;
-(void)calculateLayoutForWidth:(CGFloat)arg0 ;
-(void)layoutGalleryOnView:(id)arg0 ;
-(void)reset;
-(void)resetLayout;


@end


#endif