// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPCELLOUTOFSERVICEINFO_H
#define CLPCELLOUTOFSERVICEINFO_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "CLPLocation.h"

@interface CLPCellOutOfServiceInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasHasWifiFallback;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasServiceProviderName;
@property (nonatomic) BOOL hasUniqueCount;
@property (nonatomic) BOOL hasWifiFallback; // ivar: _hasWifiFallback
@property (retain, nonatomic) CLPLocation *location; // ivar: _location
@property (retain, nonatomic) NSString *serviceProviderName; // ivar: _serviceProviderName
@property (nonatomic) BOOL uniqueCount; // ivar: _uniqueCount


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