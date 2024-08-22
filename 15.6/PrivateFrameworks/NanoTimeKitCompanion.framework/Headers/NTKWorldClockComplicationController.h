// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKWORLDCLOCKCOMPLICATIONCONTROLLER_H
#define NTKWORLDCLOCKCOMPLICATIONCONTROLLER_H

@class NSDate;
@protocol NTKTimeTravel, NTKWorldClockComplicationDisplay;


#import "NTKComplicationController.h"
#import "NTKWorldClockComplication.h"

@interface NTKWorldClockComplicationController : NTKComplicationController <NTKTimeTravel>

 {
    ? _displayFlags;
    NSDate *_timeTravelDate;
}


@property (readonly, nonatomic) NTKWorldClockComplication *complication;
@property (readonly, weak, nonatomic) NSObject<NTKWorldClockComplicationDisplay> *legacyDisplay;


+(BOOL)_acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)hasTapAction;
-(void)_activate;
-(void)_configureForLegacyDisplay:(id)arg0 ;
-(void)_deactivate;
-(void)_endTimeTravelAnimated:(BOOL)arg0 ;
-(void)_handleAbbreviationStoreChange:(id)arg0 ;
-(void)_handleLocaleChange;
-(void)_handleTimeZoneChange;
-(void)_startTimeTravelAnimated:(BOOL)arg0 ;
-(void)_updateDisplay;
-(void)performTapAction;
-(void)setDataMode:(NSInteger)arg0 forDisplayWrapper:(id)arg1 ;
-(void)setPauseDate:(id)arg0 ;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif