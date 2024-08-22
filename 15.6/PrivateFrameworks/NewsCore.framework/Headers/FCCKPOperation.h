// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCKPOPERATION_H
#define FCCKPOPERATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface FCCKPOperation : PBCodable <NSCopying>

 {
    NSString *_operationUUID;
    int _type;
    BOOL _last;
    BOOL _synchronousMode;
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