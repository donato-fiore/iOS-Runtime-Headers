// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDIDSINCOMINGREQUEST_H
#define HDIDSINCOMINGREQUEST_H

@class NSString, NSData, PBCodable;
@protocol HDNanoSyncDescription;

#import <Foundation/Foundation.h>

#import "HDIDSParticipant.h"
#import "HDIDSOutgoingResponse.h"
#import "HDIDSMessageCenter.h"

@interface HDIDSIncomingRequest : NSObject <HDNanoSyncDescription>

 {
    id *_pbRequest;
    BOOL _expectsResponse;
    unsigned short _messageID;
    HDIDSParticipant *_fromParticipant;
    NSString *_idsIdentifier;
    NSData *_data;
    NSUInteger _priority;
    HDIDSOutgoingResponse *_response;
    HDIDSMessageCenter *_messageCenter;
}


@property (readonly, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL expectsResponse;
@property (readonly, nonatomic) HDIDSParticipant *fromParticipant;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) unsigned short messageID;
@property (readonly, nonatomic) PBCodable *pbRequest;
@property (readonly, nonatomic) NSUInteger priority;
@property (readonly, nonatomic) HDIDSOutgoingResponse *response;
@property (readonly) Class superclass;


-(id)nanoSyncDescription;
-(void)dealloc;


@end


#endif