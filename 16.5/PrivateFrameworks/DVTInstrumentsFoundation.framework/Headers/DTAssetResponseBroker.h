// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTASSETRESPONSEBROKER_H
#define DTASSETRESPONSEBROKER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DTAssetResponseBroker : NSObject

@property (retain, nonatomic) NSMutableDictionary *activeHandlers; // ivar: _activeHandlers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activeHandlersQueue; // ivar: _activeHandlersQueue


+(id)sharedBroker;
-(BOOL)canContinueServingRequestWithIdentifier:(id)arg0 ;
-(id)activeHandlerWithIdentifier:(id)arg0 ;
-(id)init;
-(void)forwardMessage:(id)arg0 ;
-(void)registerHandler:(id)arg0 ;
-(void)unregisterHandler:(id)arg0 ;


@end


#endif