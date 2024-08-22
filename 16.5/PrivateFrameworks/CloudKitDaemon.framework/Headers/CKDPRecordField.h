// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPRECORDFIELD_H
#define CKDPRECORDFIELD_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "CKDPRecordFieldIdentifier.h"
#import "CKDPRecordFieldValue.h"

@interface CKDPRecordField : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *actions; // ivar: _actions
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *identifier; // ivar: _identifier
@property (retain, nonatomic) CKDPRecordFieldValue *value; // ivar: _value


+(Class)actionType;
+(id)emptyFieldWithKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)_CKLogToFileHandle:(id)arg0 atDepth:(int)arg1 ;
-(void)addAction:(id)arg0 ;
-(void)clearActions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif