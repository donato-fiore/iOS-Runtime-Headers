// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCQUEUECONTROLLERREGISTRY_H
#define _MPCQUEUECONTROLLERREGISTRY_H

@class MPProtocolProxy<MPCQueueControllerPublisher>, NSMapTable;

#import <Foundation/Foundation.h>


@interface _MPCQueueControllerRegistry : NSObject

@property (readonly, nonatomic) MPProtocolProxy<MPCQueueControllerPublisher> *publisherProxy; // ivar: _publisherProxy
@property (readonly, copy, nonatomic) NSMapTable *transportableExtensions; // ivar: _transportableExtensions


+(id)shared;
-(id)init;


@end


#endif