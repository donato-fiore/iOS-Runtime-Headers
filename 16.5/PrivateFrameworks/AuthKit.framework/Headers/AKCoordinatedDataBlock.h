// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKCOORDINATEDDATABLOCK_H
#define AKCOORDINATEDDATABLOCK_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface AKCoordinatedDataBlock : NSObject {
    id *_block;
    id *_completionHandler;
    BOOL _started;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_group> *_group;
}




+(id)startCoordinatingBlock:(id)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(void)_callCompletionWithData:(id)arg0 error:(id)arg1 ;
-(void)_start;
-(void)setCompletion:(id)arg0 ;
-(void)start;


@end


#endif