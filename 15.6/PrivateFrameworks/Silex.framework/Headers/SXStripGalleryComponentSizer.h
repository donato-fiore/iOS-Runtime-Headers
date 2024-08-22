// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXSTRIPGALLERYCOMPONENTSIZER_H
#define SXSTRIPGALLERYCOMPONENTSIZER_H



#import "SXComponentSizer.h"

@interface SXStripGalleryComponentSizer : SXComponentSizer



-(CGFloat)calculateHeightForWidth:(CGFloat)arg0 layoutContext:(id)arg1 ;
-(CGFloat)contentWidthForColumnLayout:(id)arg0 ;
-(CGFloat)rightContentInsetForColumnLayout:(id)arg0 ;
-(CGFloat)xOffsetForColumnLayout:(id)arg0 ;
-(NSUInteger)shouldIgnoreMarginsForColumnLayout:(id)arg0 ;
-(NSUInteger)shouldIgnoreViewportPaddingForColumnLayout:(id)arg0 ;
-(id)imageResources;
-(struct _NSRange )overrideColumnLayoutForColumnRange:(struct _NSRange )arg0 inColumnLayout:(id)arg1 ;


@end


#endif