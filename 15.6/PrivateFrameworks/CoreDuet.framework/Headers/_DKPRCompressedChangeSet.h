// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKPRCOMPRESSEDCHANGESET_H
#define _DKPRCOMPRESSEDCHANGESET_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface _DKPRCompressedChangeSet : PBCodable <NSCopying>

 {
    NSUInteger _uncompressedLength;
    NSData *_compressedData;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif