// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOMPANIONLINKCLIENT_H
#define HMDCOMPANIONLINKCLIENT_H

@class RPCompanionLinkClient, NSString;
@protocol HMDCompanionLinkClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDCompanionLinkClient : NSObject <HMDCompanionLinkClient>



@property (retain, nonatomic) RPCompanionLinkClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *deviceChangedHandler;
@property (copy, nonatomic) id *deviceFoundHandler;
@property (copy, nonatomic) id *deviceLostHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif