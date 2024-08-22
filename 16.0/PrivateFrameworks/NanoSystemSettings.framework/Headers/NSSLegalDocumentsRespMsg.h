// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSLEGALDOCUMENTSRESPMSG_H
#define NSSLEGALDOCUMENTSRESPMSG_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NSSLegalDocumentsRespMsg : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSData *builtinApps; // ivar: _builtinApps
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (readonly, nonatomic) BOOL hasBuiltinApps;
@property (readonly, nonatomic) BOOL hasLegalNotices;
@property (readonly, nonatomic) BOOL hasLicense;
@property (readonly, nonatomic) BOOL hasSarStatement;
@property (nonatomic) BOOL hasSarUrlAdded;
@property (retain, nonatomic) NSData *legalNotices; // ivar: _legalNotices
@property (retain, nonatomic) NSData *license; // ivar: _license
@property (retain, nonatomic) NSData *sarStatement; // ivar: _sarStatement
@property (nonatomic) BOOL sarUrlAdded; // ivar: _sarUrlAdded


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