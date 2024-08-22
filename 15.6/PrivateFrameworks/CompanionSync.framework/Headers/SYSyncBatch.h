// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYSYNCBATCH_H
#define SYSYNCBATCH_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "SYMessageHeader.h"

@interface SYSyncBatch : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *changes; // ivar: _changes
@property (retain, nonatomic) SYMessageHeader *header; // ivar: _header
@property (nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)changesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addChanges:(id)arg0 ;
-(void)clearChanges;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif