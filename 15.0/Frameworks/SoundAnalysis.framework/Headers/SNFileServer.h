// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNFILESERVER_H
#define SNFILESERVER_H

@class RPCompanionLinkClient, NSString, CUFileServer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SNFileServer : NSObject

@property (retain, nonatomic) RPCompanionLinkClient *link; // ivar: _link
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSString *rootDirectory; // ivar: _rootDirectory
@property (retain, nonatomic) CUFileServer *server; // ivar: _server


+(id)createDefaultServer;
-(id)initWithRootDirectory:(id)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;


@end


#endif