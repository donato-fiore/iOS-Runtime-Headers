// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTPBACKINITIALSEQUENCENUMBERREQUEST_H
#define BLTPBACKINITIALSEQUENCENUMBERREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;



@interface BLTPBAckInitialSequenceNumberRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL assert; // ivar: _assert
@property (nonatomic) BOOL hasAssert;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) BOOL hasSessionState;
@property (retain, nonatomic) NSData *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) unsigned int sessionState; // ivar: _sessionState


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