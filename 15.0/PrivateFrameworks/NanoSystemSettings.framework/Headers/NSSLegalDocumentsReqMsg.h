// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSLEGALDOCUMENTSREQMSG_H
#define NSSLEGALDOCUMENTSREQMSG_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NSSLegalDocumentsReqMsg : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL addUrlToSAR; // ivar: _addUrlToSAR
@property (nonatomic) BOOL fetchBuiltinApps; // ivar: _fetchBuiltinApps
@property (nonatomic) BOOL hasAddUrlToSAR;
@property (nonatomic) BOOL hasFetchBuiltinApps;
@property (retain, nonatomic) NSMutableArray *legacyPreferredLanguages; // ivar: _legacyPreferredLanguages
@property (retain, nonatomic) NSMutableArray *preferredLanguages; // ivar: _preferredLanguages


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)legacyPreferredLanguagesAtIndex:(NSUInteger)arg0 ;
-(id)preferredLanguagesAtIndex:(NSUInteger)arg0 ;
-(void)addLegacyPreferredLanguages:(id)arg0 ;
-(void)addPreferredLanguages:(id)arg0 ;
-(void)clearLegacyPreferredLanguages;
-(void)clearPreferredLanguages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif