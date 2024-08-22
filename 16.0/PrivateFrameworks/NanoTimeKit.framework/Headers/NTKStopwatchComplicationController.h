// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKSTOPWATCHCOMPLICATIONCONTROLLER_H
#define NTKSTOPWATCHCOMPLICATIONCONTROLLER_H

@class NSDate;
@protocol CLKUITimeTravel, NTKStopwatchComplicationDisplay;


#import "NTKComplicationController.h"

@interface NTKStopwatchComplicationController : NTKComplicationController <CLKUITimeTravel>



@property (readonly, weak, nonatomic) NSObject<NTKStopwatchComplicationDisplay> *legacyDisplay;
@property (retain, nonatomic) NSDate *timeTravelDate; // ivar: _timeTravelDate


+(BOOL)_acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)hasTapAction;
-(id)complicationApplicationIdentifier;
-(void)_activate;
-(void)_configureForLegacyDisplay:(id)arg0 ;
-(void)_deactivate;
-(void)_handleStopwatchChange;
-(void)_updateDisplay;
-(void)performTapAction;
-(void)setDataMode:(NSInteger)arg0 forDisplayWrapper:(id)arg1 ;


@end


#endif