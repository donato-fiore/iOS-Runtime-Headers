// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDATASTREAMPENDINGREQUEST_H
#define HMDDATASTREAMPENDINGREQUEST_H

@class NSNumber, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HMDDataStreamPendingRequest : NSObject

@property (readonly, nonatomic) id *callback; // ivar: _callback
@property (readonly, nonatomic) NSNumber *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly, nonatomic) NSString *protocol; // ivar: _protocol
@property (readonly, nonatomic) NSString *topic; // ivar: _topic


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIdentifier:(id)arg0 protocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 callback:(id)arg4 ;


@end


#endif