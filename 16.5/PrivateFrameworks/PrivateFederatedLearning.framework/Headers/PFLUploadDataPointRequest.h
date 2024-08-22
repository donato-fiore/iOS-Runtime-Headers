// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFLUPLOADDATAPOINTREQUEST_H
#define PFLUPLOADDATAPOINTREQUEST_H

@class PBRequest, NSString, CKCodeRecordTransport;
@protocol CKCodeOperationMessageMutation, NSCopying;



@interface PFLUploadDataPointRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat accuracy; // ivar: _accuracy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger flattenedPrivatizedWeightCount; // ivar: _flattenedPrivatizedWeightCount
@property (retain, nonatomic) CKCodeRecordTransport *flattenedPrivatizedWeightData; // ivar: _flattenedPrivatizedWeightData
@property (retain, nonatomic) NSString *flattenedPrivatizedWeightType; // ivar: _flattenedPrivatizedWeightType
@property (nonatomic) BOOL hasAccuracy;
@property (nonatomic) BOOL hasFlattenedPrivatizedWeightCount;
@property (readonly, nonatomic) BOOL hasFlattenedPrivatizedWeightData;
@property (readonly, nonatomic) BOOL hasFlattenedPrivatizedWeightType;
@property (nonatomic) BOOL hasLoss;
@property (nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) BOOL hasTaskId;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat loss; // ivar: _loss
@property (nonatomic) NSInteger modelVersion; // ivar: _modelVersion
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *taskId; // ivar: _taskId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)extractRecordTransports;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)substituteRecordTransports:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif