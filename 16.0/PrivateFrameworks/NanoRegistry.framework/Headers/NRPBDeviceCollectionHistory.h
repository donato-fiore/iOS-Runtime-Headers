// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRPBDEVICECOLLECTIONHISTORY_H
#define NRPBDEVICECOLLECTIONHISTORY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NRPBSwitchRecordCollection.h"

@interface NRPBDeviceCollectionHistory : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasStartIndex;
@property (readonly, nonatomic) BOOL hasSwitchRecords;
@property (retain, nonatomic) NSMutableArray *historys; // ivar: _historys
@property (nonatomic) NSInteger startIndex; // ivar: _startIndex
@property (retain, nonatomic) NRPBSwitchRecordCollection *switchRecords; // ivar: _switchRecords


+(Class)historyType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)historyAtIndex:(NSUInteger)arg0 ;
-(void)addHistory:(id)arg0 ;
-(void)clearHistorys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif