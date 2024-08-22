// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NGMPBDEVICEPREKEY_H
#define NGMPBDEVICEPREKEY_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "NGMPBP256Key.h"

@interface NGMPBDevicePreKey : PBCodable <NSCopying>



@property (retain, nonatomic) NGMPBP256Key *dhKey; // ivar: _dhKey
@property (readonly, nonatomic) BOOL hasDhKey;
@property (retain, nonatomic) NSData *prekeySignature; // ivar: _prekeySignature
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


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