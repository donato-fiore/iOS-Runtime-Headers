// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPPROTOAUDIOFILEPLAYERSTATUS_H
#define SPPROTOAUDIOFILEPLAYERSTATUS_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface SPProtoAudioFilePlayerStatus : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSData *errorDict; // ivar: _errorDict
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDict;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int status; // ivar: _status


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sockPuppetMessageForPlayerItemSetStatus;
-(id)sockPuppetMessageForQueuePlayerSetStatus;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif