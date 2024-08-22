// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKPREVENT_H
#define _DKPREVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "_DKPRSource.h"
#import "_DKPRStream.h"
#import "_DKPRValue.h"

@interface _DKPREvent : PBCodable <NSCopying>

 {
    CGFloat _creationDate;
    CGFloat _endDate;
    CGFloat _startDate;
    NSString *_identifier;
    NSMutableArray *_metadatas;
    _DKPRSource *_source;
    _DKPRStream *_stream;
    _DKPRValue *_value;
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