// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONREQUESTCUSTOMCONTENTPROVIDER_H
#define NCNOTIFICATIONREQUESTCUSTOMCONTENTPROVIDER_H

@class NSString;
@protocol NCNotificationCustomContentProviding;

#import <Foundation/Foundation.h>

#import "NCNotificationContentContainerViewController.h"

@interface NCNotificationRequestCustomContentProvider : NSObject <NCNotificationCustomContentProviding>

 {
    NCNotificationContentContainerViewController *_customContentViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)customContentViewControllerForNotificationRequest:(id)arg0 ;


@end


#endif