// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOREMOTEADMINAVAILABILITYCHANGEREQUEST_H
#define NPKPROTOREMOTEADMINAVAILABILITYCHANGEREQUEST_H

@class PBRequest;
@protocol NSCopying;



@interface NPKProtoRemoteAdminAvailabilityChangeRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsAvailable;
@property (nonatomic) BOOL isAvailable; // ivar: _isAvailable


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