// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSINCOMINGRESPONSE_H
#define NMSINCOMINGRESPONSE_H

@class NSData, NSString, IDSMessageContext, NSDictionary, NSDate;
@protocol NMSDeviceSourced, NMSObfuscatableDescriptionProviding;

#import <Foundation/Foundation.h>


@interface NMSIncomingResponse : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSMessageContext *idsContext; // ivar: _idsContext
@property (copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (nonatomic) unsigned short messageID; // ivar: _messageID
@property (retain, nonatomic) id *pbResponse; // ivar: _pbResponse
@property (copy, nonatomic) NSString *requestIDSIdentifier; // ivar: _requestIDSIdentifier
@property (retain, nonatomic) NSDictionary *requestPersistentUserInfo; // ivar: _requestPersistentUserInfo
@property (retain, nonatomic) NSDate *requestSent; // ivar: _requestSent
@property (retain, nonatomic) NSString *sourceDeviceID; // ivar: sourceDeviceID
@property (readonly) Class superclass;


-(id)CPObfuscatedDescriptionObject;


@end


#endif