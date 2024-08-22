// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSNOTIFICATIONSETTINGSCONTROLLER_H
#define PSNOTIFICATIONSETTINGSCONTROLLER_H

@class BBSettingsGateway, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PSNotificationSettingsController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BBSettingsGateway *_gateway;
    NSDictionary *_sectionInfosByIdentifier;
}




+(id)sharedInstance;
-(id)allSectionInfoIdentifiers;
-(id)init;
-(id)sectionInfoForIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif