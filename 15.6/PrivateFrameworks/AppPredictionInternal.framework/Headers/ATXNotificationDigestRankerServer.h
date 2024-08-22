// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONDIGESTRANKERSERVER_H
#define ATXNOTIFICATIONDIGESTRANKERSERVER_H

@class NSXPCListener, NSString;
@protocol ATXNotificationDigestRankerInterface, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface ATXNotificationDigestRankerServer : NSObject <ATXNotificationDigestRankerInterface, NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)appsSortedByNotificationsReceivedInPreviousNumDays:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)generateDigestForNotificationStacks:(id)arg0 reply:(id)arg1 ;
-(void)numberOfActiveNotificationsWithCompletionHandler:(id)arg0 ;


@end


#endif