// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCCODABLECHANGE_H
#define HDCLOUDSYNCCODABLECHANGE_H

@class PBCodable;
@protocol NSCopying;


#import "HDCodableSyncAnchorRangeMap.h"

@interface HDCloudSyncCodableChange : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HDCodableSyncAnchorRangeMap *anchorRangeMap; // ivar: _anchorRangeMap
@property (nonatomic) NSInteger changeIndex; // ivar: _changeIndex
@property (nonatomic) NSInteger changeSize; // ivar: _changeSize
@property (nonatomic) BOOL finalForSequence; // ivar: _finalForSequence
@property (readonly, nonatomic) BOOL hasAnchorRangeMap;
@property (nonatomic) BOOL hasChangeIndex;
@property (nonatomic) BOOL hasChangeSize;
@property (nonatomic) BOOL hasFinalForSequence;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) NSInteger protocolVersion; // ivar: _protocolVersion


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