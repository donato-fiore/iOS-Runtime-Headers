// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXMOSAICGALLERYCOMPONENTSIZER_H
#define SXMOSAICGALLERYCOMPONENTSIZER_H

@class NSString;
@protocol SXMosaicGalleryLayouterDataSource;


#import "SXComponentSizer.h"
#import "SXMosaicGalleryLayouter.h"

@interface SXMosaicGalleryComponentSizer : SXComponentSizer <SXMosaicGalleryLayouterDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SXMosaicGalleryLayouter *layouter; // ivar: _layouter
@property (readonly) Class superclass;


-(BOOL)galleryLayouter:(id)arg0 viewIsCurrentlyFullscreenForItemAtIndex:(NSUInteger)arg1 ;
-(CGFloat)calculateHeightForWidth:(CGFloat)arg0 layoutContext:(id)arg1 ;
-(NSUInteger)numberOfItemsForGalleryLayouter:(id)arg0 ;
-(id)documentColumnLayoutForGalleryLayouter:(id)arg0 ;
-(id)galleryLayouter:(id)arg0 viewForItemAtIndex:(NSUInteger)arg1 ;
-(struct CGSize )galleryLayouter:(id)arg0 dimensionsForItemAtIndex:(NSUInteger)arg1 ;


@end


#endif