// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAENOTIFICATIONCENTERCLIENT_H
#define HAENOTIFICATIONCENTERCLIENT_H

@class NSXPCConnection, NSString;
@protocol HAENotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface HAENotificationCenterClient : NSObject <HAENotificationCenterDelegate>

 {
    NSXPCConnection *connection;
    BOOL connectionDidInvalidate;
}


@property (retain, nonatomic) NSString *bundleID; // ivar: bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBundleID:(id)arg0 ;
-(id)setupConnection;
-(void)addHAENotificationEvent:(id)arg0 ;


@end


#endif