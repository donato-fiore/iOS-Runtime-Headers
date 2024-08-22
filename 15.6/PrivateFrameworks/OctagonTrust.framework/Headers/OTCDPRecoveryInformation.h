// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OTCDPRECOVERYINFORMATION_H
#define OTCDPRECOVERYINFORMATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface OTCDPRecoveryInformation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL containsIcdpData; // ivar: _containsIcdpData
@property (nonatomic) BOOL hasContainsIcdpData;
@property (readonly, nonatomic) BOOL hasRecoveryKey;
@property (readonly, nonatomic) BOOL hasRecoverySecret;
@property (nonatomic) BOOL hasSilentRecoveryAttempt;
@property (nonatomic) BOOL hasUseCachedSecret;
@property (nonatomic) BOOL hasUsePreviouslyCachedRecoveryKey;
@property (nonatomic) BOOL hasUsesMultipleIcsc;
@property (retain, nonatomic) NSString *recoveryKey; // ivar: _recoveryKey
@property (retain, nonatomic) NSString *recoverySecret; // ivar: _recoverySecret
@property (nonatomic) BOOL silentRecoveryAttempt; // ivar: _silentRecoveryAttempt
@property (nonatomic) BOOL useCachedSecret; // ivar: _useCachedSecret
@property (nonatomic) BOOL usePreviouslyCachedRecoveryKey; // ivar: _usePreviouslyCachedRecoveryKey
@property (nonatomic) BOOL usesMultipleIcsc; // ivar: _usesMultipleIcsc


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