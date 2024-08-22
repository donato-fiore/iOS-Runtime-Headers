// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15PROMOTEDCONTENT20JOURNEYMETRICSHELPER_H
#define _TTC15PROMOTEDCONTENT20JOURNEYMETRICSHELPER_H

@class NSString;
@protocol APPCJourneyMetricsHelping, APPCMetricRegister, APMetricPrimitiveCreating, APPCPromotableContent;

#import <Foundation/Foundation.h>

#import "_TtC15PromotedContent31JourneyMetricsHelperDiagnostics.h"

@interface _TtC15PromotedContent20JourneyMetricsHelper : NSObject <APPCJourneyMetricsHelping, APPCMetricRegister>

 {
    ? promotedContentIdentifier;
    ? journeyIdentifier;
    ? contextIdentifier;
    ? notificationOwner;
    ? clientSource;
    ? interactionThreshold;
    ? interactionTime;
    ? viewReady;
    ? wasCreated;
    ? hasBeenPlaced;
    ? stop;
    ? unfilledReasons;
    ? placedProperties;
    ? eventCount;
    ? unfairLock;
    ? $__lazy_storage_$_shownSet;
    ? $__lazy_storage_$_partiallyShownSet;
}


@property (nonatomic, retain) _TtC15PromotedContent31JourneyMetricsHelperDiagnostics *diagnostics; // ivar: diagnostics
@property (nonatomic) BOOL didImpress; // ivar: didImpress
@property (nonatomic) BOOL didUnload; // ivar: didUnload
@property (nonatomic) BOOL hasBeenOnScreen; // ivar: hasBeenOnScreen
@property (nonatomic) BOOL isCurrentlyOnScreen; // ivar: isCurrentlyOnScreen
@property (nonatomic, copy) NSString *journeyIdentifier;
@property (nonatomic, retain) NSObject<APMetricPrimitiveCreating> *primitiveCreator; // ivar: primitiveCreator
@property (nonatomic, weak) NSObject<APPCPromotableContent> *promotedContent; // ivar: promotedContent
@property (nonatomic, copy) NSString *promotedContentIdentifier;


-(id)init;
-(void)adDidImpress;
-(void)adMarkerInteracted;
-(void)addUnfilledReason:(NSInteger)arg0 ;
-(void)contentLoadFailure;
-(void)createdWithAdType:(NSInteger)arg0 ;
-(void)dealloc;
-(void)delivered;
-(void)discardedWithCode:(NSInteger)arg0 ;
-(void)exceededContainer;
-(void)getAppWithButtonState:(NSInteger)arg0 timeToPreviousInstall:(NSInteger)arg1 ;
-(void)interacted;
-(void)interactedAtXPos:(float)arg0 yPos:(float)arg1 ;
-(void)interactedWithElementID:(unsigned char)arg0 atXPos:(float)arg1 yPos:(float)arg2 ;
-(void)loaded;
-(void)notConsumedWithCode:(NSInteger)arg0 placeholder:(BOOL)arg1 ;
-(void)offScreenWithCollapsed:(BOOL)arg0 ;
-(void)onScreenWithCollapsed:(BOOL)arg0 ;
-(void)placedWithPlacementType:(NSInteger)arg0 ;
-(void)placedWithPlacementType:(NSInteger)arg0 placement:(NSInteger)arg1 ;
-(void)placedWithPlacementType:(NSInteger)arg0 placement:(NSInteger)arg1 position:(NSInteger)arg2 ;
-(void)placedWithPlacementType:(NSInteger)arg0 wasNativeSlot:(BOOL)arg1 ;
-(void)ready;
-(void)registerHandlerForAllMetricsWithClosure:(id)arg0 ;
-(void)removeHandler;
-(void)replacedWithHelper:(id)arg0 ;
-(void)unloadedWithReason:(NSInteger)arg0 ;
-(void)userReturnedFromInteraction;
-(void)visibleWithPercent:(NSInteger)arg0 starting:(id)arg1 duration:(CGFloat)arg2 collapsed:(BOOL)arg3 ;
-(void)visibleWithPercent:(NSInteger)arg0 starting:(id)arg1 duration:(CGFloat)arg2 scrollVelocity:(float)arg3 collapsed:(BOOL)arg4 ;


@end


#endif