// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIPASSWORDSHARINGSIMULATOR_H
#define WIFIPASSWORDSHARINGSIMULATOR_H

@class SFPasswordSharingService;
@protocol SFPasswordSharingServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WiFiPasswordSharingSimulator : NSObject <SFPasswordSharingServiceDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    SFPasswordSharingService *_service;
    id *_replyHandler;
}




-(BOOL)service:(id)arg0 shouldPromptForNetwork:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)runWithSSID:(id)arg0 reply:(id)arg1 ;
-(void)service:(id)arg0 receivedNetworkInfo:(id)arg1 ;


@end


#endif