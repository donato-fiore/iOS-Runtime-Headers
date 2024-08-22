// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDTILEPROVIDER_H
#define TSDTILEPROVIDER_H

@class NSString;
@protocol CALayerDelegate, NSObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSDTileStorage.h"
#import "TSKAccessController.h"

@interface TSDTileProvider : NSObject <CALayerDelegate>

 {
    id<NSObject> *mTarget;
    TSDTileStorage *mTileStorage;
    TSKAccessController *mAccessController;
    NSObject<OS_dispatch_queue> *mQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property ? visibleTileRect; // ivar: mVisibleTileRect


-(BOOL)canTargetDrawInParallel;
-(BOOL)isTargetOpaque;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)contentsInRect:(struct CGRect )arg0 contentsScale:(CGFloat)arg1 forTile:(id)arg2 atLocation:(struct ? )arg3 takingReadLock:(BOOL)arg4 ;
-(id)initWithTarget:(id)arg0 queue:(id)arg1 storage:(id)arg2 accessController:(id)arg3 ;
-(id)p_bucketKey;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawTargetInLayer:(id)arg0 context:(struct CGContext *)arg1 ;
-(void)flush;
// -(void)provideContentsInRect:(struct CGRect )arg0 contentsScale:(CGFloat)arg1 forTile:(id)arg2 atLocation:(struct ? )arg3 inGroup:(id)arg4 limitedBySemaphore:(id)arg5 takingReadLock:(BOOL)arg6 startBlock:(id)arg7 completionBlock:(unk)arg8  ;
-(void)removeStoredImages;


@end


#endif