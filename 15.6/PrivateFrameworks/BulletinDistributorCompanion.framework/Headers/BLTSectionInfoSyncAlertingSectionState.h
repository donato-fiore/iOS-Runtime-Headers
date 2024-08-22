// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTSECTIONINFOSYNCALERTINGSECTIONSTATE_H
#define BLTSECTIONINFOSYNCALERTINGSECTIONSTATE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLTSectionInfoSyncAlertingSectionState : NSObject

@property (copy, nonatomic) id *clientCompletion; // ivar: _clientCompletion
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (nonatomic) NSUInteger state; // ivar: _state


-(id)description;


@end


#endif