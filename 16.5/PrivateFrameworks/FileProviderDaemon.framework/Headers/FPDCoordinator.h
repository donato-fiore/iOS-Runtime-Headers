// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDCOORDINATOR_H
#define FPDCOORDINATOR_H

@class NSMutableSet, NSFileCoordinator, NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPDExtensionManager.h"

@interface FPDCoordinator : NSObject {
    NSMutableSet *_currentlyAccessedURLs;
    NSFileCoordinator *_fileCoordinator;
    NSOperationQueue *_coordinationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, weak, nonatomic) FPDExtensionManager *extensionManager; // ivar: _extensionManager


+(id)requestForClaimID:(id)arg0 ;
-(id)_readingIntentWithURL:(id)arg0 materializeOption:(NSUInteger)arg1 ;
-(id)initWithExtensionManager:(id)arg0 callbackQueue:(id)arg1 ;
-(void)cancel;
-(void)coordinateAtURL:(id)arg0 recursively:(BOOL)arg1 request:(id)arg2 handler:(id)arg3 ;
-(void)coordinateForCopyingFromURL:(id)arg0 toURL:(id)arg1 request:(id)arg2 handler:(id)arg3 ;
-(void)coordinateForMovingFromURL:(id)arg0 toURL:(id)arg1 request:(id)arg2 handler:(id)arg3 ;
-(void)coordinateForMovingFromURL:(id)arg0 toURL:(id)arg1 toTargetFolderURL:(id)arg2 targetMaterializeOption:(NSUInteger)arg3 sourceMaterializeOption:(NSUInteger)arg4 request:(id)arg5 handler:(id)arg6 ;
-(void)dealloc;
-(void)resolveItem:(id)arg0 completion:(id)arg1 ;
-(void)resolveItem:(id)arg0 recursively:(BOOL)arg1 request:(id)arg2 andCoordinateWithHandler:(id)arg3 ;
-(void)resolveItemOrURL:(id)arg0 recursively:(BOOL)arg1 coordinateIfExport:(BOOL)arg2 request:(id)arg3 handler:(id)arg4 ;
-(void)resolveItemOrURL:(id)arg0 recursively:(BOOL)arg1 request:(id)arg2 andCoordinateWithHandler:(id)arg3 ;
-(void)startAccessingURLForAtomDuration:(id)arg0 ;
-(void)stopAccessingAllURLs;
-(void)stopAccessingURL:(id)arg0 ;


@end


#endif