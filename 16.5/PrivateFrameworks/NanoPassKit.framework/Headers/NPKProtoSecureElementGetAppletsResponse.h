// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSECUREELEMENTGETAPPLETSRESPONSE_H
#define NPKPROTOSECUREELEMENTGETAPPLETSRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoSecureElementGetAppletsResponse : PBCodable <NSCopying>

 {
    ? _activationStates;
    ? _lifecycleStates;
    ? _has;
}


@property (readonly, nonatomic) *unsigned int activationStates;
@property (readonly, nonatomic) NSUInteger activationStatesCount;
@property (retain, nonatomic) NSMutableArray *appletsBytes; // ivar: _appletsBytes
@property (retain, nonatomic) NSMutableArray *cardAIDs; // ivar: _cardAIDs
@property (nonatomic) BOOL hasPending;
@property (readonly, nonatomic) *unsigned int lifecycleStates;
@property (readonly, nonatomic) NSUInteger lifecycleStatesCount;
@property (nonatomic) BOOL pending; // ivar: _pending


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appletsBytesAtIndex:(NSUInteger)arg0 ;
-(id)cardAIDsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)activationStatesAtIndex:(NSUInteger)arg0 ;
-(unsigned int)lifecycleStatesAtIndex:(NSUInteger)arg0 ;
-(void)addActivationStates:(unsigned int)arg0 ;
-(void)addAppletsBytes:(id)arg0 ;
-(void)addCardAIDs:(id)arg0 ;
-(void)addLifecycleStates:(unsigned int)arg0 ;
-(void)clearActivationStates;
-(void)clearAppletsBytes;
-(void)clearCardAIDs;
-(void)clearLifecycleStates;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif