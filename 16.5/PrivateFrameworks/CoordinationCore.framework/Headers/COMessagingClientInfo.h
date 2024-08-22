// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMESSAGINGCLIENTINFO_H
#define COMESSAGINGCLIENTINFO_H

@class NSSet, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "COCoordinationServiceClient.h"

@interface COMessagingClientInfo : NSObject

@property (readonly, weak, nonatomic) COCoordinationServiceClient *client; // ivar: _client
@property (readonly, copy, nonatomic) id *cluster; // ivar: _cluster
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) NSSet *handledClasses; // ivar: _handledClasses
@property (readonly, retain, nonatomic) NSMutableDictionary *sessions; // ivar: _sessions
@property (readonly, copy, nonatomic) NSString *topic; // ivar: _topic


-(id)initWithTopic:(id)arg0 cluster:(id)arg1 handledClasses:(id)arg2 client:(id)arg3 activateCompletionHanlder:(id)arg4 ;


@end


#endif