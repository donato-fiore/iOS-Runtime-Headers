// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSCREENLOGUNLOCKSESSION_H
#define ATXSCREENLOGUNLOCKSESSION_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXScreenLogUnlockSession : NSObject <NSSecureCoding>



@property (nonatomic) BOOL appLibraryEnabled; // ivar: _appLibraryEnabled
@property (nonatomic) BOOL hasAppPredictionPanel; // ivar: _hasAppPredictionPanel
@property (nonatomic) BOOL hasAppPredictionPanelInTodayPage; // ivar: _hasAppPredictionPanelInTodayPage
@property (nonatomic) BOOL hasSuggestionsWidget; // ivar: _hasSuggestionsWidget
@property (nonatomic) BOOL hasSuggestionsWidgetInTodayPage; // ivar: _hasSuggestionsWidgetInTodayPage
@property (nonatomic) NSUInteger numEngagementsInAppLibrary; // ivar: _numEngagementsInAppLibrary
@property (nonatomic) NSUInteger numEngagementsInAppPredictionPanel; // ivar: _numEngagementsInAppPredictionPanel
@property (nonatomic) NSUInteger numEngagementsInAppPredictionPanelTodayPage; // ivar: _numEngagementsInAppPredictionPanelTodayPage
@property (nonatomic) NSUInteger numEngagementsInSpotlightActions; // ivar: _numEngagementsInSpotlightActions
@property (nonatomic) NSUInteger numEngagementsInSpotlightApps; // ivar: _numEngagementsInSpotlightApps
@property (nonatomic) NSUInteger numEngagementsInSuggestionsWidget; // ivar: _numEngagementsInSuggestionsWidget
@property (nonatomic) NSUInteger numEngagementsInSuggestionsWidgetTodayPage; // ivar: _numEngagementsInSuggestionsWidgetTodayPage
@property (nonatomic) NSUInteger numViewsInAppLibrary; // ivar: _numViewsInAppLibrary
@property (nonatomic) NSUInteger numViewsInAppPredictionPanel; // ivar: _numViewsInAppPredictionPanel
@property (nonatomic) NSUInteger numViewsInAppPredictionPanelTodayPage; // ivar: _numViewsInAppPredictionPanelTodayPage
@property (nonatomic) NSUInteger numViewsInSpotlightActions; // ivar: _numViewsInSpotlightActions
@property (nonatomic) NSUInteger numViewsInSpotlightApps; // ivar: _numViewsInSpotlightApps
@property (nonatomic) NSUInteger numViewsInSuggestionsWidget; // ivar: _numViewsInSuggestionsWidget
@property (nonatomic) NSUInteger numViewsInSuggestionsWidgetTodayPage; // ivar: _numViewsInSuggestionsWidgetTodayPage
@property (retain, nonatomic) NSDate *sessionEndDate; // ivar: _sessionEndDate
@property (retain, nonatomic) NSDate *sessionStartDate; // ivar: _sessionStartDate
@property (nonatomic) BOOL spotlightEnabled; // ivar: _spotlightEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)_widgetBundleIdIsSuggestionsWidget:(id)arg0 ;
-(BOOL)complete;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXScreenLogUnlockSession:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionStartDate:(id)arg0 ;
-(void)_updateWithAppDirectoryEvent:(id)arg0 ;
-(void)_updateWithHomeScreenEvent:(id)arg0 ;
-(void)_updateWithSpotlightEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalizeWithSessionEndDate:(id)arg0 ;
-(void)updateWithUIEventIfPossible:(id)arg0 ;


@end


#endif