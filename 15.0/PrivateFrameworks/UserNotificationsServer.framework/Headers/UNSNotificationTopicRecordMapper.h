// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSNOTIFICATIONTOPICRECORDMAPPER_H
#define UNSNOTIFICATIONTOPICRECORDMAPPER_H

@class BSCFBundle;

#import <Foundation/Foundation.h>


@interface UNSNotificationTopicRecordMapper : NSObject {
    BSCFBundle *_bundle;
}




-(id)initWithBundle:(id)arg0 ;
-(id)notificationTopicForNotificationTopicRecord:(id)arg0 ;


@end


#endif