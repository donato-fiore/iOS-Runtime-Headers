// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKPROTOMAILBOXSELECTION_H
#define NNMKPROTOMAILBOXSELECTION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NNMKProtoMailboxSelection : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (nonatomic) BOOL hasFullSyncVersion;
@property (retain, nonatomic) NSMutableArray *mailboxes; // ivar: _mailboxes


+(id)protoMailboxSelectionFromMailboxSelection:(id)arg0 fullSyncVersion:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mailboxSelection;
-(id)mailboxesAtIndex:(NSUInteger)arg0 ;
-(void)addMailboxes:(id)arg0 ;
-(void)clearMailboxes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif