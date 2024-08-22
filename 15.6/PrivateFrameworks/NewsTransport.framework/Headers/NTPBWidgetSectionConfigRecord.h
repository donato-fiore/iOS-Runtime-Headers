// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBWIDGETSECTIONCONFIGRECORD_H
#define NTPBWIDGETSECTIONCONFIGRECORD_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "NTPBRecordBase.h"

@interface NTPBWidgetSectionConfigRecord : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *articleIDs2s; // ivar: _articleIDs2s
@property (retain, nonatomic) NSMutableArray *articleListIDs2s; // ivar: _articleListIDs2s
@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (retain, nonatomic) NSString *configuration2; // ivar: _configuration2
@property (readonly, nonatomic) BOOL hasBase;
@property (readonly, nonatomic) BOOL hasConfiguration2;
@property (readonly, nonatomic) BOOL hasSingleTagConfiguration;
@property (retain, nonatomic) NSString *singleTagConfiguration; // ivar: _singleTagConfiguration


+(Class)articleIDs2Type;
+(Class)articleListIDs2Type;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleIDs2AtIndex:(NSUInteger)arg0 ;
-(id)articleListIDs2AtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addArticleIDs2:(id)arg0 ;
-(void)addArticleListIDs2:(id)arg0 ;
-(void)clearArticleIDs2s;
-(void)clearArticleListIDs2s;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif