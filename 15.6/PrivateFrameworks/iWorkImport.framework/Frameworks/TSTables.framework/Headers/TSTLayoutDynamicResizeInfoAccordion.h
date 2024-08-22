// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTLAYOUTDYNAMICRESIZEINFOACCORDION_H
#define TSTLAYOUTDYNAMICRESIZEINFOACCORDION_H



#import "TSTLayoutDynamicResizeInfo.h"

@interface TSTLayoutDynamicResizeInfoAccordion : TSTLayoutDynamicResizeInfo

@property (readonly, nonatomic) CGFloat heightFactor; // ivar: _heightFactor
@property (readonly, nonatomic) CGFloat widthFactor; // ivar: _widthFactor


-(CGFloat)applyResizeHeightFactor:(CGFloat)arg0 ;
-(CGFloat)applyResizeWidthFactor:(CGFloat)arg0 ;
-(CGFloat)p_applyAccordionResizeFactor:(CGFloat)arg0 region:(id)arg1 direction:(NSInteger)arg2 totalOfCaptured:(CGFloat)arg3 count:(unsigned int)arg4 capturedArray:(*void)arg5 currentArray:(*void)arg6 minimumArray:(*void)arg7 ;
-(id)initWithDynamicResizeInfo:(id)arg0 ;
-(id)initWithLayoutEngine:(id)arg0 columnRegion:(id)arg1 rowRegion:(id)arg2 ;
-(void)captureNewMinimumRowHeights:(id)arg0 ;


@end


#endif