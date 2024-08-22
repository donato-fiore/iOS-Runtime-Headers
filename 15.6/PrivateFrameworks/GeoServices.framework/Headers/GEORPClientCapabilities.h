// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPCLIENTCAPABILITIES_H
#define GEORPCLIENTCAPABILITIES_H

@class PBCodable;
@protocol NSCopying;



@interface GEORPClientCapabilities : PBCodable <NSCopying>

 {
    int _transitMarketSupport;
    BOOL _hasConstrainedProblemStatusSize;
    BOOL _hasFeatureHandle;
    BOOL _hasNoOptInRequest;
    BOOL _hasSupportForIdsBasedNotifications;
    ? _flags;
}


@property (nonatomic) BOOL hasConstrainedProblemStatusSize;
@property (nonatomic) BOOL hasFeatureHandle;
@property (nonatomic) BOOL hasHasConstrainedProblemStatusSize;
@property (nonatomic) BOOL hasHasFeatureHandle;
@property (nonatomic) BOOL hasHasNoOptInRequest;
@property (nonatomic) BOOL hasHasSupportForIdsBasedNotifications;
@property (nonatomic) BOOL hasNoOptInRequest;
@property (nonatomic) BOOL hasSupportForIdsBasedNotifications;
@property (nonatomic) BOOL hasTransitMarketSupport;
@property (nonatomic) int transitMarketSupport;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)transitMarketSupportAsString:(int)arg0 ;
-(int)StringAsTransitMarketSupport:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif