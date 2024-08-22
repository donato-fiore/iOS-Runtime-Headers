// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAPSMACHSERVICECONNECTIONDELEGATE_H
#define CKAPSMACHSERVICECONNECTIONDELEGATE_H

@class APSConnection, NSString;
@protocol APSConnectionDelegate;

#import <Foundation/Foundation.h>

#import "CKAPSMachServiceConnectionKey.h"

@interface CKAPSMachServiceConnectionDelegate : NSObject <APSConnectionDelegate>



@property (weak, nonatomic) APSConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CKAPSMachServiceConnectionKey *key; // ivar: _key
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 key:(id)arg1 ;
-(void)connection:(id)arg0 didChangeConnectedStatus:(BOOL)arg1 ;
-(void)connection:(id)arg0 didFailToSendOutgoingMessage:(id)arg1 error:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveMessageForTopic:(id)arg1 userInfo:(id)arg2 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(void)connection:(id)arg0 didSendOutgoingMessage:(id)arg1 ;
-(void)connectionDidReconnect:(id)arg0 ;


@end


#endif