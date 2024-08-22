// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYREJECTEDVERSION_H
#define SYREJECTEDVERSION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SYMessageHeader.h"

@interface SYRejectedVersion : PBCodable <NSCopying>

 {
    ? _supportedVersions;
}


@property (retain, nonatomic) SYMessageHeader *header; // ivar: _header
@property (retain, nonatomic) NSString *inReplyTo; // ivar: _inReplyTo
@property (readonly, nonatomic) *unsigned int supportedVersions;
@property (readonly, nonatomic) NSUInteger supportedVersionsCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)supportedVersionsAtIndex:(NSUInteger)arg0 ;
-(void)addSupportedVersions:(unsigned int)arg0 ;
-(void)clearSupportedVersions;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif