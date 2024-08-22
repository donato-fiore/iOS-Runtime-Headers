// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHORMODELPBLINKACTIONMETADATA_H
#define ATXANCHORMODELPBLINKACTIONMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ATXAnchorModelPBLaunchHistoryMetadata.h"

@interface ATXAnchorModelPBLinkActionMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *actionHistory; // ivar: _actionHistory
@property (retain, nonatomic) NSString *actionId; // ivar: _actionId
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) BOOL hasActionHistory;
@property (readonly, nonatomic) BOOL hasActionId;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasRelativeTimeSinceAnchorInSeconds;
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