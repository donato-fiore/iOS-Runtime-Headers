// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOREGISTERSUBCREDENTIALSREQUEST_H
#define NPKPROTOREGISTERSUBCREDENTIALSREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoRegisterSubcredentialsRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *identifiers; // ivar: _identifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)identifiersAtIndex:(NSUInteger)arg0 ;
-(void)addIdentifiers:(id)arg0 ;
-(void)clearIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif