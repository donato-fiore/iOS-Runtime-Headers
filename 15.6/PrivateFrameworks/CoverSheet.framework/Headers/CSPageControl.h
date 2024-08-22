// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSPAGECONTROL_H
#define CSPAGECONTROL_H

@class UIPageControl, _UILegibilitySettings;



@interface CSPageControl : UIPageControl {
    _UILegibilitySettings *_sbLegibilitySettings;
}


@property (nonatomic) NSUInteger cameraPageIndex; // ivar: _cameraPageIndex


+(struct CGRect )suggestedFrameForPageBounds:(struct CGRect )arg0 ;
+(struct CGRect )suggestedFrameForPageBounds:(struct CGRect )arg0 desiredSize:(struct CGSize )arg1 ;
+(struct CGSize )defaultSize;
-(id)_cameraIndicator;
-(id)_currentPageIndicatorColor;
-(id)_pageIndicatorColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeForNumberOfPages:(NSInteger)arg0 ;
-(void)_rebuildIndicators;
-(void)_updateForLegibility;
-(void)setLegibilitySettings:(id)arg0 ;


@end


#endif