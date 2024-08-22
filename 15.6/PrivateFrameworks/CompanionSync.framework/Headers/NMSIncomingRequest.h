// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSINCOMINGREQUEST_H
#define NMSINCOMINGREQUEST_H

@class NSData, NSString, IDSMessageContext;
@protocol NMSDeviceSourced, NMSObfuscatableDescriptionProviding, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "NMSMessageCenter.h"
#import "NMSOutgoingResponse.h"

@interface NMSIncomingRequest : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expectsResponse; // ivar: _expectsResponse
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSMessageContext *idsContext; // ivar: _idsContext
@property (copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (weak, nonatomic) NMSMessageCenter *messageCenter; // ivar: _messageCenter
@property (nonatomic) unsigned short messageID; // ivar: _messageID
@property (retain, nonatomic) id *pbRequest; // ivar: _pbRequest
@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (retain, nonatomic) NMSOutgoingResponse *response; // ivar: _response
@property (retain, nonatomic) NSString *sourceDeviceID; // ivar: sourceDeviceID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


+(BOOL)allowsUnrepliedRequestsForUnitTesting;
+(void)setAllowsUnrepliedRequestsForUnitTesting:(BOOL)arg0 ;
-(id)CPObfuscatedDescriptionObject;
-(id)init;
-(void)configureResponse;
-(void)dealloc;


@end


#endif