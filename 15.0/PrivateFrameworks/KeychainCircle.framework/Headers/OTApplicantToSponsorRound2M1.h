// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OTAPPLICANTTOSPONSORROUND2M1_H
#define OTAPPLICANTTOSPONSORROUND2M1_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface OTApplicantToSponsorRound2M1 : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPeerID;
@property (readonly, nonatomic) BOOL hasPermanentInfo;
@property (readonly, nonatomic) BOOL hasPermanentInfoSig;
@property (readonly, nonatomic) BOOL hasStableInfo;
@property (readonly, nonatomic) BOOL hasStableInfoSig;
@property (retain, nonatomic) NSString *peerID; // ivar: _peerID
@property (retain, nonatomic) NSData *permanentInfo; // ivar: _permanentInfo
@property (retain, nonatomic) NSData *permanentInfoSig; // ivar: _permanentInfoSig
@property (retain, nonatomic) NSData *stableInfo; // ivar: _stableInfo
@property (retain, nonatomic) NSData *stableInfoSig; // ivar: _stableInfoSig


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