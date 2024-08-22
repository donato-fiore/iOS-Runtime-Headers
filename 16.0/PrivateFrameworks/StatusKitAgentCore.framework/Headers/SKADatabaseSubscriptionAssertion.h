// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKADATABASESUBSCRIPTIONASSERTION_H
#define SKADATABASESUBSCRIPTIONASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKADatabaseSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, nonatomic) NSString *channelIdentifier; // ivar: _channelIdentifier
@property (readonly, nonatomic) NSString *statusTypeIdentifier; // ivar: _statusTypeIdentifier


-(id)initWithChannelIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 applicationIdentifier:(id)arg2 ;
-(id)initWithCoreDataSubscriptionAssertion:(id)arg0 ;


@end


#endif