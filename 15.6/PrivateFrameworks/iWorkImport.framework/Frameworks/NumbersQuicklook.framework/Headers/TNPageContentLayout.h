// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNPAGECONTENTLAYOUT_H
#define TNPAGECONTENTLAYOUT_H

@class TSDLayout;


#import "TNPageLayoutContainer.h"

@interface TNPageContentLayout : TSDLayout

@property (readonly, weak) TNPageLayoutContainer *pageLayout; // ivar: _pageLayout
@property (readonly) NSUInteger pageNumber; // ivar: _pageNumber


-(Class)repClassOverride;
-(NSUInteger)pageCount;
-(id)computeLayoutGeometry;
-(id)initWithPageLayout:(id)arg0 ;
-(void)validate;


@end


#endif