// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNFILESERVER_H
#define SNFILESERVER_H

@class CUFileServer, RPCompanionLinkClient, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SNFileServer : NSObject {
    CUFileServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    RPCompanionLinkClient *_link;
    NSString *_rootDirectory;
}




-(id)initWithRootDirectory:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;


@end


#endif