// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TNPAGELAYOUTABSTRACT_H
#define TNPAGELAYOUTABSTRACT_H

@class TSWPPageLayout;


#import "TNPageController.h"

@interface TNPageLayoutAbstract : TSWPPageLayout

@property (readonly) CGRect pageBounds;
@property (weak) TNPageController *pageController; // ivar: _pageController
@property TSUCellCoord pageCoordinate; // ivar: _pageCoordinate


-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(id)description;
-(id)initWithPageController:(id)arg0 pageCoordinate:(struct TSUCellCoord )arg1 ;


@end


#endif