// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMPBSCREENLOGUNLOCKSESSIONTRACKER_H
#define ATXMPBSCREENLOGUNLOCKSESSIONTRACKER_H

@class PBCodable;
@protocol NSCopying;



@interface ATXMPBScreenLogUnlockSessionTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL appLibraryEnabled; // ivar: _appLibraryEnabled
@property (nonatomic) BOOL appLibraryViewed; // ivar: _appLibraryViewed
@property (nonatomic) BOOL appPredictionPanelEnabled; // ivar: _appPredictionPanelEnabled
@property (nonatomic) BOOL appPredictionPanelTodayPageEnabled; // ivar: _appPredictionPanelTodayPageEnabled
@property (nonatomic) BOOL appPredictionPanelTodayPageViewed; // ivar: _appPredictionPanelTodayPageViewed
@property (nonatomic) BOOL appPredictionPanelViewed; // ivar: _appPredictionPanelViewed
@property (nonatomic) BOOL hasAppLibraryEnabled;
@property (nonatomic) BOOL hasAppLibraryViewed;
@property (nonatomic) BOOL hasAppPredictionPanelEnabled;
@property (nonatomic) BOOL hasAppPredictionPanelTodayPageEnabled;
@property (nonatomic) BOOL hasAppPredictionPanelTodayPageViewed;
@property (nonatomic) BOOL hasAppPredictionPanelViewed;
@property (nonatomic) BOOL hasNumEngagementsInAppLibrary;
@property (nonatomic) BOOL hasNumEngagementsInAppPredictionPanel;
@property (nonatomic) BOOL hasNumEngagementsInAppPredictionPanelTodayPage;
@property (nonatomic) BOOL hasNumEngagementsInSpotlightActions;
@property (nonatomic) BOOL hasNumEngagementsInSpotlightApps;
@property (nonatomic) BOOL hasNumEngagementsInSuggestionsWidget;
@property (nonatomic) BOOL hasNumEngagementsInSuggestionsWidgetTodayPage;
@property (nonatomic) BOOL hasSessionLengthInSeconds;
@property (nonatomic) BOOL hasSpotlightActionsViewed;
@property (nonatomic) BOOL hasSpotlightAppsViewed;
@property (nonatomic) BOOL hasSpotlightEnabled;
@property (nonatomic) BOOL hasSuggestionsWidgetEnabled;
@property (nonatomic) BOOL hasSuggestionsWidgetTodayPageEnabled;
@property (nonatomic) BOOL hasSuggestionsWidgetTodayPageViewed;
@property (nonatomic) BOOL hasSuggestionsWidgetViewed;
@property (nonatomic) unsigned int numEngagementsInAppLibrary; // ivar: _numEngagementsInAppLibrary
@property (nonatomic) unsigned int numEngagementsInAppPredictionPanel; // ivar: _numEngagementsInAppPredictionPanel
@property (nonatomic) unsigned int numEngagementsInAppPredictionPanelTodayPage; // ivar: _numEngagementsInAppPredictionPanelTodayPage
@property (nonatomic) unsigned int numEngagementsInSpotlightActions; // ivar: _numEngagementsInSpotlightActions
@property (nonatomic) unsigned int numEngagementsInSpotlightApps; // ivar: _numEngagementsInSpotlightApps
@property (nonatomic) unsigned int numEngagementsInSuggestionsWidget; // ivar: _numEngagementsInSuggestionsWidget
@property (nonatomic) unsigned int numEngagementsInSuggestionsWidgetTodayPage; // ivar: _numEngagementsInSuggestionsWidgetTodayPage
@property (nonatomic) unsigned int sessionLengthInSeconds; // ivar: _sessionLengthInSeconds
@property (nonatomic) BOOL spotlightActionsViewed; // ivar: _spotlightActionsViewed
@property (nonatomic) BOOL spotlightAppsViewed; // ivar: _spotlightAppsViewed
@property (nonatomic) BOOL spotlightEnabled; // ivar: _spotlightEnabled
@property (nonatomic) BOOL suggestionsWidgetEnabled; // ivar: _suggestionsWidgetEnabled
@property (nonatomic) BOOL suggestionsWidgetTodayPageEnabled; // ivar: _suggestionsWidgetTodayPageEnabled
@property (nonatomic) BOOL suggestionsWidgetTodayPageViewed; // ivar: _suggestionsWidgetTodayPageViewed
@property (nonatomic) BOOL suggestionsWidgetViewed; // ivar: _suggestionsWidgetViewed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif