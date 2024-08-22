// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTILEREATTACHMENTCONTEXT_H
#define PUTILEREATTACHMENTCONTEXT_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface PUTileReattachmentContext : NSObject

@property (readonly, nonatomic) NSMapTable *_tileControllerVelocities; // ivar: __tileControllerVelocities
@property (nonatomic, setter=setTransitioningOverOneUp:) BOOL isTransitioningOverOneUp; // ivar: _isTransitioningOverOneUp
@property (nonatomic, setter=setZoomingIn:) BOOL isZoomingIn; // ivar: _isZoomingIn


-(struct PUDisplayVelocity )velocityForTileController:(id)arg0 ;
-(void)setVelocity:(struct PUDisplayVelocity )arg0 forTileController:(id)arg1 ;


@end


#endif