// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNCALANALYTICSHANDLER_H
#define CALNCALANALYTICSHANDLER_H

@class NSString;
@protocol CALNAnalyticsHandler;

#import <Foundation/Foundation.h>


@interface CALNCalAnalyticsHandler : NSObject <CALNAnalyticsHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)recordNotificationResponse:(id)arg0 ;
-(void)recordPostedNotification:(id)arg0 ;


@end


#endif