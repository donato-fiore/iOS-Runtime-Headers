// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDXPCEVENTSUBSCRIBER_H
#define _CDXPCEVENTSUBSCRIBER_H

@class NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface _CDXPCEventSubscriber : NSObject

@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSString *streamName; // ivar: _streamName
@property (readonly, nonatomic) NSUInteger token; // ivar: _token
@property (readonly, nonatomic) unsigned int uid; // ivar: _uid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithToken:(NSUInteger)arg0 descriptor:(id)arg1 userID:(unsigned int)arg2 streamName:(id)arg3 ;


@end


#endif