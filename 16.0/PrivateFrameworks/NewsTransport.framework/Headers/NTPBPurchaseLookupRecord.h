// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPURCHASELOOKUPRECORD_H
#define NTPBPURCHASELOOKUPRECORD_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "NTPBRecordBase.h"

@interface NTPBPurchaseLookupRecord : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *appAdamID; // ivar: _appAdamID
@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (retain, nonatomic) NSMutableArray *bundleChannelTagIDs; // ivar: _bundleChannelTagIDs
@property (retain, nonatomic) NSString *bundleChannelTagIDsVersion; // ivar: _bundleChannelTagIDsVersion
@property (retain, nonatomic) NSMutableArray *channelTagIDs; // ivar: _channelTagIDs
@property (readonly, nonatomic) BOOL hasAppAdamID;
@property (readonly, nonatomic) BOOL hasBase;
@property (readonly, nonatomic) BOOL hasBundleChannelTagIDsVersion;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bundleChannelTagIDsAtIndex:(NSUInteger)arg0 ;
-(id)channelTagIDsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addBundleChannelTagIDs:(id)arg0 ;
-(void)addChannelTagIDs:(id)arg0 ;
-(void)clearBundleChannelTagIDs;
-(void)clearChannelTagIDs;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif