// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYSYNCENDRESPONSE_H
#define SYSYNCENDRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SYErrorInfo.h"
#import "SYMessageHeader.h"

@interface SYSyncEndResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SYErrorInfo *error; // ivar: _error
@property (nonatomic) int errorResolution; // ivar: _errorResolution
@property (readonly, nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasErrorResolution;
@property (retain, nonatomic) SYMessageHeader *header; // ivar: _header
@property (retain, nonatomic) NSString *syncID; // ivar: _syncID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)errorResolutionAsString:(int)arg0 ;
-(int)StringAsErrorResolution:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif