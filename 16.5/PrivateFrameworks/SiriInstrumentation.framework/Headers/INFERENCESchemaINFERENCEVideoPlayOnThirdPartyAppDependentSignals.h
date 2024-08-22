// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCEVIDEOPLAYONTHIRDPARTYAPPDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCEVIDEOPLAYONTHIRDPARTYAPPDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppDependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int entityAbsoluteCount10Min; // ivar: _entityAbsoluteCount10Min
@property (nonatomic) int entityAbsoluteCount14Day; // ivar: _entityAbsoluteCount14Day
@property (nonatomic) int entityAbsoluteCount1Day; // ivar: _entityAbsoluteCount1Day
@property (nonatomic) int entityAbsoluteCount1Hr; // ivar: _entityAbsoluteCount1Hr
@property (nonatomic) int entityAbsoluteCount28Day; // ivar: _entityAbsoluteCount28Day
@property (nonatomic) int entityAbsoluteCount2Min; // ivar: _entityAbsoluteCount2Min
@property (nonatomic) int entityAbsoluteCount6Hr; // ivar: _entityAbsoluteCount6Hr
@property (nonatomic) int entityAbsoluteCount7Day; // ivar: _entityAbsoluteCount7Day
@property (nonatomic) int entityPartialAppCount10Min; // ivar: _entityPartialAppCount10Min
@property (nonatomic) int entityPartialAppCount1Day; // ivar: _entityPartialAppCount1Day
@property (nonatomic) int entityPartialAppCount1Hr; // ivar: _entityPartialAppCount1Hr
@property (nonatomic) int entityPartialAppCount28Day; // ivar: _entityPartialAppCount28Day
@property (nonatomic) int entityPartialAppCount2Min; // ivar: _entityPartialAppCount2Min
@property (nonatomic) int entityPartialAppCount6Hr; // ivar: _entityPartialAppCount6Hr
@property (nonatomic) int entityPartialAppCount7Day; // ivar: _entityPartialAppCount7Day
@property (nonatomic) int entityPartialSiriCount10Min; // ivar: _entityPartialSiriCount10Min
@property (nonatomic) int entityPartialSiriCount1Day; // ivar: _entityPartialSiriCount1Day
@property (nonatomic) int entityPartialSiriCount1Hr; // ivar: _entityPartialSiriCount1Hr
@property (nonatomic) int entityPartialSiriCount28Day; // ivar: _entityPartialSiriCount28Day
@property (nonatomic) int entityPartialSiriCount2Min; // ivar: _entityPartialSiriCount2Min
@property (nonatomic) int entityPartialSiriCount6Hr; // ivar: _entityPartialSiriCount6Hr
@property (nonatomic) int entityPartialSiriCount7Day; // ivar: _entityPartialSiriCount7Day
@property (nonatomic) int entityRecency; // ivar: _entityRecency
@property (nonatomic) BOOL hasEntityAbsoluteCount10Min;
@property (nonatomic) BOOL hasEntityAbsoluteCount14Day;
@property (nonatomic) BOOL hasEntityAbsoluteCount1Day;
@property (nonatomic) BOOL hasEntityAbsoluteCount1Hr;
@property (nonatomic) BOOL hasEntityAbsoluteCount28Day;
@property (nonatomic) BOOL hasEntityAbsoluteCount2Min;
@property (nonatomic) BOOL hasEntityAbsoluteCount6Hr;
@property (nonatomic) BOOL hasEntityAbsoluteCount7Day;
@property (nonatomic) BOOL hasEntityPartialAppCount10Min;
@property (nonatomic) BOOL hasEntityPartialAppCount1Day;
@property (nonatomic) BOOL hasEntityPartialAppCount1Hr;
@property (nonatomic) BOOL hasEntityPartialAppCount28Day;
@property (nonatomic) BOOL hasEntityPartialAppCount2Min;
@property (nonatomic) BOOL hasEntityPartialAppCount6Hr;
@property (nonatomic) BOOL hasEntityPartialAppCount7Day;
@property (nonatomic) BOOL hasEntityPartialSiriCount10Min;
@property (nonatomic) BOOL hasEntityPartialSiriCount1Day;
@property (nonatomic) BOOL hasEntityPartialSiriCount1Hr;
@property (nonatomic) BOOL hasEntityPartialSiriCount28Day;
@property (nonatomic) BOOL hasEntityPartialSiriCount2Min;
@property (nonatomic) BOOL hasEntityPartialSiriCount6Hr;
@property (nonatomic) BOOL hasEntityPartialSiriCount7Day;
@property (nonatomic) BOOL hasEntityRecency;
@property (nonatomic) BOOL hasIsForegroundApp;
@property (nonatomic) BOOL hasIsLastForegroundApp;
@property (nonatomic) BOOL hasIsLastNowPlayingApp;
@property (nonatomic) BOOL hasIsNowPlayingApp;
@property (nonatomic) BOOL hasIsSelectedApp;
@property (nonatomic) BOOL hasMediaUserContextNumberOfLibraryItems;
@property (nonatomic) BOOL hasMediaUserContextSubscriptionStatus;
@property (nonatomic) BOOL hasNowPlayingAbsoluteCount10Min;
@property (nonatomic) BOOL hasNowPlayingAbsoluteCount14Day;
@property (nonatomic) BOOL hasNowPlayingAbsoluteCount1Day;
@property (nonatomic) BOOL hasNowPlayingAbsoluteCount1Hr;
@property (nonatomic) BOOL hasNowPlayingAbsoluteCount28Day;
@property (nonatomic) BOOL hasNowPlayingAbsoluteCount2Min;
@property (nonatomic) BOOL hasNowPlayingAbsoluteCount6Hr;
@property (nonatomic) BOOL hasNowPlayingAbsoluteCount7Day;
@property (nonatomic) BOOL hasRelativeAppUsage14Day;
@property (nonatomic) BOOL hasRelativeAppUsage1Day;
@property (nonatomic) BOOL hasRelativeAppUsage7Day;
@property (nonatomic) BOOL hasSpotlightRelativeCount;
@property (nonatomic) BOOL hasSupportedMediaCategories;
@property (nonatomic) BOOL hasTimeSinceLastForegroundAppEndInSec;
@property (nonatomic) BOOL hasTimeSinceLastForegroundAppStartInSec;
@property (nonatomic) BOOL hasTimeSinceLastNowPlayingAppEndInSec;
@property (nonatomic) BOOL hasTimeSinceLastNowPlayingAppStartInSec;
@property (nonatomic) BOOL isForegroundApp; // ivar: _isForegroundApp
@property (nonatomic) BOOL isLastForegroundApp; // ivar: _isLastForegroundApp
@property (nonatomic) BOOL isLastNowPlayingApp; // ivar: _isLastNowPlayingApp
@property (nonatomic) BOOL isNowPlayingApp; // ivar: _isNowPlayingApp
@property (nonatomic) BOOL isSelectedApp; // ivar: _isSelectedApp
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int mediaUserContextNumberOfLibraryItems; // ivar: _mediaUserContextNumberOfLibraryItems
@property (nonatomic) int mediaUserContextSubscriptionStatus; // ivar: _mediaUserContextSubscriptionStatus
@property (nonatomic) int nowPlayingAbsoluteCount10Min; // ivar: _nowPlayingAbsoluteCount10Min
@property (nonatomic) int nowPlayingAbsoluteCount14Day; // ivar: _nowPlayingAbsoluteCount14Day
@property (nonatomic) int nowPlayingAbsoluteCount1Day; // ivar: _nowPlayingAbsoluteCount1Day
@property (nonatomic) int nowPlayingAbsoluteCount1Hr; // ivar: _nowPlayingAbsoluteCount1Hr
@property (nonatomic) int nowPlayingAbsoluteCount28Day; // ivar: _nowPlayingAbsoluteCount28Day
@property (nonatomic) int nowPlayingAbsoluteCount2Min; // ivar: _nowPlayingAbsoluteCount2Min
@property (nonatomic) int nowPlayingAbsoluteCount6Hr; // ivar: _nowPlayingAbsoluteCount6Hr
@property (nonatomic) int nowPlayingAbsoluteCount7Day; // ivar: _nowPlayingAbsoluteCount7Day
@property (nonatomic) int relativeAppUsage14Day; // ivar: _relativeAppUsage14Day
@property (nonatomic) int relativeAppUsage1Day; // ivar: _relativeAppUsage1Day
@property (nonatomic) int relativeAppUsage7Day; // ivar: _relativeAppUsage7Day
@property (nonatomic) int spotlightRelativeCount; // ivar: _spotlightRelativeCount
@property (nonatomic) NSUInteger supportedMediaCategories; // ivar: _supportedMediaCategories
@property (nonatomic) int timeSinceLastForegroundAppEndInSec; // ivar: _timeSinceLastForegroundAppEndInSec
@property (nonatomic) int timeSinceLastForegroundAppStartInSec; // ivar: _timeSinceLastForegroundAppStartInSec
@property (nonatomic) int timeSinceLastNowPlayingAppEndInSec; // ivar: _timeSinceLastNowPlayingAppEndInSec
@property (nonatomic) int timeSinceLastNowPlayingAppStartInSec; // ivar: _timeSinceLastNowPlayingAppStartInSec


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEntityAbsoluteCount10Min;
-(void)deleteEntityAbsoluteCount14Day;
-(void)deleteEntityAbsoluteCount1Day;
-(void)deleteEntityAbsoluteCount1Hr;
-(void)deleteEntityAbsoluteCount28Day;
-(void)deleteEntityAbsoluteCount2Min;
-(void)deleteEntityAbsoluteCount6Hr;
-(void)deleteEntityAbsoluteCount7Day;
-(void)deleteEntityPartialAppCount10Min;
-(void)deleteEntityPartialAppCount1Day;
-(void)deleteEntityPartialAppCount1Hr;
-(void)deleteEntityPartialAppCount28Day;
-(void)deleteEntityPartialAppCount2Min;
-(void)deleteEntityPartialAppCount6Hr;
-(void)deleteEntityPartialAppCount7Day;
-(void)deleteEntityPartialSiriCount10Min;
-(void)deleteEntityPartialSiriCount1Day;
-(void)deleteEntityPartialSiriCount1Hr;
-(void)deleteEntityPartialSiriCount28Day;
-(void)deleteEntityPartialSiriCount2Min;
-(void)deleteEntityPartialSiriCount6Hr;
-(void)deleteEntityPartialSiriCount7Day;
-(void)deleteEntityRecency;
-(void)deleteIsForegroundApp;
-(void)deleteIsLastForegroundApp;
-(void)deleteIsLastNowPlayingApp;
-(void)deleteIsNowPlayingApp;
-(void)deleteIsSelectedApp;
-(void)deleteMediaUserContextNumberOfLibraryItems;
-(void)deleteMediaUserContextSubscriptionStatus;
-(void)deleteNowPlayingAbsoluteCount10Min;
-(void)deleteNowPlayingAbsoluteCount14Day;
-(void)deleteNowPlayingAbsoluteCount1Day;
-(void)deleteNowPlayingAbsoluteCount1Hr;
-(void)deleteNowPlayingAbsoluteCount28Day;
-(void)deleteNowPlayingAbsoluteCount2Min;
-(void)deleteNowPlayingAbsoluteCount6Hr;
-(void)deleteNowPlayingAbsoluteCount7Day;
-(void)deleteRelativeAppUsage14Day;
-(void)deleteRelativeAppUsage1Day;
-(void)deleteRelativeAppUsage7Day;
-(void)deleteSpotlightRelativeCount;
-(void)deleteSupportedMediaCategories;
-(void)deleteTimeSinceLastForegroundAppEndInSec;
-(void)deleteTimeSinceLastForegroundAppStartInSec;
-(void)deleteTimeSinceLastNowPlayingAppEndInSec;
-(void)deleteTimeSinceLastNowPlayingAppStartInSec;
-(void)writeTo:(id)arg0 ;


@end


#endif