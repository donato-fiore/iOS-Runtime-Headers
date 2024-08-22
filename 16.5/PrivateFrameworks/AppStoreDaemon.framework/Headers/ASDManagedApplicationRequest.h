// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDMANAGEDAPPLICATIONREQUEST_H
#define ASDMANAGEDAPPLICATIONREQUEST_H

@class NSXPCConnection, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;


#import "ASDBaseClient.h"
#import "ASDManagedApplicationRequestOptions.h"

@interface ASDManagedApplicationRequest : ASDBaseClient <NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDManagedApplicationRequestOptions *_options;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithOptions:(id)arg0 ;
-(void)dealloc;
-(void)sendRequestWithCompletionBlock:(id)arg0 ;


@end


#endif