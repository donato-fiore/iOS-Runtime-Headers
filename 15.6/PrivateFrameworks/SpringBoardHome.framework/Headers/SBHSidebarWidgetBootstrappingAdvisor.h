// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHSIDEBARWIDGETBOOTSTRAPPINGADVISOR_H
#define SBHSIDEBARWIDGETBOOTSTRAPPINGADVISOR_H

@class PCPersistentTimer, NSHashTable;
@protocol SBHSidebarWidgetLearningDataSource;

#import <Foundation/Foundation.h>


@interface SBHSidebarWidgetBootstrappingAdvisor : NSObject {
    PCPersistentTimer *_widgetLearningCadenceUpdateTimer;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) NSObject<SBHSidebarWidgetLearningDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) CGFloat learningDuration; // ivar: _learningDuration
@property (readonly, nonatomic) NSUInteger learningEpoch; // ivar: _learningEpoch
@property (nonatomic) BOOL shouldSidebarWidgetsBeInLearningMode; // ivar: _shouldSidebarWidgetsBeInLearningMode


-(BOOL)_requiresLearningCadenceForFavoriteWidgets:(*BOOL)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 learningDuration:(CGFloat)arg1 learningEpoch:(NSUInteger)arg2 ;
-(void)_notifyObservers;
-(void)_scheduleWidgetLearningCadenceUpdateTimer:(BOOL)arg0 ;
-(void)_setupSidebarWidgetsLearningCadence;
-(void)_sidebarLearningPeriodTimeIsUp:(id)arg0 ;
-(void)_updateSidebarWidgetsCommenceDateIfEmpty;
-(void)_updateSidebarWidgetsEpoch;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)noteSignificantSidebarStateChangeDidOccur;
-(void)removeObserver:(id)arg0 ;


@end


#endif