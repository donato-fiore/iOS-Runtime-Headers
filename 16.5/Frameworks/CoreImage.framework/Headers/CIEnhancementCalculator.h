// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIENHANCEMENTCALCULATOR_H
#define CIENHANCEMENTCALCULATOR_H



#import "CIEnhancementCalculation.h"

@interface CIEnhancementCalculator : CIEnhancementCalculation

@property BOOL curvesEnabled; // ivar: curvesEnabled
@property BOOL faceBalanceEnabled; // ivar: faceBalanceEnabled
@property BOOL shadowsEnabled; // ivar: shadowsEnabled
@property BOOL vibranceEnabled; // ivar: vibranceEnabled


-(id)histogramFromRows:(id)arg0 componentOffset:(unsigned int)arg1 ;
-(id)init;
-(id)setupFaceColorFromImage:(id)arg0 usingContext:(id)arg1 detectorOpts:(id)arg2 ;
-(void)analyzeFeatures:(id)arg0 usingContext:(id)arg1 baseImage:(id)arg2 ;
-(void)dealloc;
-(void)setupFaceColorFromImage:(id)arg0 usingContext:(id)arg1 features:(id)arg2 ;
-(void)setupHistogramsUsing:(id)arg0 redIndex:(int)arg1 greenIndex:(int)arg2 blueIndex:(int)arg3 ;


@end


#endif