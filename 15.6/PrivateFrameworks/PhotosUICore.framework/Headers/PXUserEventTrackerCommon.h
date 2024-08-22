// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUSEREVENTTRACKERCOMMON_H
#define PXUSEREVENTTRACKERCOMMON_H


#import <Foundation/Foundation.h>


@interface PXUserEventTrackerCommon : NSObject {
    id *_currentSessionSender;
    NSUInteger _currentSessionSource;
    NSUInteger _currentSessionTab;
    CGFloat _currentLogStateStartDate;
    CGFloat _currentLogSubStateStartDate;
    CGFloat _currentLogSubSubStateStartDate;
    BOOL _applicationIsInForeground;
}


@property (nonatomic) NSUInteger currentLogState; // ivar: _currentLogState
@property (nonatomic) NSUInteger currentLogSubState; // ivar: _currentLogSubState
@property (nonatomic) NSUInteger currentLogSubSubState; // ivar: _currentLogSubSubState
@property (nonatomic, setter=setCurrentTab:) NSUInteger currentTab; // ivar: _currentTab
@property (readonly, nonatomic) BOOL enableDetailedDebugLogging; // ivar: _enableDetailedDebugLogging


-(BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)arg0 ;
-(id)PXLogStateDescription:(NSUInteger)arg0 ;
-(id)PXLogSubStateDescription:(NSUInteger)arg0 ;
-(id)PXLogSubSubStateDescription:(NSUInteger)arg0 ;
-(id)init;
-(void)_setCurrentSessionSource:(NSUInteger)arg0 sender:(id)arg1 isInForeground:(BOOL)arg2 ;
-(void)aggregateSetMemoryFeedNumberOfDaysSinceLastVisit:(NSInteger)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)didFinishViewingMemoriesFeedView;
-(void)eventSourceDidChange:(NSUInteger)arg0 sender:(id)arg1 ;
-(void)eventSourceDidDisappear:(NSUInteger)arg0 sender:(id)arg1 ;
-(void)eventSourceWillAppear:(NSUInteger)arg0 sender:(id)arg1 ;
-(void)logCounterValuesForLogState:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)logCounterValuesForLogSubState:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)logCounterValuesForLogSubSubState:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)logImpressionCountForEventSource:(NSUInteger)arg0 ;
-(void)logViewCountForLogState:(NSUInteger)arg0 ;
-(void)logViewCountForLogSubState:(NSUInteger)arg0 ;
-(void)logViewCountForLogSubSubState:(NSUInteger)arg0 ;
-(void)willViewMemoriesFeedView;


@end


#endif