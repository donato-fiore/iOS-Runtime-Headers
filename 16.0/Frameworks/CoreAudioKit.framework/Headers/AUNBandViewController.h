// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUNBANDVIEWCONTROLLER_H
#define AUNBANDVIEWCONTROLLER_H

@class NSMutableArray, UIView;


#import "AURightEdgeControlsBaseViewController.h"

@interface AUNBandViewController : AURightEdgeControlsBaseViewController {
    NSMutableArray *controls;
    NSUInteger activeControl;
    unsigned int numBands;
    UIView *hintView;
    BOOL noParamDisplayed;
}


@property *AudioUnitFrequencyResponseBin frequencyData;
@property (nonatomic) unsigned int typeParam; // ivar: _typeParam


-(BOOL)bandEnabledFor:(NSInteger)arg0 ;
-(BOOL)filterTypeHasBandwidth:(NSInteger)arg0 ;
-(BOOL)filterTypeHasGain:(NSInteger)arg0 ;
-(NSInteger)widthTypeFor:(unsigned int)arg0 ;
-(float)maxValueFor:(unsigned int)arg0 ;
-(float)minValueFor:(unsigned int)arg0 ;
-(float)valueFor:(unsigned int)arg0 ;
-(id)abbreviatedFilterTypeStrings;
-(id)add:(id)arg0 to:(id)arg1 ;
-(id)colorForControlAtIndex:(NSInteger)arg0 ;
-(id)controlAtIndex:(NSUInteger)arg0 ;
-(id)multiply:(id)arg0 multiplier:(CGFloat)arg1 ;
-(id)nameFor:(unsigned int)arg0 ;
-(id)shortNameFor:(unsigned int)arg0 ;
-(id)symbolFor:(unsigned int)arg0 ;
-(id)unitLabelFor:(unsigned int)arg0 ;
-(id)valueStringsFor:(unsigned int)arg0 ;
-(void)bandEnabledChanged:(id)arg0 ;
-(void)bandSelectionChanged:(id)arg0 ;
-(void)globalGainChanged:(id)arg0 ;
-(void)globalGainKnobReleased:(id)arg0 ;
-(void)globalGainKnobTouched:(id)arg0 ;
-(void)hintDismissed:(id)arg0 ;
-(void)prepareData;
-(void)priv_eventListener:(*void)arg0 event:(struct AudioUnitEvent *)arg1 value:(float)arg2 ;
-(void)registerParameters;
-(void)selectBand:(NSInteger)arg0 ;
-(void)typeControlChanged:(id)arg0 ;
-(void)typeControlChangedWithValue:(NSInteger)arg0 set:(BOOL)arg1 ;
-(void)updateVisibleControlsForType:(NSUInteger)arg0 newIndex:(NSInteger)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif