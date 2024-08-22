// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYFILETRANSFERINFO_H
#define SYFILETRANSFERINFO_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SYMessageHeader.h"

@interface SYFileTransferInfo : PBCodable <NSCopying>



@property (nonatomic) NSUInteger decompressedFileSize; // ivar: _decompressedFileSize
@property (retain, nonatomic) NSString *endAnchor; // ivar: _endAnchor
@property (readonly, nonatomic) BOOL hasEndAnchor;
@property (readonly, nonatomic) BOOL hasStartAnchor;
@property (retain, nonatomic) SYMessageHeader *header; // ivar: _header
@property (retain, nonatomic) NSString *startAnchor; // ivar: _startAnchor


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