// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOSETEXPRESSPASSRESPONSE_H
#define NPKPROTOSETEXPRESSPASSRESPONSE_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoSetExpressPassResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *actualExpressPassInformation; // ivar: _actualExpressPassInformation
@property (retain, nonatomic) NSString *actualUniqueID; // ivar: _actualUniqueID
@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSMutableArray *currentExpressPassesInformations; // ivar: _currentExpressPassesInformations
@property (retain, nonatomic) NSMutableArray *currentUniqueIDs; // ivar: _currentUniqueIDs
@property (readonly, nonatomic) BOOL hasActualExpressPassInformation;
@property (readonly, nonatomic) BOOL hasActualUniqueID;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL hasNeedsUnlock;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL needsUnlock; // ivar: _needsUnlock
@property (nonatomic) BOOL pending; // ivar: _pending
@property (nonatomic) BOOL success; // ivar: _success


+(Class)currentExpressPassesInformationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentExpressPassesInformationAtIndex:(NSUInteger)arg0 ;
-(id)currentUniqueIDsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCurrentExpressPassesInformation:(id)arg0 ;
-(void)addCurrentUniqueIDs:(id)arg0 ;
-(void)clearCurrentExpressPassesInformations;
-(void)clearCurrentUniqueIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif