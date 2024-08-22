// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IKJSINSPECTORNETWORKLOADER_H
#define _IKJSINSPECTORNETWORKLOADER_H

@class NSString, RWIProtocolNetworkDomainEventDispatcher, NSMutableDictionary;
@protocol IKNetworkRequestLoader;

#import <Foundation/Foundation.h>

#import "IKJSInspectorNetworkAgent.h"

@interface _IKJSInspectorNetworkLoader : NSObject <IKNetworkRequestLoader>



@property (readonly, weak, nonatomic) IKJSInspectorNetworkAgent *agent; // ivar: _agent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) RWIProtocolNetworkDomainEventDispatcher *dispatcher; // ivar: _dispatcher
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *parentIdentifier; // ivar: _parentIdentifier
@property (readonly, nonatomic) NSMutableDictionary *requestRecords; // ivar: _requestRecords
@property (readonly) Class superclass;


-(CGFloat)currentTimeIntervalSince1970;
-(id)_recordForResource:(NSInteger)arg0 withInitiator:(NSInteger)arg1 synchronousOperation:(BOOL)arg2 ;
-(id)initWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 agent:(id)arg2 dispatcher:(id)arg3 ;
-(id)recordForResource:(NSInteger)arg0 withInitiator:(NSInteger)arg1 ;
-(void)dispatchEventWithBlock:(id)arg0 ;


@end


#endif