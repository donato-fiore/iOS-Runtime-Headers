// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPREADCOMPLETIONINFO_H
#define TSPREADCOMPLETIONINFO_H

@class NSArray;
@protocol TSPReadCoordinator;

#import <Foundation/Foundation.h>

#import "TSPFinalizeHandlerQueue.h"

@interface TSPReadCompletionInfo : NSObject {
    NSArray *_objects;
}


@property (readonly, nonatomic) TSPFinalizeHandlerQueue *finalizeHandlerQueue; // ivar: _finalizeHandlerQueue
@property (readonly, nonatomic) NSObject<TSPReadCoordinator> *readCoordinator; // ivar: _readCoordinator


-(id)initWithObjects:(id)arg0 readCoordinator:(id)arg1 finalizeHandlerQueue:(id)arg2 ;
-(id)readObjectWithIdentifier:(NSInteger)arg0 ;


@end


#endif