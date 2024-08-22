// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICLLREVISIONHASH_H
#define _ICLLREVISIONHASH_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _ICLLRevisionHash : PBCodable <NSCopying>

 {
    NSString *_hashValue;
    int _revision;
    int _type;
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