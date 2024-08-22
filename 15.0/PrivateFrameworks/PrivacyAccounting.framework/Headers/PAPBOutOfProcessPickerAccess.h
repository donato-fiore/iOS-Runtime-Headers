// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAPBOUTOFPROCESSPICKERACCESS_H
#define PAPBOUTOFPROCESSPICKERACCESS_H

@class PBCodable;
@protocol NSCopying;


#import "PAPBAccess.h"

@interface PAPBOutOfProcessPickerAccess : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) PAPBAccess *access; // ivar: _access
@property (readonly, nonatomic) BOOL hasAccess;
@property (nonatomic) BOOL hasPickerType;
@property (nonatomic) int pickerType; // ivar: _pickerType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif