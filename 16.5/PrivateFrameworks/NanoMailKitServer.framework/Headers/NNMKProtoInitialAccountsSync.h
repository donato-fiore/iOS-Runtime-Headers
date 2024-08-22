// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKPROTOINITIALACCOUNTSSYNC_H
#define NNMKPROTOINITIALACCOUNTSSYNC_H

@class PBCodable, NSData, NSMutableArray, NSString;
@protocol NSCopying;



@interface NNMKProtoInitialAccountsSync : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *dateSynced; // ivar: _dateSynced
@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasInitialSyncVersion;
@property (retain, nonatomic) NSMutableArray *initialAccounts; // ivar: _initialAccounts
@property (retain, nonatomic) NSString *initialSyncVersion; // ivar: _initialSyncVersion


+(Class)initialAccountType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initialAccountAtIndex:(NSUInteger)arg0 ;
-(void)addInitialAccount:(id)arg0 ;
-(void)clearInitialAccounts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif