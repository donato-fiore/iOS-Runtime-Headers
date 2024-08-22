// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAUSERNOTIFICATIONINFO_H
#define DAUSERNOTIFICATIONINFO_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DAUserNotificationInfo : NSObject

@property (nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (copy, nonatomic) id *handler; // ivar: _handler




@end


#endif