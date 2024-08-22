// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYLOGDEVICESTATE_H
#define SYLOGDEVICESTATE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SYLogDeviceState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (readonly, nonatomic) BOOL hasDeviceClass;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasState;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) unsigned int state; // ivar: _state


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