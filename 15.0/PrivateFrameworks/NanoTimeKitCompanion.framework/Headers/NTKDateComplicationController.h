// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKDATECOMPLICATIONCONTROLLER_H
#define NTKDATECOMPLICATIONCONTROLLER_H

@class NSDate;
@protocol NTKTimeTravel, NTKDateComplicationDisplay;


#import "NTKComplicationController.h"
#import "NTKDateComplication.h"

@interface NTKDateComplicationController : NTKComplicationController <NTKTimeTravel>

 {
    NSUInteger _displayDateStyle;
    NSDate *_timeTravelDate;
}


@property (readonly, nonatomic) NTKDateComplication *complication;
@property (readonly, weak, nonatomic) NSObject<NTKDateComplicationDisplay> *legacyDisplay;


+(BOOL)_acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_textForDate:(id)arg0 dateStyle:(NSUInteger)arg1 ;
+(id)textForDateStyle:(NSUInteger)arg0 ;
-(BOOL)hasTapAction;
-(void)_activate;
-(void)_configureForLegacyDisplay:(id)arg0 ;
-(void)_deactivate;
-(void)_handleTimeChangeNotification;
-(void)_setTextInDisplayIfNeededWithDate:(id)arg0 ;
-(void)_updateDisplay;
-(void)performTapAction;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif