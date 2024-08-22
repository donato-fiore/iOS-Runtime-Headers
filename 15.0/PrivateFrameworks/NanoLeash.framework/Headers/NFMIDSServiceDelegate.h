// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFMIDSSERVICEDELEGATE_H
#define NFMIDSSERVICEDELEGATE_H

@class NSString, NSMutableDictionary;
@protocol IDSServiceDelegate;

#import <Foundation/Foundation.h>


@interface NFMIDSServiceDelegate : NSObject <IDSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *inflightMessages; // ivar: _inflightMessages
@property (retain, nonatomic) NSMutableDictionary *pendingMessages; // ivar: _pendingMessages
@property (readonly) Class superclass;


-(id)_sendProtoBuf:(id)arg0 service:(id)arg1 priority:(NSInteger)arg2 responseIdentifier:(id)arg3 expectsResponse:(BOOL)arg4 ;
-(id)init;
-(id)sendProtoBuf:(id)arg0 service:(id)arg1 priority:(NSInteger)arg2 responseIdentifier:(id)arg3 expectsResponse:(BOOL)arg4 retryCount:(NSInteger)arg5 retryInterval:(CGFloat)arg6 ;
-(void)_enqueueMessage:(id)arg0 service:(id)arg1 priority:(NSInteger)arg2 responseIdentifier:(id)arg3 expectsResponse:(BOOL)arg4 retryCount:(NSInteger)arg5 retryInterval:(CGFloat)arg6 idsIdentifier:(id)arg7 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif