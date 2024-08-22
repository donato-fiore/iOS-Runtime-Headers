// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUSERINTERFACEELEMENTEVENTTRACKER_H
#define PXUSERINTERFACEELEMENTEVENTTRACKER_H

@class NSMutableDictionary;
@protocol PXUserInterfaceElementEventTracker;


#import "PXObservable.h"
#import "PXUpdater.h"

@interface PXUserInterfaceElementEventTracker : PXObservable <PXUserInterfaceElementEventTracker>



@property (readonly, nonatomic) CGFloat currentTimestamp;
@property (nonatomic) BOOL hasAppeared; // ivar: _hasAppeared
@property (nonatomic) BOOL isAppActive; // ivar: _isAppActive
@property (readonly, nonatomic) BOOL isVisible; // ivar: _isVisible
@property (copy, nonatomic) NSMutableDictionary *payload; // ivar: _payload
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(CGFloat)timeIntervalBetweenTimestamp:(CGFloat)arg0 andTimestamp:(CGFloat)arg1 ;
-(CGFloat)timeIntervalSinceTimestamp:(CGFloat)arg0 ;
-(id)finalPayloadWithPayload:(id)arg0 ;
-(id)init;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_invalidateIsVisible;
-(void)_setNeedsUpdate;
-(void)_updateIsVisible;
-(void)didAppear;
-(void)didDisappear;
-(void)didPerformChanges;


@end


#endif