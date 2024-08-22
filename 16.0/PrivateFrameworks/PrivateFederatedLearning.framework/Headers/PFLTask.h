// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFLTASK_H
#define PFLTASK_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "PFLTaskLocalPrivacyParams.h"
#import "PFLTaskLocalTrainingParams.h"

@interface PFLTask : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *dataSourceId; // ivar: _dataSourceId
@property (readonly, nonatomic) BOOL hasDataSourceId;
@property (readonly, nonatomic) BOOL hasLocalPrivacyParams;
@property (readonly, nonatomic) BOOL hasLocalTrainingParams;
@property (readonly, nonatomic) BOOL hasModelName;
@property (nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) BOOL hasTaskId;
@property (nonatomic) BOOL hasUpdatableWeightsCount;
@property (retain, nonatomic) PFLTaskLocalPrivacyParams *localPrivacyParams; // ivar: _localPrivacyParams
@property (retain, nonatomic) PFLTaskLocalTrainingParams *localTrainingParams; // ivar: _localTrainingParams
@property (retain, nonatomic) NSString *modelName; // ivar: _modelName
@property (nonatomic) NSInteger modelVersion; // ivar: _modelVersion
@property (retain, nonatomic) NSString *taskId; // ivar: _taskId
@property (nonatomic) NSInteger updatableWeightsCount; // ivar: _updatableWeightsCount


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