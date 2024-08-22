// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCALLINFOBLOB_H
#define VCCALLINFOBLOB_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface VCCallInfoBlob : PBCodable <NSCopying>



@property (nonatomic) unsigned int callID; // ivar: _callID
@property (nonatomic) unsigned int clientVersion; // ivar: _clientVersion
@property (retain, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (retain, nonatomic) NSString *frameworkVersion; // ivar: _frameworkVersion
@property (retain, nonatomic) NSString *osVersion; // ivar: _osVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)stringForCheckpoint;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif