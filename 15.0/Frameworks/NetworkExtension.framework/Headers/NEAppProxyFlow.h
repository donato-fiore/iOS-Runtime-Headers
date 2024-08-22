// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEAPPPROXYFLOW_H
#define NEAPPPROXYFLOW_H

@class NSData, NSString;
@protocol OS_nw_interface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEFlowMetaData.h"

@interface NEAppProxyFlow : NSObject

@property (retain) NSObject<OS_nw_interface> *_networkInterface; // ivar: __networkInterface
@property (retain) NSData *applicationData;
@property *_NEFlow flow; // ivar: _flow
@property BOOL isBound; // ivar: _isBound
@property (readonly) NEFlowMetaData *metaData; // ivar: _metaData
@property (copy) NSObject<OS_nw_interface> *networkInterface;
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) NSString *remoteHostname; // ivar: _remoteHostname


+(id)copyRemoteEndpointFromFlow:(struct _NEFlow *)arg0 ;
+(id)errorForFlowError:(NSInteger)arg0 ;
+(struct __CFError *)convertFlowErrorToCFError:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithNEFlow:(struct _NEFlow *)arg0 queue:(id)arg1 ;
-(void)clearEventHandlers;
-(void)closeReadWithError:(id)arg0 ;
-(void)closeWriteWithError:(id)arg0 ;
-(void)dealloc;
-(void)openWithLocalEndpoint:(id)arg0 completionHandler:(id)arg1 ;
-(void)setMetadata:(id)arg0 ;


@end


#endif