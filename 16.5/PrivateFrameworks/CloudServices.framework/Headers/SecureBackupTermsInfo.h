// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECUREBACKUPTERMSINFO_H
#define SECUREBACKUPTERMSINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SecureBackupTermsInfo : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) BOOL hasAltDSID;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasIcloudVersion;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *icloudVersion; // ivar: _icloudVersion
@property (retain, nonatomic) NSString *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *version; // ivar: _version


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