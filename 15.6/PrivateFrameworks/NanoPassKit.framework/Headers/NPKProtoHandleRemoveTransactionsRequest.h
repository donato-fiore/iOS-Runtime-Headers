// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOHANDLEREMOVETRANSACTIONSREQUEST_H
#define NPKPROTOHANDLEREMOVETRANSACTIONSREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoHandleRemoveTransactionsRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *identifiers; // ivar: _identifiers
@property (retain, nonatomic) NSMutableArray *passIDs; // ivar: _passIDs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)identifiersAtIndex:(NSUInteger)arg0 ;
-(id)passIDsAtIndex:(NSUInteger)arg0 ;
-(void)addIdentifiers:(id)arg0 ;
-(void)addPassIDs:(id)arg0 ;
-(void)clearIdentifiers;
-(void)clearPassIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif