// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIGHTHOUSE_BITACORA_PROTOBMLTIDENTIFIERS_H
#define LIGHTHOUSE_BITACORA_PROTOBMLTIDENTIFIERS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasTrialDeploymentID;
@property (readonly, nonatomic) BOOL hasTrialTaskID;
@property (retain, nonatomic) NSString *trialDeploymentID; // ivar: _trialDeploymentID
@property (retain, nonatomic) NSString *trialTaskID; // ivar: _trialTaskID


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