// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCICLOUDQUOTAINAPPMESSAGING_H
#define DOCICLOUDQUOTAINAPPMESSAGING_H

@class ICQInAppMessaging;

#import <Foundation/Foundation.h>


@interface DOCICloudQuotaInAppMessaging : NSObject

@property (readonly, nonatomic) ICQInAppMessaging *messaging; // ivar: _messaging


+(id)currentInAppMessageChangedNotification;
+(id)shared;
+(void)preloadICloudQuotaLibrary;
-(id)fetchMessageFromNotification:(id)arg0 ;
-(id)init;
-(void)startObservingUpdates;
-(void)stopObservingUpdates;


@end


#endif