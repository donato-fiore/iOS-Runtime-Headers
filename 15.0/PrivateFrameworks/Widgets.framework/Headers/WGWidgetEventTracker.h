// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WGWIDGETEVENTTRACKER_H
#define WGWIDGETEVENTTRACKER_H

@class NSDateComponents, NSDate, NSMutableDictionary, PETDistributionEventTracker, PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface WGWidgetEventTracker : NSObject {
    NSDateComponents *_previousTodayViewAppearDateComponents;
    NSDate *_previousTodayViewAppearanceDate;
    NSMutableDictionary *_previousWidgetAppearanceDateByIdentifier;
    NSUInteger _location;
    PETDistributionEventTracker *_widgetLingerTracker;
    PETScalarEventTracker *_widgetShownTracker;
    PETScalarEventTracker *_widgetStatusTracker;
    PETDistributionEventTracker *_widgetListLingerTracker;
    PETScalarEventTracker *_widgetToggleContractTracker;
    PETScalarEventTracker *_widgetToggleExpandTracker;
    PETScalarEventTracker *_widgetListShownTracker;
    PETScalarEventTracker *_widgetToggleContract;
    PETScalarEventTracker *_widgetToggleExpand;
    BOOL _authenticated;
}




+(id)sharedInstance;
-(id)_authenticationProperty;
-(id)_locationProperty;
-(id)_modeProperty;
-(id)_statusProperty;
-(id)_widgetLingerTracker;
-(id)_widgetListLingerTracker;
-(id)_widgetProperty;
-(id)_widgetShownTracker;
-(id)_widgetStatusTracker;
-(id)_widgetToggleContractTracker;
-(id)init;
-(id)widgetListShownTracker;
-(id)widgetToggleExpandTracker;
-(void)_lockedStateDidChange;
-(void)_trackWidgetContractEventForWidget:(id)arg0 ;
-(void)_trackWidgetExpandEventForWidget:(id)arg0 ;
-(void)_trackWidgetLingerEventForWidget:(id)arg0 withLocation:(NSUInteger)arg1 authenticated:(BOOL)arg2 mode:(NSInteger)arg3 duration:(CGFloat)arg4 ;
-(void)_trackWidgetListLingerEventWithLocation:(NSUInteger)arg0 authenticated:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(void)_trackWidgetListShownEventWithLocation:(NSUInteger)arg0 authenticated:(BOOL)arg1 ;
-(void)_trackWidgetShownEventForWidget:(id)arg0 withLocation:(NSUInteger)arg1 authenticated:(BOOL)arg2 mode:(NSInteger)arg3 ;
-(void)_trackWidgetStatusEventForWidget:(id)arg0 withStatus:(BOOL)arg1 ;
-(void)dealloc;
-(void)widget:(id)arg0 didAppearInMode:(NSInteger)arg1 ;
-(void)widget:(id)arg0 didChangeUserSpecifiedDisplayMode:(NSInteger)arg1 ;
-(void)widget:(id)arg0 didDisappearInMode:(NSInteger)arg1 ;
-(void)widgetListDidAppearAtLocation:(NSUInteger)arg0 withEnabledWidgets:(id)arg1 disabledWidgets:(id)arg2 ;
-(void)widgetListDidDisappearAtLocation:(NSUInteger)arg0 ;
-(void)widgetViewDidAppearWithWidget:(id)arg0 ;
-(void)widgetViewDidDisappearWithWidget:(id)arg0 ;


@end


#endif