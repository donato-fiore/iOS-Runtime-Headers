// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBPREDICTIONCONTEXT_H
#define ATXPBPREDICTIONCONTEXT_H

@class PBCodable;
@protocol NSCopying;


#import "ATXPBPredictionAmbientLightContext.h"
#import "ATXPBPredictionDeviceStateContext.h"
#import "ATXPBPredictionLocationMotionContext.h"
#import "ATXPBPredictionTimeContext.h"
#import "ATXPBPredictionUserContext.h"

@interface ATXPBPredictionContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ATXPBPredictionAmbientLightContext *ambientLightContext; // ivar: _ambientLightContext
@property (retain, nonatomic) ATXPBPredictionDeviceStateContext *deviceStateContext; // ivar: _deviceStateContext
@property (readonly, nonatomic) BOOL hasAmbientLightContext;
@property (readonly, nonatomic) BOOL hasDeviceStateContext;
@property (nonatomic) BOOL hasIsOverridden;
@property (readonly, nonatomic) BOOL hasLocationMotionContext;
@property (readonly, nonatomic) BOOL hasTimeContext;
@property (readonly, nonatomic) BOOL hasUserContext;
@property (nonatomic) BOOL isOverridden; // ivar: _isOverridden
@property (retain, nonatomic) ATXPBPredictionLocationMotionContext *locationMotionContext; // ivar: _locationMotionContext
@property (retain, nonatomic) ATXPBPredictionTimeContext *timeContext; // ivar: _timeContext
@property (retain, nonatomic) ATXPBPredictionUserContext *userContext; // ivar: _userContext


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