// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOASSERTIONREQUEST_H
#define NPKPROTOASSERTIONREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NPKProtoAssertionRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int assertionType; // ivar: _assertionType
@property (nonatomic) BOOL hasAssertionType;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending; // ivar: _pending
@property (retain, nonatomic) NSString *requestUUIDString; // ivar: _requestUUIDString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)assertionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAssertionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif