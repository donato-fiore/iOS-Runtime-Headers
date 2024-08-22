// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELLIBRARYTRANSIENTSTATECONTROLLER_H
#define MPMODELLIBRARYTRANSIENTSTATECONTROLLER_H

@class NSOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPModelLibraryTransientStateController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_registeredTransientState;
}




+(id)sharedDeviceLibraryController;
-(NSInteger)transientAddStateForModelObject:(id)arg0 ;
-(NSInteger)transientKeepLocalStateForModelObject:(id)arg0 ;
-(id)init;
-(id)registerTransientAddState:(NSInteger)arg0 forModelObjects:(id)arg1 relatedModelObjects:(id)arg2 ;
-(id)registerTransientKeepLocalState:(NSInteger)arg0 forModelObjects:(id)arg1 relatedModelObjects:(id)arg2 ;
-(void)addOperation:(id)arg0 ;
-(void)performDeleteEntityChangeRequest:(id)arg0 withRelatedModelObjects:(id)arg1 ;
-(void)performDeleteEntityChangeRequest:(id)arg0 withRelatedModelObjects:(id)arg1 completion:(id)arg2 ;
-(void)performKeepLocalChangeRequest:(id)arg0 withRelatedModelObjects:(id)arg1 ;
-(void)performKeepLocalChangeRequest:(id)arg0 withRelatedModelObjects:(id)arg1 completion:(id)arg2 ;
-(void)performLibraryImportChangeRequest:(id)arg0 withRelatedModelObjects:(id)arg1 ;
-(void)performLibraryImportChangeRequest:(id)arg0 withRelatedModelObjects:(id)arg1 completion:(id)arg2 ;
-(void)unregisterTransientState:(id)arg0 ;


@end


#endif