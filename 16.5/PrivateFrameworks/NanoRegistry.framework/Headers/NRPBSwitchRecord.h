// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRPBSWITCHRECORD_H
#define NRPBSWITCHRECORD_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NRPBSwitchRecord : PBCodable <NSCopying>

 {
    CGFloat _dateTimeInterval;
    NSData *_deviceIDBytes;
    int _switchIndex;
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