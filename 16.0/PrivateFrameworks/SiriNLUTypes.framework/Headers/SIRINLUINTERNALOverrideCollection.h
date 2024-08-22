// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALOVERRIDECOLLECTION_H
#define SIRINLUINTERNALOVERRIDECOLLECTION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALOverrideCollection : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *assetId; // ivar: _assetId
@property (retain, nonatomic) NSMutableArray *componentOverrides; // ivar: _componentOverrides
@property (nonatomic) NSUInteger creationTimestampMsSinceUnixEpoch; // ivar: _creationTimestampMsSinceUnixEpoch
@property (readonly, nonatomic) BOOL hasAssetId;
@property (nonatomic) BOOL hasCreationTimestampMsSinceUnixEpoch;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSMutableArray *parseOverrides; // ivar: _parseOverrides
@property (retain, nonatomic) NSString *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)componentOverridesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)parseOverridesAtIndex:(NSUInteger)arg0 ;
-(void)addComponentOverrides:(id)arg0 ;
-(void)addParseOverrides:(id)arg0 ;
-(void)clearComponentOverrides;
-(void)clearParseOverrides;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif