// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCHANNELUPSELLTRIGGER_H
#define FCCHANNELUPSELLTRIGGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCChannelUpsellTrigger : NSObject

@property (copy, nonatomic) NSString *nonSubscriberUpsellArticleID; // ivar: _nonSubscriberUpsellArticleID
@property (copy, nonatomic) NSString *subscriberUpsellArticleID; // ivar: _subscriberUpsellArticleID
@property (nonatomic) NSInteger triggerCount; // ivar: _triggerCount
@property (nonatomic) NSUInteger triggerMethod; // ivar: _triggerMethod


-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif