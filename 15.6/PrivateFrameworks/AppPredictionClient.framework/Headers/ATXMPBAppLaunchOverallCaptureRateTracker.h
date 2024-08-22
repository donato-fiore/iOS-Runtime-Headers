// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMPBAPPLAUNCHOVERALLCAPTURERATETRACKER_H
#define ATXMPBAPPLAUNCHOVERALLCAPTURERATETRACKER_H

@class PBCodable;
@protocol NSCopying;



@interface ATXMPBAppLaunchOverallCaptureRateTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL appLibraryEnabled; // ivar: _appLibraryEnabled
@property (nonatomic) BOOL appPredictionPanelEnabled; // ivar: _appPredictionPanelEnabled
@property (nonatomic) BOOL appPredictionPanelTodayEnabled; // ivar: _appPredictionPanelTodayEnabled
@property (nonatomic) int captureType; // ivar: _captureType
@property (nonatomic) BOOL hasAppLibraryEnabled;
@property (nonatomic) BOOL hasAppPredictionPanelEnabled;
@property (nonatomic) BOOL hasAppPredictionPanelTodayEnabled;
@property (nonatomic) BOOL hasCaptureType;
@property (nonatomic) BOOL hasIconLocation;
@property (nonatomic) BOOL hasSpotlightEnabled;
@property (nonatomic) BOOL hasSuggestionsWidgetEnabled;
@property (nonatomic) BOOL hasSuggestionsWidgetTodayEnabled;
@property (nonatomic) int iconLocation; // ivar: _iconLocation
@property (nonatomic) BOOL spotlightEnabled; // ivar: _spotlightEnabled
@property (nonatomic) BOOL suggestionsWidgetEnabled; // ivar: _suggestionsWidgetEnabled
@property (nonatomic) BOOL suggestionsWidgetTodayEnabled; // ivar: _suggestionsWidgetTodayEnabled


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)captureTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)iconLocationAsString:(int)arg0 ;
-(int)StringAsCaptureType:(id)arg0 ;
-(int)StringAsIconLocation:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif