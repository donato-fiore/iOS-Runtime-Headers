// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRUPDATER_H
#define PRUPDATER_H

@class NSMutableSet, NSMutableArray, NSString;
@protocol PRUpdatingService_toExtension, PRUpdatingDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PRUpdater : NSObject <PRUpdatingService_toExtension>

 {
    id<PRUpdatingDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_lock_connections;
    NSMutableArray *_lock_callOutBlocks;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAcceptConnection:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_dequeueNextCallOutIfPossible;
-(void)_disconnect:(id)arg0 ;
-(void)_enqueueCallOut:(id)arg0 ;
-(void)updateConfiguration:(id)arg0 sessionInfo:(id)arg1 completion:(id)arg2 ;
-(void)updateDescriptors:(id)arg0 sessionInfo:(id)arg1 completion:(id)arg2 ;


@end


#endif