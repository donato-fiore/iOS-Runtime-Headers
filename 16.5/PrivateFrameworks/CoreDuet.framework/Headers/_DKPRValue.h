// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKPRVALUE_H
#define _DKPRVALUE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "_DKPRValueType.h"

@interface _DKPRValue : PBCodable <NSCopying>

 {
    CGFloat _dateValue;
    CGFloat _doubleValue;
    NSInteger _integerValue;
    NSData *_blobValue;
    NSString *_stringValue;
    _DKPRValueType *_type;
    ? _has;
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