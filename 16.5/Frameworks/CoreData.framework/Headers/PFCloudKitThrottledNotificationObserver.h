// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITTHROTTLEDNOTIFICATIONOBSERVER_H
#define PFCLOUDKITTHROTTLEDNOTIFICATIONOBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PFCloudKitThrottledNotificationObserver : NSObject {
    uint8_t _notificationIteration;
    NSString *_assertionLabel;
    NSString *_label;
    NSInteger _notificationStalenessInterval;
    id *_notificationHandlerBlock;
}




-(id)initWithLabel:(id)arg0 handlerBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif