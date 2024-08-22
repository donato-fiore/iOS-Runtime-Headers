// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCDPCODESERVICEREQUESTOPERATIONGROUP_H
#define CKCDPCODESERVICEREQUESTOPERATIONGROUP_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CKCDPCodeServiceRequestOperationGroup : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasOperationGroupId;
@property (readonly, nonatomic) BOOL hasOperationGroupName;
@property (nonatomic) BOOL hasOperationGroupQuantity;
@property (readonly, nonatomic) BOOL hasOperationId;
@property (retain, nonatomic) NSString *operationGroupId; // ivar: _operationGroupId
@property (retain, nonatomic) NSString *operationGroupName; // ivar: _operationGroupName
@property (nonatomic) NSInteger operationGroupQuantity; // ivar: _operationGroupQuantity
@property (retain, nonatomic) NSString *operationId; // ivar: _operationId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif