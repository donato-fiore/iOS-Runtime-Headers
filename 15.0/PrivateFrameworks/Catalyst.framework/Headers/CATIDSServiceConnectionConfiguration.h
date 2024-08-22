// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATIDSSERVICECONNECTIONCONFIGURATION_H
#define CATIDSSERVICECONNECTIONCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface CATIDSServiceConnectionConfiguration : NSObject

@property (nonatomic) CGFloat invitationAcknowledgeTimeout; // ivar: _invitationAcknowledgeTimeout
@property (nonatomic) NSUInteger keepAliveAttemptCount; // ivar: _keepAliveAttemptCount
@property (nonatomic) CGFloat keepAliveCheckinInterval; // ivar: _keepAliveCheckinInterval
@property (nonatomic) NSInteger maxDataSendSize; // ivar: _maxDataSendSize
@property (nonatomic) CGFloat messageQueueFlushPromptInterval; // ivar: _messageQueueFlushPromptInterval
@property (nonatomic) CGFloat missingItemsCheckinInterval; // ivar: _missingItemsCheckinInterval


-(id)init;


@end


#endif