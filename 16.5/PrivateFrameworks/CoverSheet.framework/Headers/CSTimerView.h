// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSTIMERVIEW_H
#define CSTIMERVIEW_H

@class SBFLockScreenDateSubtitleView, NSDate, NSString;
@protocol PTSettingsKeyObserver;



@interface CSTimerView : SBFLockScreenDateSubtitleView <PTSettingsKeyObserver>

 {
    NSDate *_endDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *timerText;


-(CGFloat)interItemSpacing;
-(id)_newTimerDialForSettings:(id)arg0 withFont:(id)arg1 ;
-(id)_timerFont;
-(id)accessoryView;
-(id)init;
-(void)_updateLegibilityStrength;
-(void)dealloc;
-(void)setEndDate:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setLegibilitySettings:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateTimerLabel;


@end


#endif