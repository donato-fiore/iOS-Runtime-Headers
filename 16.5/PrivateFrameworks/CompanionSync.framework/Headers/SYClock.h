// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYCLOCK_H
#define SYCLOCK_H

@class PBCodable;
@protocol NSCopying;


#import "SYPeer.h"

@interface SYClock : PBCodable <NSCopying>



@property (retain, nonatomic) SYPeer *peer; // ivar: _peer
@property (nonatomic) NSUInteger version; // ivar: _version


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)increaseBy:(NSUInteger)arg0 ;
-(NSUInteger)increment;
-(id)_myDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif