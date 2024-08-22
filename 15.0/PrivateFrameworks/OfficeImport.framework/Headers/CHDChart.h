// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDCHART_H
#define CHDCHART_H

@class NSMutableArray, NSString;
@protocol OADDrawableContainer;


#import "OADGraphic.h"
#import "EDSheet.h"
#import "CHDPlotArea.h"
#import "CHDView3D.h"
#import "CHDTitle.h"
#import "CHDLegend.h"
#import "EDWorkbook.h"
#import "OADGraphicProperties.h"
#import "CHDDefaultTextProperties.h"
#import "OADThemeOverrides.h"

@interface CHDChart : OADGraphic <OADDrawableContainer>

 {
    EDSheet *mSheet;
    int mStyleId;
    BOOL mAutoTitleDeleted;
    BOOL mPlotVisibleCellsOnly;
    BOOL mMSGraph;
    BOOL mHasSharedXValues;
    BOOL mDirectionChanged;
    BOOL mHasVisibleSeriesNames;
    int mDisplayBlankCellsAs;
    CHDPlotArea *mPlotArea;
    CHDView3D *mView3D;
    CHDTitle *mTitle;
    CHDLegend *mLegend;
    EDWorkbook *mExternalData;
    OADGraphicProperties *mChartAreaGraphicProperties;
    OADGraphicProperties *mBackWallGraphicProperties;
    OADGraphicProperties *mSideWallGraphicProperties;
    OADGraphicProperties *mFloorGraphicProperties;
    CHDDefaultTextProperties *mDefaultTextProperties;
    int mChartDirection;
    CGRect mLogicalBounds;
    NSMutableArray *mDrawables;
    OADThemeOverrides *mThemeOverrides;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)binaryEffects:(BOOL)arg0 ;
-(BOOL)hasSharedXValues;
-(BOOL)hasVisibleSeriesNames;
-(BOOL)is3D;
-(BOOL)isArea;
-(BOOL)isAutoTitleDeleted;
-(BOOL)isBinary;
-(BOOL)isDirectionChanged;
-(BOOL)isMSGraph;
-(BOOL)isPie;
-(BOOL)isPlotVisibleCellsOnly;
-(BOOL)isScatterOrBubble;
-(BOOL)supportsMarkers;
-(NSUInteger)categoryCount;
-(NSUInteger)childCount;
-(NSUInteger)defaultFontIndex;
-(NSUInteger)seriesCount;
-(id)backWallGraphicProperties;
-(id)chartAreaGraphicProperties;
-(id)childAtIndex:(NSUInteger)arg0 ;
-(id)children;
-(id)defaultContentFormat;
-(id)defaultDataLabelFont;
-(id)defaultFontWithResources:(id)arg0 ;
-(id)defaultSeriesTitleFont;
-(id)defaultTextFont;
-(id)defaultTextProperties;
-(id)defaultThemeFont;
-(id)externalData;
-(id)floorGraphicProperties;
-(id)init;
-(id)legend;
-(id)mainType;
-(id)plotArea;
-(id)processors;
-(id)sheet;
-(id)sideWallGraphicProperties;
-(id)styleMatrix;
-(id)themeOverrides;
-(id)title;
-(id)view3D;
-(id)workbook;
-(int)defaultLabelPosition;
-(int)direction;
-(int)displayBlankAs;
-(int)styleId;
-(struct CGRect )logicalBounds;
-(void)addChild:(id)arg0 ;
-(void)addChildren:(id)arg0 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg0 ;
-(void)removeChild:(id)arg0 ;
-(void)replaceChild:(id)arg0 with:(id)arg1 ;
-(void)setAutoTitleDeleted:(BOOL)arg0 ;
-(void)setBackWallGraphicProperties:(id)arg0 ;
-(void)setChartAreaGraphicProperties:(id)arg0 ;
-(void)setDefaultTextProperties:(id)arg0 ;
-(void)setDirection:(int)arg0 ;
-(void)setDirectionChanged:(BOOL)arg0 ;
-(void)setDisplayBlankAs:(int)arg0 ;
-(void)setExternalData:(id)arg0 ;
-(void)setFloorGraphicProperties:(id)arg0 ;
-(void)setHasSharedXValues:(BOOL)arg0 ;
-(void)setLegend:(id)arg0 ;
-(void)setLogicalBounds:(struct CGRect )arg0 ;
-(void)setMSGraph:(BOOL)arg0 ;
-(void)setParentTextListStyle:(id)arg0 ;
-(void)setPlotArea:(id)arg0 ;
-(void)setPlotVisibleCellsOnly:(BOOL)arg0 ;
-(void)setSheet:(id)arg0 ;
-(void)setSideWallGraphicProperties:(id)arg0 ;
-(void)setStyleId:(int)arg0 ;
-(void)setThemeOverrides:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setView3D:(id)arg0 ;
-(void)setVisibleSeriesNames:(BOOL)arg0 ;


@end


#endif