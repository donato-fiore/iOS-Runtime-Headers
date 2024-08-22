// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISCENECONNECTIONOPTIONS_H
#define UISCENECONNECTIONOPTIONS_H

@class NSSet, FBSScene, NSDictionary, FBSSceneSpecification, CKShareMetadata, NSString, UNNotificationResponse;

#import <Foundation/Foundation.h>

#import "UIApplicationShortcutItem.h"

@interface UISceneConnectionOptions : NSObject

@property (readonly, copy, nonatomic) NSSet *URLContexts;
@property (readonly, weak, nonatomic) FBSScene *_fbsScene; // ivar: _fbsScene
@property (readonly, nonatomic) NSDictionary *_launchOptionsDictionary; // ivar: _launchOptionsDictionary
@property (readonly, weak, nonatomic) FBSSceneSpecification *_specification; // ivar: _specification
@property (readonly, nonatomic) CKShareMetadata *cloudKitShareMetadata;
@property (readonly, nonatomic) NSString *handoffUserActivityType;
@property (readonly, nonatomic) UNNotificationResponse *notificationResponse;
@property (readonly, nonatomic) UIApplicationShortcutItem *shortcutItem;
@property (readonly, nonatomic) NSString *sourceApplication;
@property (readonly, copy, nonatomic) NSSet *userActivities;


-(id)_initWithConnectionOptionsContext:(id)arg0 fbsScene:(id)arg1 specification:(id)arg2 ;
-(id)description;


@end


#endif