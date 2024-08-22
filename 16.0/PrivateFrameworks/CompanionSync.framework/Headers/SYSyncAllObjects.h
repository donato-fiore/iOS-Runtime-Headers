// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYSYNCALLOBJECTS_H
#define SYSYNCALLOBJECTS_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "SYMessageHeader.h"

@interface SYSyncAllObjects : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *allObjects; // ivar: _allObjects
@property (retain, nonatomic) SYMessageHeader *header; // ivar: _header
@property (retain, nonatomic) NSString *syncID; // ivar: _syncID
@property (nonatomic) NSUInteger version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)allObjectsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAllObjects:(id)arg0 ;
-(void)clearAllObjects;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif