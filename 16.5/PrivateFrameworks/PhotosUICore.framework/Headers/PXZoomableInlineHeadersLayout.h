// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXZOOMABLEINLINEHEADERSLAYOUT_H
#define PXZOOMABLEINLINEHEADERSLAYOUT_H

@class NSString;
@protocol PXSectionedDataSourceManagerObserver, PXZoomableInlineHeadersLayoutGeometrySource;


#import "PXGSplitLayout.h"
#import "PXInlineHeadersSpriteLayout.h"
#import "PXZoomableInlineHeadersDataSourceManager.h"
#import "PXZoomableInlineHeadersLayoutSpec.h"

@interface PXZoomableInlineHeadersLayout : PXGSplitLayout <PXSectionedDataSourceManagerObserver>

 {
    ? _updateFlags;
    PXInlineHeadersSpriteLayout *_yearsLayout;
    PXInlineHeadersSpriteLayout *_monthsLayout;
}


@property (readonly, nonatomic) PXZoomableInlineHeadersDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PXZoomableInlineHeadersLayoutGeometrySource> *geometrySource; // ivar: _geometrySource
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat monthsAlpha;
@property (retain, nonatomic) PXZoomableInlineHeadersLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (nonatomic) CGFloat yearsAlpha;


-(id)initWithDataSourceManager:(id)arg0 ;
-(void)_updateSublayouts;
-(void)invalidateAnchorItemFrames;
-(void)invalidateGeometry;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)update;


@end


#endif