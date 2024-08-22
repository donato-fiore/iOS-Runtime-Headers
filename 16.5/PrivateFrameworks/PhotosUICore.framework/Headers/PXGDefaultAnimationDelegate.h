// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGDEFAULTANIMATIONDELEGATE_H
#define PXGDEFAULTANIMATIONDELEGATE_H

@class NSString;
@protocol PXGAnimationDelegate;

#import <Foundation/Foundation.h>


@interface PXGDefaultAnimationDelegate : NSObject <PXGAnimationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)adjustGeometry:(struct ? *)arg0 style:(struct ? *)arg1 info:(struct ? *)arg2 forTextSpriteAnimatingFromAttributes:(struct ? *)arg3 toAttributes:(struct ? *)arg4 inRootLayout:(id)arg5 ;
-(id)animation:(id)arg0 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg1 rootLayout:(id)arg2 presentedGeometries:(struct ? *)arg3 styles:(struct ? *)arg4 infos:(struct ? *)arg5 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 prepareWithRootLayout:(id)arg1 viewportShift:(struct CGPoint )arg2 ;


@end


#endif