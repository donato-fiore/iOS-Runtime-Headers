// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSPATIALLOOKUPBATCHREQUEST_H
#define GEOSPATIALLOOKUPBATCHREQUEST_H

@class PBRequest, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOSpatialLookupBatchRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_deviceCountryCode;
    NSString *_deviceSku;
    NSMutableArray *_requests;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSString *deviceCountryCode;
@property (retain, nonatomic) NSString *deviceSku;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceSku;
@property (retain, nonatomic) NSMutableArray *requests;


+(BOOL)isValid:(id)arg0 ;
+(Class)requestType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)requestAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addRequest:(id)arg0 ;
-(void)clearRequests;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif