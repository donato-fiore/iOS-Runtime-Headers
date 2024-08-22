// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBTODAYQUEUECONFIG_H
#define NTPBTODAYQUEUECONFIG_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBTodayQueueConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasWidgetVisibleSectionsLimit;
@property (retain, nonatomic) NSMutableArray *todaySectionConfigs; // ivar: _todaySectionConfigs
@property (nonatomic) NSUInteger widgetVisibleSectionsLimit; // ivar: _widgetVisibleSectionsLimit


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)todaySectionConfigsAtIndex:(NSUInteger)arg0 ;
-(void)addTodaySectionConfigs:(id)arg0 ;
-(void)clearTodaySectionConfigs;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif