// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITASSISTANTACCESSCONTROL_H
#define AWDHOMEKITASSISTANTACCESSCONTROL_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitAssistantAccessControl : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL hasNumCapableAccessories;
@property (nonatomic) BOOL hasNumEnabledAccessories;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) NSUInteger numCapableAccessories; // ivar: _numCapableAccessories
@property (nonatomic) NSUInteger numEnabledAccessories; // ivar: _numEnabledAccessories
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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