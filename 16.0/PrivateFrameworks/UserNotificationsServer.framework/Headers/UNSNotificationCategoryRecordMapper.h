// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSNOTIFICATIONCATEGORYRECORDMAPPER_H
#define UNSNOTIFICATIONCATEGORYRECORDMAPPER_H

@class BSCFBundle;

#import <Foundation/Foundation.h>


@interface UNSNotificationCategoryRecordMapper : NSObject {
    BSCFBundle *_bundle;
}




-(id)initWithBundle:(id)arg0 ;
-(id)notificationActionForNotificationActionRecord:(id)arg0 ;
-(id)notificationCategoryForNotificationCategoryRecord:(id)arg0 ;


@end


#endif