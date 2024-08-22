// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPDISTRIBUTEDMESSAGINGASYNCOPERATION_H
#define CPDISTRIBUTEDMESSAGINGASYNCOPERATION_H

@class NSOperation, NSString, NSData, NSThread, NSDictionary, NSError;


#import "CPDistributedMessagingCenter.h"

@interface CPDistributedMessagingAsyncOperation : NSOperation {
    CPDistributedMessagingCenter *_center;
    NSString *_name;
    NSData *_userInfoData;
    NSString *_oolKey;
    NSData *_oolData;
    id *_target;
    SEL _selector;
    *void _context;
    BOOL _makeServer;
    NSThread *_calloutThread;
    NSDictionary *_reply;
    NSError *_error;
}




-(id)initWithCenter:(id)arg0 messageName:(id)arg1 userInfoData:(id)arg2 oolKey:(id)arg3 oolData:(id)arg4 target:(id)arg5 selector:(SEL)arg6 context:(*void)arg7 makeServer:(BOOL)arg8 ;
-(void)_performCallout;
-(void)_releaseSendingData;
-(void)dealloc;
-(void)main;


@end


#endif