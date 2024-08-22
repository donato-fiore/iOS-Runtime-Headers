// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSOUTGOINGREQUEST_H
#define NMSOUTGOINGREQUEST_H

@class NSData, NSString, NSDictionary, NSSet;
@protocol NMSDeviceTargetable, NMSObfuscatableDescriptionProviding;

#import <Foundation/Foundation.h>

#import "NMSMessageCenter.h"

@interface NMSOutgoingRequest : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *extraIDSOptions; // ivar: _extraIDSOptions
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (weak, nonatomic) NMSMessageCenter *messageCenter; // ivar: _messageCenter
@property (nonatomic) unsigned short messageID; // ivar: _messageID
@property (retain, nonatomic) id *pbRequest; // ivar: _pbRequest
@property (retain, nonatomic) NSDictionary *persistentUserInfo; // ivar: _persistentUserInfo
@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (nonatomic) CGFloat responseTimeout; // ivar: _responseTimeout
@property (nonatomic) CGFloat sendTimeout; // ivar: _sendTimeout
@property (nonatomic) BOOL shouldEncrypt; // ivar: _shouldEncrypt
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *targetDeviceIDs; // ivar: targetDeviceIDs


+(id)requestWithMessageID:(unsigned short)arg0 ;
-(id)CPObfuscatedDescriptionObject;
-(id)init;


@end


#endif