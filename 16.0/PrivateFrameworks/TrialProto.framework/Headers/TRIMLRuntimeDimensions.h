// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIMLRUNTIMEDIMENSIONS_H
#define TRIMLRUNTIMEDIMENSIONS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface TRIMLRuntimeDimensions : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *crashPrefixHash; // ivar: _crashPrefixHash
@property (readonly, nonatomic) BOOL hasCrashPrefixHash;
@property (readonly, nonatomic) BOOL hasPluginId;
@property (readonly, nonatomic) BOOL hasUnderlyingDomainCode;
@property (retain, nonatomic) NSString *pluginId; // ivar: _pluginId
@property (retain, nonatomic) NSString *underlyingDomainCode; // ivar: _underlyingDomainCode


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