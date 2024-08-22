// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSXPCSERVICECONNECTIONMESSAGEREPLY_H
#define BSXPCSERVICECONNECTIONMESSAGEREPLY_H



#import "BSXPCServiceConnectionMessage.h"

@interface BSXPCServiceConnectionMessageReply : BSXPCServiceConnectionMessage



-(BOOL)sendSynchronously;
-(id)initWithMessage:(id)arg0 ;


@end


#endif