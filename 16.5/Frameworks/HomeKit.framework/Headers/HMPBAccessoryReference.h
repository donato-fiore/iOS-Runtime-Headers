// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMPBACCESSORYREFERENCE_H
#define HMPBACCESSORYREFERENCE_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "HMPBHomeReference.h"

@interface HMPBAccessoryReference : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasHomeReference;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (retain, nonatomic) HMPBHomeReference *homeReference; // ivar: _homeReference
@property (retain, nonatomic) NSData *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)accessoryReferenceWithAccessory:(id)arg0 ;
+(id)accessoryReferenceWithData:(id)arg0 ;
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