// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCEMULATEDNETWORK_H
#define VCEMULATEDNETWORK_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "VCEmulatedOutputQueue.h"

@interface VCEmulatedNetwork : NSObject {
    NSDictionary *_policies;
    VCEmulatedOutputQueue *_outputQueue;
}


@property (readonly, nonatomic) unsigned int numberOfPacketsWaitingInOutputQueue; // ivar: _numberOfPacketsWaitingInOutputQueue
@property (copy, nonatomic) id *popCompletionHandler; // ivar: _popCompletionHandler
@property (copy, nonatomic) id *pushCompletionHandler; // ivar: _pushCompletionHandler


-(id)copyPacketFromPop;
-(id)initWithPolicies:(id)arg0 ;
-(void)dealloc;
-(void)push:(id)arg0 ;
-(void)runUntilTime:(CGFloat)arg0 ;


@end


#endif