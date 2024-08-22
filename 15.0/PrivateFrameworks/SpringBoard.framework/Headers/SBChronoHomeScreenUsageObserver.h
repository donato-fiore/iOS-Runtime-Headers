// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCHRONOHOMESCREENUSAGEOBSERVER_H
#define SBCHRONOHOMESCREENUSAGEOBSERVER_H

@class NSString, SBHIconManager, CHSWidgetHost;
@protocol SBHHomeScreenUsageMonitorObserver;

#import <Foundation/Foundation.h>


@interface SBChronoHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger widgetDataGeneration; // ivar: _widgetDataGeneration
@property (readonly, nonatomic) CHSWidgetHost *widgetHost; // ivar: _widgetHost


-(id)_containerDescriptorForWidgetIcon:(id)arg0 atLocation:(NSInteger)arg1 page:(NSUInteger)arg2 ;
-(id)_descriptionForArray:(id)arg0 name:(id)arg1 ;
-(id)init;
-(id)initWithIconManager:(id)arg0 ;
-(void)_rebuildAndTransmitConfiguredWidgetData:(id)arg0 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteCurrentPageIndexChanged:(NSUInteger)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteUserAddedWidgetIconStackSuggestion:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteUserDislikedSiriSuggestionOnWidgetIconStackSuggestion:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteUserDislikedWidgetIconStackSuggestion:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteUserTappedWidgetIcon:(id)arg1 withURL:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteWidgetIconAdded:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteWidgetIconRemoved:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg0 didNoteWidgetIconStackChangedActiveWidget:(id)arg1 ;


@end


#endif