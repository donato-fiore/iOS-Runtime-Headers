// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPLOCATIONCOLLECTIONREQUEST_H
#define CLPLOCATIONCOLLECTIONREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;


#import "CLPAccessoryMeta.h"
#import "CLPMeta.h"

@interface CLPLocationCollectionRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *accessoryLocations; // ivar: _accessoryLocations
@property (retain, nonatomic) CLPAccessoryMeta *accessoryMeta; // ivar: _accessoryMeta
@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) NSMutableArray *appBundleIds; // ivar: _appBundleIds
@property (readonly, nonatomic) BOOL hasAccessoryMeta;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL hasMcc;
@property (nonatomic) BOOL hasMnc;
@property (nonatomic) BOOL hasRat;
@property (retain, nonatomic) NSMutableArray *locations; // ivar: _locations
@property (nonatomic) int mcc; // ivar: _mcc
@property (retain, nonatomic) CLPMeta *meta; // ivar: _meta
@property (nonatomic) int mnc; // ivar: _mnc
@property (nonatomic) int rat; // ivar: _rat
@property (retain, nonatomic) NSString *tripId; // ivar: _tripId


+(Class)accessoryLocationType;
+(Class)locationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)accessoryLocationAtIndex:(NSUInteger)arg0 ;
-(id)appBundleIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addAccessoryLocation:(id)arg0 ;
-(void)addAppBundleIds:(id)arg0 ;
-(void)addLocation:(id)arg0 ;
-(void)clearAccessoryLocations;
-(void)clearAppBundleIds;
-(void)clearLocations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif