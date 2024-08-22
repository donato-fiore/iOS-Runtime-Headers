// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAENOTIFICATIONCENTERSERVER_H
#define HAENOTIFICATIONCENTERSERVER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, HAENotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface HAENotificationCenterServer : NSObject <NSXPCListenerDelegate, HAENotificationCenterDelegate>

 {
    NSXPCListener *_xpcListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)verifyInvariants;
-(id)init;
-(void)addHAENotificationEvent:(id)arg0 ;


@end


#endif