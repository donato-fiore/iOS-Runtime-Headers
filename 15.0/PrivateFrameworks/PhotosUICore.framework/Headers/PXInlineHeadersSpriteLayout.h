// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXINLINEHEADERSSPRITELAYOUT_H
#define PXINLINEHEADERSSPRITELAYOUT_H

@class NSDateFormatter, NSCalendar, NSIndexSet, NSString;
@protocol PXGItemsGeometry, PXGViewSource, PXZoomableInlineHeadersLayoutGeometrySource;


#import "PXGItemsLayout.h"
#import "PXZoomableInlineHeadersDataSource.h"
#import "PXZoomableInlineHeadersLayoutSpec.h"

@interface PXInlineHeadersSpriteLayout : PXGItemsLayout <PXGItemsGeometry, PXGViewSource>

 {
    ? _updateFlags;
    NSDateFormatter *_yearFormatter;
    NSDateFormatter *_monthFormatter;
    NSCalendar *_calendar;
    unsigned short _mediaVersion;
    BOOL _didHideSprites;
    NSIndexSet *_axSpriteIndexes;
}


@property (retain, nonatomic) PXZoomableInlineHeadersDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PXZoomableInlineHeadersLayoutGeometrySource> *geometrySource; // ivar: _geometrySource
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger level; // ivar: _level
@property (retain, nonatomic) PXZoomableInlineHeadersLayoutSpec *spec; // ivar: _spec
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;


-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)itemClosestToItem:(NSInteger)arg0 inDirection:(NSUInteger)arg1 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)initWithLevel:(NSUInteger)arg0 ;
-(id)itemsBetweenItem:(NSInteger)arg0 andItem:(NSInteger)arg1 ;
-(id)itemsGeometry;
-(id)itemsInRect:(struct CGRect )arg0 inLayout:(id)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(void)_bumpMediaVersion;
-(void)_currentLocaleChanged:(id)arg0 ;
-(void)_setupDateFormatters;
-(void)_updateSprites;
-(void)alphaDidChange;
-(void)invalidateAnchorItemFrames;
-(void)screenScaleDidChange;
-(void)update;
-(void)visibleRectDidChange;


@end


#endif