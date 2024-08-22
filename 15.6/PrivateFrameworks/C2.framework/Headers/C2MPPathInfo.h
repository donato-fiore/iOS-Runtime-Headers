// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef C2MPPATHINFO_H
#define C2MPPATHINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface C2MPPathInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger applicationBytesReceived; // ivar: _applicationBytesReceived
@property (nonatomic) NSUInteger applicationBytesSent; // ivar: _applicationBytesSent
@property (nonatomic) BOOL hasApplicationBytesReceived;
@property (nonatomic) BOOL hasApplicationBytesSent;
@property (readonly, nonatomic) BOOL hasInterfaceType;
@property (readonly, nonatomic) BOOL hasRadioType;
@property (retain, nonatomic) NSString *interfaceType; // ivar: _interfaceType
@property (retain, nonatomic) NSString *radioType; // ivar: _radioType


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