// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PGPICTUREINPICTURECONNECTIONEXPORTEDOBJECT_H
#define _PGPICTUREINPICTURECONNECTIONEXPORTEDOBJECT_H

@class NSString;
@protocol PGPictureInPictureExportedInterface;

#import <Foundation/Foundation.h>

#import "PGPictureInPictureProxy.h"

@interface _PGPictureInPictureConnectionExportedObject : NSObject <PGPictureInPictureExportedInterface>

 {
    PGPictureInPictureProxy *_pictureInPictureProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPictureInPictureProxy:(id)arg0 ;
-(void)actionButtonTapped;
-(void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)endTwoStagePictureInPictureStopWithCompletionBlock:(id)arg0 ;
-(void)handleCommand:(id)arg0 ;
-(void)hostedWindowSizeChangeBegan;
-(void)hostedWindowSizeChangeEnded;
-(void)pictureInPictureCancelRequestedAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)pictureInPictureInvalidated;
-(void)pictureInPictureStartRequestedAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)pictureInPictureStopRequestedAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)setResourcesUsageReductionReasons:(NSUInteger)arg0 ;
-(void)setStashedOrUnderLock:(BOOL)arg0 ;
-(void)updateHostedWindowSize:(struct CGSize )arg0 animationType:(NSInteger)arg1 initialSpringVelocity:(CGFloat)arg2 synchronizationFence:(id)arg3 ;
-(void)updatePictureInPicturePossible:(BOOL)arg0 ;


@end


#endif