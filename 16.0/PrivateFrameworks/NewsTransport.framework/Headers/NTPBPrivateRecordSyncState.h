// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPRIVATERECORDSYNCSTATE_H
#define NTPBPRIVATERECORDSYNCSTATE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBDate.h"

@interface NTPBPrivateRecordSyncState : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasLastCleanDate;
@property (readonly, nonatomic) BOOL hasLastDirtyDate;
@property (readonly, nonatomic) BOOL hasRecordName;
@property (readonly, nonatomic) BOOL hasRecordZoneName;
@property (retain, nonatomic) NTPBDate *lastCleanDate; // ivar: _lastCleanDate
@property (retain, nonatomic) NTPBDate *lastDirtyDate; // ivar: _lastDirtyDate
@property (retain, nonatomic) NSString *recordName; // ivar: _recordName
@property (retain, nonatomic) NSString *recordZoneName; // ivar: _recordZoneName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif