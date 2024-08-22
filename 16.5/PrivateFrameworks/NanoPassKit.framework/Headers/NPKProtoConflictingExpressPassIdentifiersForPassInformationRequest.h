// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOCONFLICTINGEXPRESSPASSIDENTIFIERSFORPASSINFORMATIONREQUEST_H
#define NPKPROTOCONFLICTINGEXPRESSPASSIDENTIFIERSFORPASSINFORMATIONREQUEST_H

@class PBRequest, NSData, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *expressPassInformation; // ivar: _expressPassInformation
@property (readonly, nonatomic) BOOL hasExpressPassInformation;
@property (retain, nonatomic) NSMutableArray *referenceExpressPassesInformations; // ivar: _referenceExpressPassesInformations


+(Class)referenceExpressPassesInformationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)referenceExpressPassesInformationAtIndex:(NSUInteger)arg0 ;
-(void)addReferenceExpressPassesInformation:(id)arg0 ;
-(void)clearReferenceExpressPassesInformations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif