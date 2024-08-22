// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APSCHANNELSUBSCRIPTIONFAILURE_H
#define APSCHANNELSUBSCRIPTIONFAILURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APSChannelSubscriptionFailure : NSObject

@property (retain, nonatomic) NSString *channelID; // ivar: _channelID
@property (nonatomic) int failureReason; // ivar: _failureReason


-(id)description;


@end


#endif