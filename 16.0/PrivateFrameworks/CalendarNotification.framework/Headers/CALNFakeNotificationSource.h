// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNFAKENOTIFICATIONSOURCE_H
#define CALNFAKENOTIFICATIONSOURCE_H

@class NSArray, NSString;
@protocol CALNNotificationSource, CALNCalendarIconIdentifierProvider, CALNNotificationManager;

#import <Foundation/Foundation.h>


@interface CALNFakeNotificationSource : NSObject <CALNNotificationSource>



@property (readonly, nonatomic) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CALNCalendarIconIdentifierProvider> *iconIdentifierProvider; // ivar: _iconIdentifierProvider
@property (readonly, nonatomic) NSObject<CALNNotificationManager> *notificationManager; // ivar: _notificationManager
@property (readonly, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly) Class superclass;


+(id)_activeSources;
+(id)_activeSourcesQueue;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg0 ;
-(id)initWithNotificationManager:(id)arg0 iconIdentifierProvider:(id)arg1 sourceIdentifierSuffix:(id)arg2 ;
-(void)didReceiveResponse:(id)arg0 ;
-(void)postFakeNotification;
-(void)refreshNotifications:(id)arg0 ;


@end


#endif