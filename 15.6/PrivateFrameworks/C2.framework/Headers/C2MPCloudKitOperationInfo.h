// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef C2MPCLOUDKITOPERATIONINFO_H
#define C2MPCLOUDKITOPERATIONINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface C2MPCloudKitOperationInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasOperationGroupIndex;
@property (readonly, nonatomic) BOOL hasOperationId;
@property (nonatomic) BOOL hasOperationTriggered;
@property (readonly, nonatomic) BOOL hasOperationType;
@property (nonatomic) unsigned int operationGroupIndex; // ivar: _operationGroupIndex
@property (retain, nonatomic) NSString *operationId; // ivar: _operationId
@property (nonatomic) BOOL operationTriggered; // ivar: _operationTriggered
@property (retain, nonatomic) NSString *operationType; // ivar: _operationType


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