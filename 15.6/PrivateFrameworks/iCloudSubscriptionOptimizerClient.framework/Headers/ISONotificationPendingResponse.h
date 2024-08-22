// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISONOTIFICATIONPENDINGRESPONSE_H
#define ISONOTIFICATIONPENDINGRESPONSE_H

@class NSError;

#import <Foundation/Foundation.h>


@interface ISONotificationPendingResponse : NSObject

@property (retain) NSError *error; // ivar: error
@property BOOL isNotificationPending; // ivar: isNotificationPending
@property NSInteger maxDelayTimestampMillis; // ivar: maxDelayTimestampMillis


-(id)init;


@end


#endif