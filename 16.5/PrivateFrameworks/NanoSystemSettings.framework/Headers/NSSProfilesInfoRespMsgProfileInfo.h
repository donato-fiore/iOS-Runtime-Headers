// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSPROFILESINFORESPMSGPROFILEINFO_H
#define NSSPROFILESINFORESPMSGPROFILEINFO_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface NSSProfilesInfoRespMsgProfileInfo : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *expiryDate; // ivar: _expiryDate
@property (retain, nonatomic) NSString *friendlyName; // ivar: _friendlyName
@property (readonly, nonatomic) BOOL hasExpiryDate;
@property (readonly, nonatomic) BOOL hasFriendlyName;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasOrganization;
@property (readonly, nonatomic) BOOL hasProfileDescription;
@property (readonly, nonatomic) BOOL hasUUID;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *organization; // ivar: _organization
@property (retain, nonatomic) NSString *profileDescription; // ivar: _profileDescription
@property (retain, nonatomic) NSString *uUID; // ivar: _uUID


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