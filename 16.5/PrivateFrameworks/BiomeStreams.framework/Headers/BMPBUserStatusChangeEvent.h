// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBUSERSTATUSCHANGEEVENT_H
#define BMPBUSERSTATUSCHANGEEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBUserStatusChangeEvent : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasIdsHandle;
@property (readonly, nonatomic) BOOL hasStatusChangeType;
@property (retain, nonatomic) NSString *idsHandle; // ivar: _idsHandle
@property (retain, nonatomic) NSMutableArray *idsHandles; // ivar: _idsHandles
@property (retain, nonatomic) NSString *statusChangeType; // ivar: _statusChangeType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)idsHandlesAtIndex:(NSUInteger)arg0 ;
-(void)addIdsHandles:(id)arg0 ;
-(void)clearIdsHandles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif