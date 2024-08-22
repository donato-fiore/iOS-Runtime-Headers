// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMBFSPRUNINGDELEGATE_H
#define BMBFSPRUNINGDELEGATE_H

@class NSMutableArray, NSString;
@protocol BMStreamDatastorePruningDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BMRegistrar.h"

@interface BMBFSPruningDelegate : NSObject <BMStreamDatastorePruningDelegate>



@property (retain, nonatomic) NSMutableArray *prunedIdentifiables; // ivar: _prunedIdentifiables
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) BMRegistrar *registrar; // ivar: _registrar
@property (readonly, nonatomic) NSString *streamId; // ivar: _streamId


+(id)new;
-(BOOL)shouldHandleDeletions;
-(id)init;
-(id)initWithStreamId:(id)arg0 ;
-(id)initWithStreamId:(id)arg0 registrar:(id)arg1 ;
-(void)didPruneEvents;
-(void)willPruneEvent:(id)arg0 ;


@end


#endif