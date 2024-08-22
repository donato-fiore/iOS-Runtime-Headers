// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PWTWIDGETEVENTTRACKER_H
#define _PWTWIDGETEVENTTRACKER_H

@class PETScalarEventTracker, PETGoalConversionEventTracker, PETDistributionEventTracker, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _PWTWidgetEventTracker : NSObject {
    PETScalarEventTracker *_resizeTracker;
    PETGoalConversionEventTracker *_conversionTracker;
    PETScalarEventTracker *_updateTracker;
    PETDistributionEventTracker *_screenLingerTracker;
    PETScalarEventTracker *_foregroundingTracker;
    BOOL _hasReceivedActiveDisplayModeChangeNotificationOnce;
    BOOL _isCurrentlyVisible;
    BOOL _willBecomeVisible;
    BOOL _didBecomeVisibleWhileLocked;
    BOOL _widgetIsForeground;
    BOOL _widgetWasEverForeground;
    NSInteger _activeDisplayMode;
    CGFloat _lastAppearTime;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}


@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(id)initWithIdentifier:(id)arg0 ;
-(void)userEngagedWithWidget;
-(void)widgetActiveDisplayModeDidChange:(NSInteger)arg0 withMaximumSize:(struct CGSize )arg1 ;
-(void)widgetDidAppear;
-(void)widgetDidBecomeForeground:(BOOL)arg0 ;
-(void)widgetDidDisappear;
-(void)widgetPerformedUpdateWithResult:(NSUInteger)arg0 ;
-(void)widgetWillAppear;
-(void)widgetWillDisappear;


@end


#endif