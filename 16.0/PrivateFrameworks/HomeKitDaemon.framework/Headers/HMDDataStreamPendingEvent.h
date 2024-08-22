// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDATASTREAMPENDINGEVENT_H
#define HMDDATASTREAMPENDINGEVENT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HMDDataStreamPendingEvent : NSObject

@property (readonly, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly, nonatomic) NSString *protocol; // ivar: _protocol
@property (readonly, nonatomic) NSString *topic; // ivar: _topic


-(id)initWithProtocol:(id)arg0 topic:(id)arg1 payload:(id)arg2 completion:(id)arg3 ;


@end


#endif