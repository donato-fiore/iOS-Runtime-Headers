// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBRESOURCERECORD_H
#define NTPBRESOURCERECORD_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBRecordBase.h"

@interface NTPBResourceRecord : PBCodable <NSCopying>



@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (retain, nonatomic) NSString *encoding; // ivar: _encoding
@property (readonly, nonatomic) BOOL hasBase;
@property (readonly, nonatomic) BOOL hasEncoding;
@property (readonly, nonatomic) BOOL hasMimeType;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (retain, nonatomic) NSString *url; // ivar: _url


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