// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXGESTURERECORDERVIEWCONTROLLER_H
#define AXGESTURERECORDERVIEWCONTROLLER_H

@class UIViewController, NSString, NSMutableDictionary, NSMutableArray;
@protocol AXGestureRecorderViewDelegate, AXGestureRecorderFingerPathCollectionDelegate, AXGestureRecorderViewControllerDelegate;


#import "AXGestureRecorderFingerPathCollection.h"
#import "AXGestureRecorderView.h"
#import "AXGestureRecorderStyleProvider.h"

@interface AXGestureRecorderViewController : UIViewController <AXGestureRecorderViewDelegate, AXGestureRecorderFingerPathCollectionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXGestureRecorderViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXGestureRecorderFingerPathCollection *dynamicFingerPathCollection; // ivar: _dynamicFingerPathCollection
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (retain, nonatomic) AXGestureRecorderFingerPathCollection *fingerPathCollection; // ivar: _fingerPathCollection
@property (readonly, nonatomic) AXGestureRecorderView *gestureRecorderView;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInReplayMode) BOOL inReplayMode; // ivar: _inReplayMode
@property (retain, nonatomic) NSMutableDictionary *instantReplayPartialFingerPaths; // ivar: _instantReplayPartialFingerPaths
@property (retain, nonatomic) NSMutableDictionary *instantReplayTimestampIndexes; // ivar: _instantReplayTimestampIndexes
@property (nonatomic) NSInteger recorderType; // ivar: _recorderType
@property (retain, nonatomic) NSMutableArray *replayDynamicFingerPaths; // ivar: _replayDynamicFingerPaths
@property (nonatomic) NSUInteger replayTimestampIndex; // ivar: _replayTimestampIndex
@property (nonatomic) NSUInteger replayTimestampsCount; // ivar: _replayTimestampsCount
@property (nonatomic) BOOL shouldPreventFurtherRecording; // ivar: _shouldPreventFurtherRecording
@property (retain, nonatomic) AXGestureRecorderStyleProvider *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (nonatomic, getter=isTrackingTouches) BOOL trackingTouches; // ivar: _trackingTouches
@property (nonatomic) CGFloat trackingTouchesDidStartTimeInterval; // ivar: _trackingTouchesDidStartTimeInterval


-(BOOL)canToggleChromeForGestureRecorderView:(id)arg0 ;
-(BOOL)isChromeVisibleForGestureRecorderView:(id)arg0 ;
-(CGFloat)_maximumDurationOfRecordedGesture;
-(NSUInteger)numberOfDynamicFingerPathsInGestureRecorderView:(id)arg0 ;
-(id)gestureRecorderView:(id)arg0 dynamicFingerPathAtIndex:(NSUInteger)arg1 ;
-(id)recordedGesturePropertyListRepresentationWithName:(id)arg0 ;
-(id)recordedReplayableGestureRepresentation;
-(void)_advanceInstantReplayForStaticFingerAtIndex:(id)arg0 ;
-(void)_advanceReplay;
-(void)_clearWeakReferencesWithOutlets;
-(void)_didFinishReplayingRecordedGesture;
-(void)_didStartRecordingAtomicFingerPathAtPoint:(struct CGPoint )arg0 ;
-(void)_didStopRecordingAtomicFingerPath;
-(void)_endInstantReplay;
-(void)_endInstantReplayForStaticFingerAtIndex:(NSUInteger)arg0 ;
-(void)_exitReplayMode;
-(void)_freezeAllDynamicFingerPaths;
-(void)_releaseOutlets;
-(void)_startInstantReplayForStaticFingerAtIndex:(NSUInteger)arg0 ;
-(void)_updateDynamicFingerPathsWithTouches:(id)arg0 touchesDidEnd:(BOOL)arg1 ;
-(void)dealloc;
-(void)deleteAllFingerPaths;
-(void)freezeAllDynamicFingerPaths;
-(void)gestureRecorderFingerPathCollection:(id)arg0 didInsertFingerPathAtIndex:(NSUInteger)arg1 ;
-(void)gestureRecorderFingerPathCollection:(id)arg0 didUpdateFingerPathAtIndex:(NSUInteger)arg1 ;
-(void)gestureRecorderView:(id)arg0 setChromeVisible:(BOOL)arg1 ;
-(void)hideStaticView;
-(void)loadView;
-(void)preventFurtherRecording;
-(void)reloadAllFingerPaths;
-(void)replayRecordedGesture;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif