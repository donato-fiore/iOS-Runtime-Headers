// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPZONERETRIEVERESPONSE_H
#define CKDPZONERETRIEVERESPONSE_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;



@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *anonymousZoneInfos; // ivar: _anonymousZoneInfos
@property (retain, nonatomic) NSData *continuationMarker; // ivar: _continuationMarker
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSMutableArray *zoneSummarys; // ivar: _zoneSummarys


+(Class)anonymousZoneInfoType;
+(Class)zoneSummaryType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)anonymousZoneInfoAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)zoneSummaryAtIndex:(NSUInteger)arg0 ;
-(void)addAnonymousZoneInfo:(id)arg0 ;
-(void)addZoneSummary:(id)arg0 ;
-(void)clearAnonymousZoneInfos;
-(void)clearZoneSummarys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif