// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDIDSOUTGOINGRESPONSE_H
#define HDIDSOUTGOINGRESPONSE_H

@class NSString, NSData, PBCodable, NSDictionary;
@protocol HDNanoSyncDescription;

#import <Foundation/Foundation.h>

#import "HDDaemonTransaction.h"
#import "HDIDSMessageCenter.h"
#import "HDIDSParticipant.h"

@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription>

 {
    HDDaemonTransaction *_transaction;
    BOOL _sent;
    unsigned short _requestMessageID;
    unsigned short _messageID;
    NSString *_requestIdsIdentifier;
    HDIDSMessageCenter *_messageCenter;
    HDIDSParticipant *_toParticipant;
    NSString *_idsIdentifier;
}


@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doNotCompress; // ivar: _doNotCompress
@property (nonatomic) BOOL forceLocalDelivery; // ivar: _forceLocalDelivery
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) HDIDSMessageCenter *messageCenter;
@property (readonly, nonatomic) unsigned short messageID;
@property (retain, nonatomic) PBCodable *pbResponse; // ivar: _pbResponse
@property (retain, nonatomic) NSDictionary *persistentUserInfo; // ivar: _persistentUserInfo
@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (readonly, copy, nonatomic) NSString *requestIdsIdentifier;
@property (readonly, nonatomic) unsigned short requestMessageID;
@property (nonatomic) CGFloat sendTimeout; // ivar: _sendTimeout
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDIDSParticipant *toParticipant;


-(id)init;
-(id)nanoSyncDescription;
-(void)configureWithActivationRestore:(id)arg0 syncStore:(id)arg1 ;
-(void)configureWithStatus:(id)arg0 syncStore:(id)arg1 ;
-(void)dealloc;
-(void)send;


@end


#endif