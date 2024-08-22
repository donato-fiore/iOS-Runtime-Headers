// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCASYNCDIRECTORYENUMERATOR_H
#define BRCASYNCDIRECTORYENUMERATOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRCRelativePath.h"

@interface BRCAsyncDirectoryEnumerator : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSInteger _batchSize;
    BOOL _isRecursive;
    int _error;
}


@property (readonly, nonatomic) BRCRelativePath *rootPath; // ivar: _rootPath


-(id)initForEnumeratingBelow:(id)arg0 recursive:(BOOL)arg1 batchSize:(NSInteger)arg2 targetQueue:(id)arg3 ;
-(void)dealloc;
// -(void)scheduleWithProcessBlock:(id)arg0 completion:(unk)arg1  ;


@end


#endif