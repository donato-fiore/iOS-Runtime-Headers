// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBAPPCONFIGURATIONRESOURCE_H
#define NTPBAPPCONFIGURATIONRESOURCE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "NTPBDate.h"

@interface NTPBAppConfigurationResource : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (retain, nonatomic) NSData *gzippedConfigurationData; // ivar: _gzippedConfigurationData
@property (readonly, nonatomic) BOOL hasEtag;
@property (readonly, nonatomic) BOOL hasGzippedConfigurationData;
@property (readonly, nonatomic) BOOL hasLastFetchedDate;
@property (readonly, nonatomic) BOOL hasLastModifiedDate;
@property (readonly, nonatomic) BOOL hasLastModifiedString;
@property (nonatomic) BOOL hasMaxAge;
@property (readonly, nonatomic) BOOL hasResourceID;
@property (readonly, nonatomic) BOOL hasSourceURL;
@property (retain, nonatomic) NTPBDate *lastFetchedDate; // ivar: _lastFetchedDate
@property (retain, nonatomic) NTPBDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (retain, nonatomic) NSString *lastModifiedString; // ivar: _lastModifiedString
@property (nonatomic) NSInteger maxAge; // ivar: _maxAge
@property (retain, nonatomic) NSString *resourceID; // ivar: _resourceID
@property (retain, nonatomic) NSString *sourceURL; // ivar: _sourceURL


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