// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSPROTOTASKINGSYSTEMMESSAGERECEIPT_H
#define DRSPROTOTASKINGSYSTEMMESSAGERECEIPT_H

@class PBCodable, NSString;
@protocol CKCodeOperationMessageMutation, NSCopying;


#import "DRSProtoTaskingDeviceMetadata.h"

@interface DRSProtoTaskingSystemMessageReceipt : PBCodable <CKCodeOperationMessageMutation, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *channelEnvironment; // ivar: _channelEnvironment
@property (retain, nonatomic) NSString *channelType; // ivar: _channelType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasChannelEnvironment;
@property (readonly, nonatomic) BOOL hasChannelType;
@property (readonly, nonatomic) BOOL hasMessageType;
@property (nonatomic) BOOL hasReceiptDelay;
@property (readonly, nonatomic) BOOL hasTaskingDeviceMetadata;
@property (readonly, nonatomic) BOOL hasUuid;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *messageType; // ivar: _messageType
@property (nonatomic) float receiptDelay; // ivar: _receiptDelay
@property (readonly) Class superclass;
@property (retain, nonatomic) DRSProtoTaskingDeviceMetadata *taskingDeviceMetadata; // ivar: _taskingDeviceMetadata
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif