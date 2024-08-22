// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHXREADSTATE_H
#define CHXREADSTATE_H

@protocol CHAutoStyling;

#import <Foundation/Foundation.h>

#import "EXOfficeArtState.h"
#import "CHDChart.h"
#import "EDResources.h"
#import "OCPPackagePart.h"
#import "CHDChartType.h"
#import "CHDSeries.h"
#import "OADParagraphProperties.h"

@interface CHXReadState : NSObject {
    EXOfficeArtState *mDrawingState;
    CHDChart *mChart;
    EDResources *mResources;
    OCPPackagePart *mChartPart;
    CHDChartType *mCurrentChartType;
    CHDSeries *mCurrentSeries;
    OADParagraphProperties *mDefaultTextProperties;
    BOOL mDefaultTextPropertiesHaveExplicitFontSize;
    id<CHAutoStyling> *mAutoStyling;
}


@property (nonatomic) BOOL ignoreFormulas; // ivar: mIgnoreFormulas


-(id)autoStyling;
-(id)chart;
-(id)chartPart;
-(id)currentChartType;
-(id)currentSeries;
-(id)defaultTextProperties;
-(id)drawingState;
-(id)exState;
-(id)initWithDrawingState:(id)arg0 ;
-(id)resources;
-(void)popDefaultTextProperties;
-(void)popTitleTextProperties;
-(void)pushDefaultTextProperties:(id)arg0 ;
-(void)pushTitleTextProperties:(BOOL)arg0 ;
-(void)setChart:(id)arg0 ;
-(void)setChartPart:(id)arg0 ;
-(void)setCurrentChartType:(id)arg0 ;
-(void)setCurrentSeries:(id)arg0 ;
-(void)setDefaultTextProperties:(id)arg0 ;
-(void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)arg0 ;
-(void)setResources:(id)arg0 ;


@end


#endif