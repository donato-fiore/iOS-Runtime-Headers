// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXBASICTILEANIMATOR_H
#define PXBASICTILEANIMATOR_H

@class NSString;
@protocol PXTileAnimator;

#import <Foundation/Foundation.h>


@interface PXBasicTileAnimator : NSObject <PXTileAnimator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)animateTile:(id)arg0 toGeometry:(struct PXTileGeometry )arg1 userData:(id)arg2 withOptions:(id)arg3 completionHandler:(id)arg4 ;
-(void)prepareTile:(id)arg0 withGeometry:(struct PXTileGeometry )arg1 userData:(id)arg2 ;
-(void)resumeAnimationsForTile:(id)arg0 ;
-(void)suspendAnimationsForTile:(id)arg0 ;


@end


#endif