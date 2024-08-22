// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSCREENSTATEAGENT_H
#define PLSCREENSTATEAGENT_H

@class PLAgent, FBSDisplayLayoutMonitor, NSString, PLXPCListenerOperatorComposition;
@protocol FBSDisplayLayoutObserver;



@interface PLScreenStateAgent : PLAgent <FBSDisplayLayoutObserver>



@property (retain) FBSDisplayLayoutMonitor *airPlayDisplayMonitor; // ivar: _airPlayDisplayMonitor
@property (retain) FBSDisplayLayoutMonitor *carPlayDisplayMonitor; // ivar: _carPlayDisplayMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) PLXPCListenerOperatorComposition *iconDraggingListner; // ivar: _iconDraggingListner
@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor; // ivar: _mainDisplayMonitor
@property (readonly) Class superclass;
@property (retain) PLXPCListenerOperatorComposition *widgetAdditionAnimationListener; // ivar: _widgetAdditionAnimationListener
@property (retain) PLXPCListenerOperatorComposition *widgetFlipAnimationListener; // ivar: _widgetFlipAnimationListener


+(id)entryAggregateDefinitionForeground;
+(id)entryAggregateDefinitionWidgetAdditionAnimation;
+(id)entryAggregateDefinitionWidgetFlipAnimation;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitionIconDragging;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventForwardScreenState;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointBacklightEvent;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)accountWithLayoutEntries:(id)arg0 ;
-(void)createAirPlayWiFiAccountingEvent:(id)arg0 ;
-(void)createCarPlayAccountingEvents:(id)arg0 ;
-(void)dealloc;
-(void)initOperatorDependancies;
-(void)layoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;
-(void)log;
-(void)logAggregateWidgetAdditionAnimation:(id)arg0 ;
-(void)logAggregateWidgetFlipAnimation:(id)arg0 ;
-(void)logEventBackwardIconDragging:(id)arg0 ;
-(void)logEventForwardAirPlayScreenState:(id)arg0 ;
-(void)logEventForwardCarScreenState:(id)arg0 ;
-(void)logEventForwardMainScreenState:(id)arg0 ;
-(void)logEventPointMainBacklightEvent:(id)arg0 withContext:(id)arg1 ;


@end


#endif