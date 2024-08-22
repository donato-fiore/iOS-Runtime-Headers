// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSECUREELEMENTREMOVEAPPLETSREQUEST_H
#define NPKPROTOSECUREELEMENTREMOVEAPPLETSREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoSecureElementRemoveAppletsRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *cardAIDs; // ivar: _cardAIDs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cardAIDsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCardAIDs:(id)arg0 ;
-(void)clearCardAIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif