// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRILOGCONTEXT_H
#define TRILOGCONTEXT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "TRILogTime.h"

@interface TRILogContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) TRILogTime *deviceLogTime; // ivar: _deviceLogTime
@property (retain, nonatomic) TRILogTime *deviceTrackingTime; // ivar: _deviceTrackingTime
@property (readonly, nonatomic) BOOL hasDeviceLogTime;
@property (readonly, nonatomic) BOOL hasDeviceTrackingTime;
@property (nonatomic) BOOL hasProcessEventIndex;
@property (nonatomic) BOOL hasProjectId;
@property (readonly, nonatomic) BOOL hasTrackingId;
@property (nonatomic) NSUInteger processEventIndex; // ivar: _processEventIndex
@property (nonatomic) unsigned int projectId; // ivar: _projectId
@property (retain, nonatomic) NSString *trackingId; // ivar: _trackingId


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