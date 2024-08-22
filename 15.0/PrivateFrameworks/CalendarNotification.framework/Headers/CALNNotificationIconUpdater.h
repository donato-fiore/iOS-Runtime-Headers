// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNNOTIFICATIONICONUPDATER_H
#define CALNNOTIFICATIONICONUPDATER_H

@protocol CALNIconCache, CALNCalendarIconIdentifierProvider, CALNIconIdentifierVersionProvider, CALNNotificationManager, CALNNotificationStorage;

#import <Foundation/Foundation.h>


@interface CALNNotificationIconUpdater : NSObject

@property (readonly, nonatomic) NSObject<CALNIconCache> *iconCache; // ivar: _iconCache
@property (readonly, nonatomic) NSObject<CALNCalendarIconIdentifierProvider> *iconIdentifierProvider; // ivar: _iconIdentifierProvider
@property (readonly, nonatomic) NSObject<CALNIconIdentifierVersionProvider> *identifierVersionProvider; // ivar: _identifierVersionProvider
@property (readonly, nonatomic) NSObject<CALNNotificationManager> *notificationManager; // ivar: _notificationManager
@property (readonly, nonatomic) NSObject<CALNNotificationStorage> *protectedStorage; // ivar: _protectedStorage


-(id)initWithIconIdentifierVersionProvider:(id)arg0 protectedNotificationStorage:(id)arg1 iconCache:(id)arg2 iconIdentifierProvider:(id)arg3 notificationManager:(id)arg4 ;
-(void)_updateAllIconIdentifiersInStorage:(id)arg0 ;
-(void)updateIconsToNewVersionIfNeeded;


@end


#endif