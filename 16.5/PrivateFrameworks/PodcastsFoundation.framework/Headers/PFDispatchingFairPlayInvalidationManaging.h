// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFDISPATCHINGFAIRPLAYINVALIDATIONMANAGING_H
#define PFDISPATCHINGFAIRPLAYINVALIDATIONMANAGING_H

@protocol PFFairPlayInvalidationManaging;

#import <Foundation/Foundation.h>


@interface PFDispatchingFairPlayInvalidationManaging : NSObject <PFFairPlayInvalidationManaging>

 {
    ? responseQueue;
    ? wrappedInstance;
}




+(id)invalidationManager:(id)arg0 receivingCallbacksOnQueue:(id)arg1 ;
-(id)init;
-(id)removeKeyFor:(id)arg0 ;
-(void)invalidateFairPlayKeyFor:(NSInteger)arg0 completion:(id)arg1 ;
-(void)markAllFairPlayKeysForInvalidationWithShouldRemove:(BOOL)arg0 completion:(id)arg1 ;
-(void)markKeyForInvalidationAt:(id)arg0 shouldRemove:(BOOL)arg1 ;
-(void)removalAllFairPlayKeysWithCompletion:(id)arg0 ;


@end


#endif