// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANIDSCONNECTION_H
#define ANIDSCONNECTION_H

@class NSString, NSMutableDictionary, IDSService;
@protocol IDSServiceDelegate, ANIDSConnectionProvider, ANConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ANIDSConnection : NSObject <IDSServiceDelegate, ANIDSConnectionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ANConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *idsQueue; // ivar: _idsQueue
@property (retain, nonatomic) NSMutableDictionary *outgoingMessages; // ivar: _outgoingMessages
@property (readonly, nonatomic) IDSService *service; // ivar: _service
@property (readonly) Class superclass;


+(void)purgeTemporaryFiles;
-(id)init;
-(id)sendMessage:(id)arg0 messageUUIDString:(id)arg1 destination:(id)arg2 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 metadata:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;


@end


#endif