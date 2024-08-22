// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSPROTOTASKINGCONFIGCOMPLETION_H
#define DRSPROTOTASKINGCONFIGCOMPLETION_H

@class PBCodable, NSString;
@protocol CKCodeOperationMessageMutation, NSCopying;


#import "DRSProtoTaskingConfigMetadata.h"

@interface DRSProtoTaskingConfigCompletion : PBCodable <CKCodeOperationMessageMutation, NSCopying>

 {
    ? _has;
}


@property (nonatomic) float activeDuration; // ivar: _activeDuration
@property (retain, nonatomic) NSString *completionDescription; // ivar: _completionDescription
@property (retain, nonatomic) NSString *completionType; // ivar: _completionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasActiveDuration;
@property (readonly, nonatomic) BOOL hasCompletionDescription;
@property (readonly, nonatomic) BOOL hasCompletionType;
@property (readonly, nonatomic) BOOL hasTaskingConfigMetadata;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) DRSProtoTaskingConfigMetadata *taskingConfigMetadata; // ivar: _taskingConfigMetadata


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif