// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSNOTIFICATIONRECORDMAPPER_H
#define UNSNOTIFICATIONRECORDMAPPER_H

@class BSCFBundle;

#import <Foundation/Foundation.h>

#import "UNSNotificationCategoryRepository.h"

@interface UNSNotificationRecordMapper : NSObject {
    BSCFBundle *_bundle;
    UNSNotificationCategoryRepository *_categoryRepository;
}




-(NSUInteger)_notificationInterruptionLevelForNotificationRecord:(id)arg0 ;
-(id)_notificationCommunicationContextForNotificationRecord:(id)arg0 ;
-(id)_notificationContentForNotificationRecord:(id)arg0 ;
-(id)_notificationIconForNotificationRecord:(id)arg0 ;
-(id)_notificationSoundForNotificationRecord:(id)arg0 ;
-(id)_notificationTriggerForNotificationRecord:(id)arg0 ;
-(id)initWithBundle:(id)arg0 categoryRepository:(id)arg1 ;
-(id)notificationForNotificationRecord:(id)arg0 ;
-(id)notificationRequestForNotificationRecord:(id)arg0 ;


@end


#endif