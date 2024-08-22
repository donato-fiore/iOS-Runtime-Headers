// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKPRSTREAM_H
#define _DKPRSTREAM_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_DKPRValueType.h"

@interface _DKPRStream : PBCodable <NSCopying>

 {
    NSString *_name;
    _DKPRValueType *_type;
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