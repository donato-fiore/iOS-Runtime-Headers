// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBPRIVATEZONESYNCSTATE_H
#define NTPBPRIVATEZONESYNCSTATE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "NTPBDate.h"

@interface NTPBPrivateZoneSyncState : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *changeToken; // ivar: _changeToken
@property (readonly, nonatomic) BOOL hasChangeToken;
@property (readonly, nonatomic) BOOL hasLastCleanDate;
@property (readonly, nonatomic) BOOL hasLastDirtyDate;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NTPBDate *lastCleanDate; // ivar: _lastCleanDate
@property (retain, nonatomic) NTPBDate *lastDirtyDate; // ivar: _lastDirtyDate
@property (retain, nonatomic) NSString *zoneName; // ivar: _zoneName


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