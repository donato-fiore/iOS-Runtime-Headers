// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUEXTERNALSEMVER_H
#define SIRINLUEXTERNALSEMVER_H

@class PBCodable;
@protocol NSCopying;



@interface SIRINLUEXTERNALSemVer : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) BOOL hasPatchVersion;
@property (nonatomic) unsigned int majorVersion; // ivar: _majorVersion
@property (nonatomic) unsigned int minorVersion; // ivar: _minorVersion
@property (nonatomic) unsigned int patchVersion; // ivar: _patchVersion


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