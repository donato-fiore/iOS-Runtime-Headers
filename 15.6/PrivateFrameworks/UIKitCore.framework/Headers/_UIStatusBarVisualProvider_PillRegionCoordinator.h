// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARVISUALPROVIDER_PILLREGIONCOORDINATOR_H
#define _UISTATUSBARVISUALPROVIDER_PILLREGIONCOORDINATOR_H

@class NSTimer;
@protocol _UIStatusBarPillRegionVisualProvider;

#import <Foundation/Foundation.h>

#import "_UIStatusBarDisplayItemPlacement.h"
#import "_UIStatusBarRegion.h"

@interface _UIStatusBarVisualProvider_PillRegionCoordinator : NSObject {
    BOOL _visualProviderImplementsBackgroundActivityPillAnimation;
}


@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *backgroundActivityDetailPlacement; // ivar: _backgroundActivityDetailPlacement
@property (retain, nonatomic) NSTimer *backgroundActivityDetailTimer; // ivar: _backgroundActivityDetailTimer
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *pillIconPlacement; // ivar: _pillIconPlacement
@property (retain, nonatomic) _UIStatusBarRegion *pillRegion; // ivar: _pillRegion
@property (weak, nonatomic) NSObject<_UIStatusBarPillRegionVisualProvider> *visualProvider; // ivar: _visualProvider


-(BOOL)handledUpdateOfActionable:(id)arg0 highlighted:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(id)animationForBackgroundActivityIcon;
-(id)animationForBackgroundActivityPill;
-(id)animationForBackgroundActivityPillWithDuration:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(void)_hideActivityDetailAndUpdate:(BOOL)arg0 ;
-(void)_updateBackgroundActivityWithEntry:(id)arg0 timeEntry:(id)arg1 needsUpdate:(BOOL)arg2 ;
-(void)updateDataForBackgroundActivity:(id)arg0 ;
-(void)updatePill;
-(void)updateRegion:(id)arg0 highlighted:(BOOL)arg1 initialPress:(BOOL)arg2 cornerRadius:(CGFloat)arg3 ;


@end


#endif