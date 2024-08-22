// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBTODAYCONFIG_H
#define NTPBTODAYCONFIG_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBTodayConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *audioIndicatorColor; // ivar: _audioIndicatorColor
@property (retain, nonatomic) NSString *backgroundColorDark; // ivar: _backgroundColorDark
@property (retain, nonatomic) NSString *backgroundColorLight; // ivar: _backgroundColorLight
@property (readonly, nonatomic) BOOL hasAudioIndicatorColor;
@property (readonly, nonatomic) BOOL hasBackgroundColorDark;
@property (readonly, nonatomic) BOOL hasBackgroundColorLight;
@property (readonly, nonatomic) BOOL hasWidgetIdentifier;
@property (nonatomic) BOOL hasWidgetSystemReloadInterval;
@property (nonatomic) BOOL hasWidgetSystemReloadJitterMax;
@property (retain, nonatomic) NSMutableArray *todayQueueConfigs; // ivar: _todayQueueConfigs
@property (retain, nonatomic) NSString *widgetIdentifier; // ivar: _widgetIdentifier
@property (nonatomic) NSInteger widgetSystemReloadInterval; // ivar: _widgetSystemReloadInterval
@property (nonatomic) NSInteger widgetSystemReloadJitterMax; // ivar: _widgetSystemReloadJitterMax


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)todayQueueConfigsAtIndex:(NSUInteger)arg0 ;
-(void)addTodayQueueConfigs:(id)arg0 ;
-(void)clearTodayQueueConfigs;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif