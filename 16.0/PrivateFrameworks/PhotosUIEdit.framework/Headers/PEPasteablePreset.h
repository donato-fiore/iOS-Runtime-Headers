// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PEPASTEABLEPRESET_H
#define PEPASTEABLEPRESET_H

@protocol PEAdjustmentPresetAutoDelegate;


#import "PEAdjustmentPreset.h"

@interface PEPasteablePreset : PEAdjustmentPreset

@property (weak, nonatomic) NSObject<PEAdjustmentPresetAutoDelegate> *autoDelegate; // ivar: _autoDelegate


+(BOOL)hasValidAdjustmentsInCompositionController:(id)arg0 ;
+(void)_filterValidAdjustmentsInCompositionController:(id)arg0 ;
+(void)sanitizeCompositionController:(id)arg0 ;
-(BOOL)needsGeometryAdjustments;
-(NSInteger)actionType;
-(void)_applyAutoEnhance:(id)arg0 completion:(id)arg1 ;
-(void)_runAutoCalculatorForCompositionController:(id)arg0 ;
-(void)applyToCompositionController:(id)arg0 invalidAdjustmentKeys:(id)arg1 completion:(id)arg2 ;


@end


#endif