// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSMESSAGINGSTATUS_H
#define SOSMESSAGINGSTATUS_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SOSStatus.h"

@interface SOSMessagingStatus : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int flowState; // ivar: _flowState
@property (nonatomic) BOOL hasFlowState;
@property (nonatomic) BOOL hasIsPairedDeviceStatus;
@property (nonatomic) BOOL hasResolution;
@property (nonatomic) BOOL hasTimeOfDetection;
@property (nonatomic) BOOL hasTimeOfResolution;
@property (nonatomic) BOOL hasTrigger;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) BOOL isPairedDeviceStatus; // ivar: _isPairedDeviceStatus
@property (nonatomic) int resolution; // ivar: _resolution
@property (readonly, nonatomic) SOSStatus *sosStatus;
@property (nonatomic) CGFloat timeOfDetection; // ivar: _timeOfDetection
@property (nonatomic) CGFloat timeOfResolution; // ivar: _timeOfResolution
@property (nonatomic) int trigger; // ivar: _trigger
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithSOSStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif