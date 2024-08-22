// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDIDSOUTGOINGREQUEST_H
#define HDIDSOUTGOINGREQUEST_H

@class NSString, NSData, PBCodable, NSDictionary;
@protocol HDNanoSyncDescription;

#import <Foundation/Foundation.h>

#import "HDIDSMessageCenter.h"
#import "HDIDSParticipant.h"

@interface HDIDSOutgoingRequest : NSObject <HDNanoSyncDescription>

 {
    NSString *_idsIdentifier;
    HDIDSMessageCenter *_messageCenter;
}


@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doNotCompress; // ivar: _doNotCompress
@property (nonatomic) BOOL forceLocalDelivery; // ivar: _forceLocalDelivery
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) unsigned short messageID; // ivar: _messageID
@property (retain, nonatomic) PBCodable *pbRequest; // ivar: _pbRequest
@property (retain, nonatomic) NSDictionary *persistentUserInfo; // ivar: _persistentUserInfo
@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (nonatomic) BOOL queueOnly1; // ivar: _queueOnly1
@property (nonatomic) CGFloat responseTimeout; // ivar: _responseTimeout
@property (nonatomic) CGFloat sendTimeout; // ivar: _sendTimeout
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDIDSParticipant *toParticipant; // ivar: _toParticipant


+(id)activationRequestWithRestore:(id)arg0 syncStore:(id)arg1 ;
+(id)changeRequestWithChangeSet:(id)arg0 status:(id)arg1 syncStore:(id)arg2 ;
+(id)requestWithMessageID:(unsigned short)arg0 participant:(id)arg1 ;
+(id)speculativeChangeRequestWithChangeSet:(id)arg0 syncStore:(id)arg1 ;
-(id)init;
-(id)nanoSyncDescription;


@end


#endif