// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELPBMODEMETADATA_H
#define ATXANCHORMODELPBMODEMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ATXAnchorModelPBLaunchHistoryMetadata.h"

@interface ATXAnchorModelPBModeMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsStart;
@property (readonly, nonatomic) BOOL hasModeHistory;
@property (readonly, nonatomic) BOOL hasModeId;
@property (nonatomic) BOOL hasRelativeTimeSinceAnchorInSeconds;
@property (nonatomic) BOOL isStart; // ivar: _isStart
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *modeHistory; // ivar: _modeHistory
@property (retain, nonatomic) NSString *modeId; // ivar: _modeId
@property (nonatomic) int relativeTimeSinceAnchorInSeconds; // ivar: _relativeTimeSinceAnchorInSeconds


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