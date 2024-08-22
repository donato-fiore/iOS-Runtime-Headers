// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKOLYMPUSCONTROLLER_H
#define NTKOLYMPUSCONTROLLER_H

@class CLKClockTimerToken, NSDate;

#import <Foundation/Foundation.h>

#import "NTKFaceView.h"
#import "NTKOlympusTimeView.h"

@interface NTKOlympusController : NSObject

@property (retain, nonatomic) CLKClockTimerToken *clockTimerToken; // ivar: _clockTimerToken
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (weak, nonatomic) NTKFaceView *faceView; // ivar: _faceView
@property (nonatomic) NSUInteger hour; // ivar: _hour
@property (nonatomic) NSUInteger minute; // ivar: _minute
@property (weak, nonatomic) NTKOlympusTimeView *olympusView; // ivar: _olympusView
@property (nonatomic) NSUInteger second; // ivar: _second


-(BOOL)_hasWindrunnerWedge;
-(id)initWithFaceView:(id)arg0 olympusView:(id)arg1 ;
-(void)_animateClockHandsFromDate:(id)arg0 toDate:(id)arg1 duration:(CGFloat)arg2 ;
-(void)_applyWindrunnerMask;
-(void)_handleSignificantTimeChanged;
-(void)_updateHourComponentsWithDate:(id)arg0 ;
-(void)_updateTimeComponentsWithDate:(id)arg0 hour:(NSInteger)arg1 minute:(NSInteger)arg2 second:(NSInteger)arg3 ;
-(void)applyDataMode:(NSInteger)arg0 ;
-(void)dealloc;
-(void)setOverrideDate:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif