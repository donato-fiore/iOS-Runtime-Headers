// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOREMOTEPASSUPDATERESPONSE_H
#define NPKPROTOREMOTEPASSUPDATERESPONSE_H

@class PBCodable, NSData, NSMutableArray;
@protocol NSCopying;


#import "NPKProtoPass.h"

@interface NPKProtoRemotePassUpdateResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (retain, nonatomic) NSMutableArray *expressPassInformations; // ivar: _expressPassInformations
@property (readonly, nonatomic) BOOL hasErrorData;
@property (readonly, nonatomic) BOOL hasPass;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL hasUpgradeStatus;
@property (retain, nonatomic) NPKProtoPass *pass; // ivar: _pass
@property (nonatomic) BOOL pending; // ivar: _pending
@property (nonatomic) int upgradeStatus; // ivar: _upgradeStatus


+(Class)expressPassInformationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)expressPassInformationAtIndex:(NSUInteger)arg0 ;
-(id)upgradeStatusAsString:(int)arg0 ;
-(int)StringAsUpgradeStatus:(id)arg0 ;
-(void)addExpressPassInformation:(id)arg0 ;
-(void)clearExpressPassInformations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif