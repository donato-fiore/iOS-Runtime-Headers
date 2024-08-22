// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOBARCODEEVENTREQUEST_H
#define NPKPROTOBARCODEEVENTREQUEST_H

@class PBRequest, NSMutableArray, NSData;
@protocol NSCopying;



@interface NPKProtoBarcodeEventRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *associatedApplicationIdentifiers; // ivar: _associatedApplicationIdentifiers
@property (readonly, nonatomic) BOOL hasRequestData;
@property (retain, nonatomic) NSData *requestData; // ivar: _requestData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)associatedApplicationIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAssociatedApplicationIdentifiers:(id)arg0 ;
-(void)clearAssociatedApplicationIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif