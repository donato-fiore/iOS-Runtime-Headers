// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RADIOPUSHNOTIFICATIONCONTROLLER_H
#define RADIOPUSHNOTIFICATIONCONTROLLER_H

@class APSConnection, NSString;
@protocol APSConnectionDelegate, RadioPushNotificationControllerDelegate;

#import <Foundation/Foundation.h>


@interface RadioPushNotificationController : NSObject <APSConnectionDelegate>

 {
    APSConnection *_connection;
    NSString *_environment;
    BOOL _pushEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RadioPushNotificationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL notificationsEnabled; // ivar: _notificationsEnabled
@property (readonly) Class superclass;


-(id)_portNameForEnvironmentName:(id)arg0 ;
-(id)init;
-(void)_loadURLBagWithCompletionHandler:(id)arg0 ;
-(void)connection:(id)arg0 didReceiveMessageForTopic:(id)arg1 userInfo:(id)arg2 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)dealloc;


@end


#endif