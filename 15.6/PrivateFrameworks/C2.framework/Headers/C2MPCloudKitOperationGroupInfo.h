// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef C2MPCLOUDKITOPERATIONGROUPINFO_H
#define C2MPCLOUDKITOPERATIONGROUPINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface C2MPCloudKitOperationGroupInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasOperationGroupId;
@property (readonly, nonatomic) BOOL hasOperationGroupName;
@property (nonatomic) BOOL hasOperationGroupTriggered;
@property (retain, nonatomic) NSString *operationGroupId; // ivar: _operationGroupId
@property (retain, nonatomic) NSString *operationGroupName; // ivar: _operationGroupName
@property (nonatomic) BOOL operationGroupTriggered; // ivar: _operationGroupTriggered


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