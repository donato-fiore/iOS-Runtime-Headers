// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPTELEMETRYCICONIAEACCESSINVESTIGATION_H
#define APPTELEMETRYCICONIAEACCESSINVESTIGATION_H

@class PBCodable;
@protocol NSCopying;



@interface AppTelemetryCiconiaEAccessInvestigation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int curGid; // ivar: _curGid
@property (nonatomic) int curUid; // ivar: _curUid
@property (nonatomic) BOOL hasAcls; // ivar: _hasAcls
@property (nonatomic) BOOL hasCurGid;
@property (nonatomic) BOOL hasCurUid;
@property (nonatomic) BOOL hasHasAcls;
@property (nonatomic) BOOL hasProtectionClass;
@property (nonatomic) BOOL hasStFlags;
@property (nonatomic) BOOL hasStGid;
@property (nonatomic) BOOL hasStMode;
@property (nonatomic) BOOL hasStUid;
@property (nonatomic) int protectionClass; // ivar: _protectionClass
@property (nonatomic) unsigned int stFlags; // ivar: _stFlags
@property (nonatomic) int stGid; // ivar: _stGid
@property (nonatomic) int stMode; // ivar: _stMode
@property (nonatomic) int stUid; // ivar: _stUid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif