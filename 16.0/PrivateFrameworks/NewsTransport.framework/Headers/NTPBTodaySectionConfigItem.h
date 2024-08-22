// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBTODAYSECTIONCONFIGITEM_H
#define NTPBTODAYSECTIONCONFIGITEM_H

@class PBCodable;
@protocol NSCopying;


#import "NTPBTodaySectionConfigArticle.h"
#import "NTPBTodaySectionConfigWebEmbed.h"

@interface NTPBTodaySectionConfigItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NTPBTodaySectionConfigArticle *article; // ivar: _article
@property (readonly, nonatomic) BOOL hasArticle;
@property (nonatomic) BOOL hasItemType;
@property (readonly, nonatomic) BOOL hasWebEmbed;
@property (nonatomic) int itemType; // ivar: _itemType
@property (retain, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed; // ivar: _webEmbed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif