// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRPLAYBACKSESSIONREQUESTPROTOBUF_H
#define _MRPLAYBACKSESSIONREQUESTPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRPlaybackSessionRequestProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasRequestID;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int length; // ivar: _length
@property (nonatomic) int location; // ivar: _location
@property (retain, nonatomic) NSString *requestID; // ivar: _requestID
@property (retain, nonatomic) NSString *type; // ivar: _type


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