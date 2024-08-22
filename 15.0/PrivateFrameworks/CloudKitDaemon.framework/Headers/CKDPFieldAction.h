// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPFIELDACTION_H
#define CKDPFIELDACTION_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPFieldActionDeleteListRange.h"
#import "CKDPFieldActionInsertIntoList.h"
#import "CKDPFieldActionReplaceListRange.h"

@interface CKDPFieldAction : PBCodable <NSCopying>



@property (retain, nonatomic) CKDPFieldActionDeleteListRange *deleteListRange; // ivar: _deleteListRange
@property (readonly, nonatomic) BOOL hasDeleteListRange;
@property (readonly, nonatomic) BOOL hasInsertIntoList;
@property (readonly, nonatomic) BOOL hasReplaceListRange;
@property (retain, nonatomic) CKDPFieldActionInsertIntoList *insertIntoList; // ivar: _insertIntoList
@property (retain, nonatomic) CKDPFieldActionReplaceListRange *replaceListRange; // ivar: _replaceListRange


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