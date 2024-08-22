// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPBTRIGGEREDAUTOMATIONEVENT_H
#define WFPBTRIGGEREDAUTOMATIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBTriggeredAutomationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int batchCount; // ivar: _batchCount
@property (nonatomic) unsigned int batchDroppedCount; // ivar: _batchDroppedCount
@property (nonatomic) BOOL hasBatchCount;
@property (nonatomic) BOOL hasBatchDroppedCount;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasRequiredRuntimeConfirmation;
@property (readonly, nonatomic) BOOL hasTriggerType;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL requiredRuntimeConfirmation; // ivar: _requiredRuntimeConfirmation
@property (retain, nonatomic) NSString *triggerType; // ivar: _triggerType


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