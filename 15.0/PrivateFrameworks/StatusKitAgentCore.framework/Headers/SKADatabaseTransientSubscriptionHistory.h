// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKADATABASETRANSIENTSUBSCRIPTIONHISTORY_H
#define SKADATABASETRANSIENTSUBSCRIPTIONHISTORY_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface SKADatabaseTransientSubscriptionHistory : NSObject

@property (readonly, nonatomic) NSString *channelIdentifier; // ivar: _channelIdentifier
@property (readonly, nonatomic) NSDate *lastSubscriptionDate; // ivar: _lastSubscriptionDate


-(id)initWithChannelIdentifier:(id)arg0 lastSubscriptionDate:(id)arg1 ;
-(id)initWithCoreDataTransientSubscriptionHistory:(id)arg0 ;


@end


#endif