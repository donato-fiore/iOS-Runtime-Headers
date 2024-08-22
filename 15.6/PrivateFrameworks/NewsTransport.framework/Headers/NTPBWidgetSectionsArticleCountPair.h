// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBWIDGETSECTIONSARTICLECOUNTPAIR_H
#define NTPBWIDGETSECTIONSARTICLECOUNTPAIR_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBWidgetSectionsArticleCountPair : PBCodable <NSCopying>

 {
    ? _countOfArticlesExposedEachSections;
}


@property (readonly, nonatomic) *NSInteger countOfArticlesExposedEachSections;
@property (readonly, nonatomic) NSUInteger countOfArticlesExposedEachSectionsCount;
@property (readonly, nonatomic) BOOL hasWidgetSectionIdsExposed;
@property (readonly, nonatomic) BOOL hasWidgetSectionSubidsExposed;
@property (retain, nonatomic) NSString *widgetSectionIdsExposed; // ivar: _widgetSectionIdsExposed
@property (retain, nonatomic) NSString *widgetSectionSubidsExposed; // ivar: _widgetSectionSubidsExposed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)countOfArticlesExposedEachSectionAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCountOfArticlesExposedEachSection:(NSInteger)arg0 ;
-(void)clearCountOfArticlesExposedEachSections;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif