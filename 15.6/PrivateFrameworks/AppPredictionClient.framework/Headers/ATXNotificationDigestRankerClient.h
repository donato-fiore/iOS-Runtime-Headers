// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONDIGESTRANKERCLIENT_H
#define ATXNOTIFICATIONDIGESTRANKERCLIENT_H

@class NSXPCConnection, NSString;
@protocol ATXNotificationDigestRankerInterface;

#import <Foundation/Foundation.h>


@interface ATXNotificationDigestRankerClient : NSObject <ATXNotificationDigestRankerInterface>

 {
    NSXPCConnection *_xpcConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)appsSortedByNotificationsReceivedInPreviousNumDays:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)generateDigestForNotificationStacks:(id)arg0 reply:(id)arg1 ;
-(void)numberOfActiveNotificationsWithCompletionHandler:(id)arg0 ;


@end


#endif