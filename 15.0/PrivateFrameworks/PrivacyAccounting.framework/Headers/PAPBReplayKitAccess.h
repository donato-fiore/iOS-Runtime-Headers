// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAPBREPLAYKITACCESS_H
#define PAPBREPLAYKITACCESS_H

@class PBCodable;
@protocol NSCopying;


#import "PAPBAccess.h"
#import "PAPBApplication.h"

@interface PAPBReplayKitAccess : PBCodable <NSCopying>



@property (retain, nonatomic) PAPBAccess *access; // ivar: _access
@property (retain, nonatomic) PAPBApplication *broadcaster; // ivar: _broadcaster
@property (readonly, nonatomic) BOOL hasAccess;
@property (readonly, nonatomic) BOOL hasBroadcaster;


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