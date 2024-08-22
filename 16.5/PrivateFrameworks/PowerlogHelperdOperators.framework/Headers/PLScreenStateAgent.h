// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSCREENSTATEAGENT_H
#define PLSCREENSTATEAGENT_H

@class PLAgent, FBSDisplayLayoutMonitor, NSString, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition, FBSDisplayLayout, PLXPCResponderOperatorComposition;
@protocol FBSDisplayLayoutObserver;



@interface PLScreenStateAgent : PLAgent <FBSDisplayLayoutObserver>



@property (retain) FBSDisplayLayoutMonitor *airPlayDisplayMonitor; // ivar: _airPlayDisplayMonitor
@property (retain) FBSDisplayLayoutMonitor *carPlayDisplayMonitor; // ivar: _carPlayDisplayMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PLEntryNotificationOperatorComposition *displayCallback; // ivar: _displayCallback
@property int displayState; // ivar: _displayState
@property (readonly) NSUInteger hash;
@property (retain) PLXPCListenerOperatorComposition *iconDraggingListner; // ivar: _iconDraggingListner
@property (retain) FBSDisplayLayout *lastDisplayLayout; // ivar: _lastDisplayLayout
@property BOOL lastDisplayLayoutContainsLockScreen; // ivar: _lastDisplayLayoutContainsLockScreen
@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor; // ivar: _mainDisplayMonitor
@property (retain) PLXPCListenerOperatorComposition *springBoardAlwaysOnEnableStateListener; // ivar: _springBoardAlwaysOnEnableStateListener
@property (retain) PLXPCResponderOperatorComposition *springBoardAlwaysOnEnableStateResponder; // ivar: _springBoardAlwaysOnEnableStateResponder
@property (retain) PLXPCListenerOperatorComposition *springBoardBacklightStateChangeListener; // ivar: _springBoardBacklightStateChangeListener
@property (retain) PLXPCResponderOperatorComposition *springBoardBacklightStateChangeResponder; // ivar: _springBoardBacklightStateChangeResponder
@property (retain) PLXPCListenerOperatorComposition *springBoardFlipbookStatisticsListener; // ivar: _springBoardFlipbookStatisticsListener
@property (retain) PLXPCResponderOperatorComposition *springBoardFlipbookStatisticsResponder; // ivar: _springBoardFlipbookStatisticsResponder
@property (readonly) Class superclass;
@property (retain) PLXPCListenerOperatorComposition *widgetAdditionAnimationListener; // ivar: _widgetAdditionAnimationListener
@property (retain) PLXPCListenerOperatorComposition *widgetFlipAnimationListener; // ivar: _widgetFlipAnimationListener
@property (retain) PLXPCListenerOperatorComposition *windowModeListener; // ivar: _windowModeListener


+(id)entryAggregateDefinitionForeground;
+(id)entryAggregateDefinitionWidgetAdditionAnimation;
+(id)entryAggregateDefinitionWidgetFlipAnimation;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitionAlwaysOnEnableState;
+(id)entryEventBackwardDefinitionBacklightStateChange;
+(id)entryEventBackwardDefinitionFlipbookStatistics;
+(id)entryEventBackwardDefinitionIconDragging;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventForwardScreenState;
+(id)entryEventForwardWindowMode;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointBacklightEvent;
+(id)entryEventPointDefinitions;
+(void)load;
-(NSUInteger)convertWindowingMode:(id)arg0 ;
-(NSUInteger)convertZoomLevel:(id)arg0 ;
-(id)init;
-(id)processQuery:(id)arg0 withEntryKey:(id)arg1 ;
-(int)GetBacklightState:(id)arg0 ;
-(void)accountWithLayoutEntries:(id)arg0 ;
-(void)createAirPlayWiFiAccountingEvent:(id)arg0 ;
-(void)createCarPlayAccountingEvents:(id)arg0 ;
-(void)dealloc;
-(void)handleDisplayCallback:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)layoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;
-(void)log;
-(void)logAggregateWidgetAdditionAnimation:(id)arg0 ;
-(void)logAggregateWidgetFlipAnimation:(id)arg0 ;
-(void)logEventBackwardAlwaysOnEnableState:(id)arg0 ;
-(void)logEventBackwardBacklightStateChange:(id)arg0 ;
-(void)logEventBackwardFlipbookStatistics:(id)arg0 ;
-(void)logEventBackwardIconDragging:(id)arg0 ;
-(void)logEventForwardAirPlayScreenState:(id)arg0 ;
-(void)logEventForwardCarScreenState:(id)arg0 ;
-(void)logEventForwardMainScreenState:(id)arg0 ;
-(void)logEventForwardWindowMode:(id)arg0 ;
-(void)logEventPointMainBacklightEvent:(id)arg0 withContext:(id)arg1 ;


@end


#endif