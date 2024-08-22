// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLESTATICSYNCCHANGESET_H
#define HDCODABLESTATICSYNCCHANGESET_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HDCodableStaticSyncChangeSet : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *changes; // ivar: _changes


+(id)changeSetWithChanges:(id)arg0 ;
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