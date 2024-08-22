// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBTODAYSECTIONCONFIGARTICLE_H
#define NTPBTODAYSECTIONCONFIGARTICLE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBTodaySectionConfigArticle.h"

@interface NTPBTodaySectionConfigArticle : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *actionURLString; // ivar: _actionURLString
@property (retain, nonatomic) NSString *articleID; // ivar: _articleID
@property (retain, nonatomic) NSString *displayDateString; // ivar: _displayDateString
@property (readonly, nonatomic) BOOL hasActionURLString;
@property (readonly, nonatomic) BOOL hasArticleID;
@property (readonly, nonatomic) BOOL hasDisplayDateString;
@property (readonly, nonatomic) BOOL hasPaidArticle;
@property (readonly, nonatomic) BOOL hasStoryType;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NTPBTodaySectionConfigArticle *paidArticle; // ivar: _paidArticle
@property (retain, nonatomic) NSString *storyType; // ivar: _storyType
@property (retain, nonatomic) NSString *title; // ivar: _title


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