// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEAPPPROXYFLOW_H
#define NEAPPPROXYFLOW_H

@class NSData, NSString;
@protocol OS_dispatch_queue, OS_nw_interface;

#import <Foundation/Foundation.h>

#import "NEFlowMetaData.h"

@interface NEAppProxyFlow : NSObject {
    *_NEFlow _flow;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_interface> *__networkInterface;
}


@property (retain) NSData *applicationData;
@property BOOL isBound; // ivar: _isBound
@property (readonly) NEFlowMetaData *metaData; // ivar: _metaData
@property (copy) NSObject<OS_nw_interface> *networkInterface;
@property (readonly) NSString *remoteHostname; // ivar: _remoteHostname


-(NSUInteger)hash;
-(id)description;
-(id)initWithNEFlow:(struct _NEFlow *)arg0 queue:(id)arg1 ;
-(void)closeReadWithError:(id)arg0 ;
-(void)closeWriteWithError:(id)arg0 ;
-(void)dealloc;
-(void)openWithLocalEndpoint:(id)arg0 completionHandler:(id)arg1 ;
-(void)setMetadata:(id)arg0 ;


@end


#endif