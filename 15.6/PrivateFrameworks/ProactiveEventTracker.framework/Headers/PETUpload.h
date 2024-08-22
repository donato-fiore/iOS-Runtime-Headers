// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETUPLOAD_H
#define PETUPLOAD_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;


#import "PETMetadata.h"

@interface PETUpload : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *aggregatedMessages; // ivar: _aggregatedMessages
@property (retain, nonatomic) NSData *compressedData; // ivar: _compressedData
@property (retain, nonatomic) NSData *compressedMessages; // ivar: _compressedMessages
@property (readonly, nonatomic) BOOL hasCompressedData;
@property (readonly, nonatomic) BOOL hasCompressedMessages;
@property (nonatomic) BOOL hasIsCompressed;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL isCompressed; // ivar: _isCompressed
@property (retain, nonatomic) PETMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSMutableArray *unaggregatedMessages; // ivar: _unaggregatedMessages


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)aggregatedMessagesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)unaggregatedMessagesAtIndex:(NSUInteger)arg0 ;
-(void)addAggregatedMessages:(id)arg0 ;
-(void)addUnaggregatedMessages:(id)arg0 ;
-(void)clearAggregatedMessages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif