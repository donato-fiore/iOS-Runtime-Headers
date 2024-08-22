// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSXPCSTOREMESSAGECONTEXT_H
#define NSXPCSTOREMESSAGECONTEXT_H

@class NSDictionary, NSError;

#import <Foundation/Foundation.h>

#import "NSXPCStore.h"
#import "NSCoreDataXPCMessage.h"

@interface NSXPCStoreMessageContext : NSObject {
    NSXPCStore *_store;
    NSCoreDataXPCMessage *_message;
    NSDictionary *_result;
    NSError *_error;
}




-(id)initForMessage:(id)arg0 store:(id)arg1 ;
-(void)dealloc;


@end


#endif