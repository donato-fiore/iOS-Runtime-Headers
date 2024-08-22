// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBNETWORKEVENTGROUP_H
#define NTPBNETWORKEVENTGROUP_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBNetworkEventGroup : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRespondingInstance;
@property (readonly, nonatomic) BOOL hasVia;
@property (retain, nonatomic) NSString *respondingInstance; // ivar: _respondingInstance
@property (retain, nonatomic) NSString *via; // ivar: _via


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif