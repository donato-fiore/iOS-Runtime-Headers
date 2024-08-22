// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSTESTINGCOORDINATOR_H
#define SSTESTINGCOORDINATOR_H

@protocol SSTestingCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface SSTestingCoordinator : NSObject

@property (weak, nonatomic) NSObject<SSTestingCoordinatorDelegate> *delegate; // ivar: _delegate


-(void)_delayedHandleRunPPTRequest:(id)arg0 ;
-(void)handleRunPPTRequest:(id)arg0 ;


@end


#endif