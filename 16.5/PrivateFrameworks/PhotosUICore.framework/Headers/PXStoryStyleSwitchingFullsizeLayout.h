// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYSTYLESWITCHINGFULLSIZELAYOUT_H
#define PXSTORYSTYLESWITCHINGFULLSIZELAYOUT_H

@class NSMutableIndexSet, NSString, NSArray, NSAttributedString;
@protocol PXChangeObserver, PXGSublayoutProvider, PXGSublayoutFaultingDelegate, PXGStringSource, PXGViewSource, PXGAXResponder;


#import "PXGAbsoluteCompositeLayout.h"
#import "PXStoryStyleSelectionDataSource.h"
#import "PXStoryFullsizeLayout.h"
#import "PXCArrayStore.h"
#import "PXStoryModel.h"
#import "PXGPageControlConfiguration.h"
#import "PXStoryChromeButtonConfiguration.h"

@interface PXStoryStyleSwitchingFullsizeLayout : PXGAbsoluteCompositeLayout <PXChangeObserver, PXGSublayoutProvider, PXGSublayoutFaultingDelegate, PXGStringSource, PXGViewSource, PXGAXResponder>

 {
    ? _updateFlags;
    unsigned int _styleSwitcherTitleSpriteIndex;
    unsigned int _pageControlSpriteIndex;
    unsigned int _restartButtonSpriteIndex;
    unsigned int _spriteCount;
    NSMutableIndexSet *_axSpriteIndexes;
}


@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder; // ivar: axNextResponder
@property (retain, nonatomic) PXStoryStyleSelectionDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *displayedStyleInfos; // ivar: _displayedStyleInfos
@property (nonatomic) _NSRange displayedStyleRange; // ivar: _displayedStyleRange
@property (readonly, nonatomic) PXStoryFullsizeLayout *dominantFullsizePlayerLayout;
@property (readonly, nonatomic) PXCArrayStore *fullsizeFrameRectsStore; // ivar: _fullsizeFrameRectsStore
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (copy, nonatomic) PXGPageControlConfiguration *pageControlConfiguration; // ivar: _pageControlConfiguration
@property (nonatomic) NSInteger pageControlVersion; // ivar: _pageControlVersion
@property (nonatomic) CGFloat relativeZPositionAboveLegibilityGradients; // ivar: _relativeZPositionAboveLegibilityGradients
@property (copy, nonatomic) PXStoryChromeButtonConfiguration *restartButtonConfiguration; // ivar: _restartButtonConfiguration
@property (nonatomic) NSInteger restartButtonVersion; // ivar: _restartButtonVersion
@property (copy, nonatomic) NSAttributedString *styleSwitcherTitleString; // ivar: _styleSwitcherTitleString
@property (nonatomic) NSInteger styleSwitcherTitleVersion; // ivar: _styleSwitcherTitleVersion
@property (readonly) Class superclass;


-(BOOL)_handleSwitchStyle:(id)arg0 inGroup:(id)arg1 ;
-(BOOL)_isFakeAXSpriteIndex:(NSUInteger)arg0 ;
-(BOOL)allowsSublayoutUpdateCycleAssertions;
-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(BOOL)layout:(id)arg0 shouldPreventFaultOutOfSublayout:(id)arg1 ;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSUInteger)_axSwitcherFractionDenominator;
-(NSUInteger)_axSwitcherFractionNumerator;
-(id)_axAssetsVisible;
-(id)_axSongArtistName;
-(id)_axSongTitle;
-(id)_axStyleTitle;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axContainingScrollViewForAXGroup:(id)arg0 ;
-(id)axContentInfoAtSpriteIndex:(unsigned int)arg0 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)axVisibleSpriteIndexes;
-(id)init;
-(id)initWithModel:(id)arg0 ;
-(id)layout:(id)arg0 createSublayoutAtIndex:(NSInteger)arg1 ;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct CGRect )axFrame;
-(struct CGSize )layout:(id)arg0 estimatedContentSizeForSublayoutAtIndex:(NSInteger)arg1 referenceSize:(struct CGSize )arg2 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(void)_configureTimelineLayout:(id)arg0 maskLayout:(id)arg1 forIndex:(NSInteger)arg2 ;
-(void)_handlePageControl:(id)arg0 ;
-(void)_handleRestartButton:(id)arg0 ;
-(void)_invalidateAXSpriteIndexes;
-(void)_invalidateContent;
-(void)_invalidateDisplayedStyleRange;
-(void)_invalidateDisplayedStyles;
-(void)_invalidatePageControl;
-(void)_invalidateRestartButton;
-(void)_invalidateTitleString;
-(void)_updateAXSpriteIndexes;
-(void)_updateContent;
-(void)_updateDisplayedStyleRange;
-(void)_updateDisplayedStyles;
-(void)_updatePageControl;
-(void)_updateRestartButton;
-(void)_updateTitleString;
-(void)alphaDidChange;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)didUpdate;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)update;
-(void)willUpdate;


@end


#endif