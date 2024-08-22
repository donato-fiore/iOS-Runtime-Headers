// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASKVOHANDLER_H
#define _PASKVOHANDLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _PASKVOHandler : NSObject {
    _opaque_pthread_mutex_t _lock;
    NSMutableArray *_tasks;
}




-(id)init;
-(void)_watchKeyPath:(id)arg0 ofObject:(id)arg1 options:(NSUInteger)arg2 usingTask:(id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reactAfterChangesToKeyPath:(id)arg0 ofObject:(id)arg1 usingBlock:(id)arg2 ;
// -(void)reactAsynchronouslyAfterChangesToKeyPath:(id)arg0 ofObject:(id)arg1 usingBlock:(id)arg2 onQueue:(unk)arg3  ;
-(void)reactBeforeAndAfterChangesToKeyPath:(id)arg0 ofObject:(id)arg1 usingBlock:(id)arg2 ;


@end


#endif