// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDIDSINCOMINGRESPONSE_H
#define HDIDSINCOMINGRESPONSE_H

@class NSData, NSString, NSDate, NSDictionary, PBCodable;
@protocol HDNanoSyncDescription;

#import <Foundation/Foundation.h>

#import "HDIDSParticipant.h"
#import "HDIDSMessageCenter.h"

@interface HDIDSIncomingResponse : NSObject <HDNanoSyncDescription>

 {
    unsigned short _messageID;
    HDIDSParticipant *_fromParticipant;
    NSData *_data;
    NSString *_idsIdentifier;
    NSString *_requestIDSIdentifier;
    NSDate *_requestSent;
    NSDictionary *_requestPersistentUserInfo;
    HDIDSMessageCenter *_messageCenter;
}


@property (readonly, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDIDSParticipant *fromParticipant;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) unsigned short messageID;
@property (readonly, nonatomic) PBCodable *pbResponse; // ivar: _pbResponse
@property (readonly, copy, nonatomic) NSString *requestIDSIdentifier;
@property (readonly, nonatomic) NSDictionary *requestPersistentUserInfo;
@property (readonly, nonatomic) NSDate *requestSent;
@property (readonly) Class superclass;


-(id)nanoSyncDescription;


@end


#endif