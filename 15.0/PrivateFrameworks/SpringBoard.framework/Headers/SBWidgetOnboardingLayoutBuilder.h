// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWIDGETONBOARDINGLAYOUTBUILDER_H
#define SBWIDGETONBOARDINGLAYOUTBUILDER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SBWidgetOnboardingLayoutBuilder : NSObject

@property (readonly, nonatomic) NSArray *pinnedWidgets; // ivar: _pinnedWidgets
@property (readonly, nonatomic) NSArray *suggestionWidgets; // ivar: _suggestionWidgets


-(BOOL)isCalendarWidget:(id)arg0 ;
-(BOOL)isCalendarWidgetIcon:(id)arg0 ;
-(BOOL)isClockWidget:(id)arg0 ;
-(BOOL)isFirstSuggestionActiveWidgetIcon:(id)arg0 ;
-(BOOL)isSecondSuggestionActiveWidgetIcon:(id)arg0 ;
-(id)deduplicateInsidePinnedWidgets;
-(id)defaultCalendarWidgetIcon:(NSUInteger)arg0 ;
-(id)defaultFirstSuggestionWidgetIcon:(NSUInteger)arg0 ;
-(id)defaultLargeFirstSuggestionWidgetIcon;
-(id)defaultLargeSecondSuggestionWidgetIcon;
-(id)defaultMediumCalendarWidgetIcon;
-(id)defaultMediumFirstSuggestionWidgetIcon;
-(id)defaultMediumSecondSuggestionWidgetIcon;
-(id)defaultSecondSuggestionWidgetIcon:(NSUInteger)arg0 ;
-(id)defaultSmallCalendarWidgetIcon;
-(id)defaultSmallClockWidgetIcon;
-(id)defaultSmallNotesWidgetIcon;
-(id)initWithPinnedWidgets:(id)arg0 suggestionWidgets:(id)arg1 ;
-(id)migratedDefaultWidgets:(BOOL)arg0 ;
-(id)migratedFourWidgets:(id)arg0 ;
-(id)migratedOneLargeWidget:(id)arg0 ;
-(id)migratedOneMediumWidget:(id)arg0 ;
-(id)migratedOneSmallWidget:(id)arg0 ;
-(id)migratedSmallAndMediumWidget:(id)arg0 ;
-(id)migratedThreeWidgets:(id)arg0 ;
-(id)migratedTwoMediumWidgets:(id)arg0 ;
-(id)migratedTwoSmallWidgets:(id)arg0 ;


@end


#endif