// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLETINKERPAIRINGREQUEST_H
#define HDCODABLETINKERPAIRINGREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface HDCodableTinkerPairingRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger guardianDSID; // ivar: _guardianDSID
@property (retain, nonatomic) NSString *guardianFirstName; // ivar: _guardianFirstName
@property (retain, nonatomic) NSString *guardianIcloudIdentifier; // ivar: _guardianIcloudIdentifier
@property (retain, nonatomic) NSString *guardianLastName; // ivar: _guardianLastName
@property (nonatomic) BOOL hasGuardianDSID;
@property (readonly, nonatomic) BOOL hasGuardianFirstName;
@property (readonly, nonatomic) BOOL hasGuardianIcloudIdentifier;
@property (readonly, nonatomic) BOOL hasGuardianLastName;
@property (readonly, nonatomic) BOOL hasProfileIdentifier;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (nonatomic) BOOL hasSetupType;
@property (readonly, nonatomic) BOOL hasTinkerFirstName;
@property (readonly, nonatomic) BOOL hasTinkerLastName;
@property (retain, nonatomic) NSData *profileIdentifier; // ivar: _profileIdentifier
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) int setupType; // ivar: _setupType
@property (retain, nonatomic) NSString *tinkerFirstName; // ivar: _tinkerFirstName
@property (retain, nonatomic) NSString *tinkerLastName; // ivar: _tinkerLastName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)setupTypeAsString:(int)arg0 ;
-(int)StringAsSetupType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif