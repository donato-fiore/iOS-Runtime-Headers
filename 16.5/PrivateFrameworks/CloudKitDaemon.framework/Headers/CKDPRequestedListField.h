// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPREQUESTEDLISTFIELD_H
#define CKDPREQUESTEDLISTFIELD_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "CKDPRecordFieldIdentifier.h"

@interface CKDPRequestedListField : PBCodable <NSCopying>



@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldId; // ivar: _fieldId
@property (readonly, nonatomic) BOOL hasFieldId;
@property (retain, nonatomic) NSMutableArray *ranges; // ivar: _ranges


+(Class)rangeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rangeAtIndex:(NSUInteger)arg0 ;
-(void)_CKLogToFileHandle:(id)arg0 atDepth:(int)arg1 ;
-(void)addRange:(id)arg0 ;
-(void)clearRanges;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif