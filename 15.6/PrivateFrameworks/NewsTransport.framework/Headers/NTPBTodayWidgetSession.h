// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBTODAYWIDGETSESSION_H
#define NTPBTODAYWIDGETSESSION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBTodayWidgetSession : PBCodable <NSCopying>

 {
    ? _countOfArticlesExposedPerSections;
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *countOfArticlesExposedEachSections; // ivar: _countOfArticlesExposedEachSections
@property (readonly, nonatomic) *int countOfArticlesExposedPerSections;
@property (readonly, nonatomic) NSUInteger countOfArticlesExposedPerSectionsCount;
@property (nonatomic) BOOL hasWidgetArticleCount;
@property (nonatomic) BOOL hasWidgetSectionsExposed;
@property (nonatomic) int widgetArticleCount; // ivar: _widgetArticleCount
@property (retain, nonatomic) NSMutableArray *widgetSectionIdsExposeds; // ivar: _widgetSectionIdsExposeds
@property (nonatomic) int widgetSectionsExposed; // ivar: _widgetSectionsExposed


+(Class)countOfArticlesExposedEachSectionType;
+(Class)widgetSectionIdsExposedType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)countOfArticlesExposedEachSectionAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)widgetSectionIdsExposedAtIndex:(NSUInteger)arg0 ;
-(int)countOfArticlesExposedPerSectionAtIndex:(NSUInteger)arg0 ;
-(void)addCountOfArticlesExposedEachSection:(id)arg0 ;
-(void)addCountOfArticlesExposedPerSection:(int)arg0 ;
-(void)addWidgetSectionIdsExposed:(id)arg0 ;
-(void)clearCountOfArticlesExposedEachSections;
-(void)clearCountOfArticlesExposedPerSections;
-(void)clearWidgetSectionIdsExposeds;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif