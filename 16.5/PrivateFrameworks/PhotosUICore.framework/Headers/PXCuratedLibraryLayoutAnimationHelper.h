// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYLAYOUTANIMATIONHELPER_H
#define PXCURATEDLIBRARYLAYOUTANIMATIONHELPER_H

@class NSString, NSDictionary;
@protocol PXGAnimationDelegate;

#import <Foundation/Foundation.h>

#import "PXCuratedLibraryLayout.h"

@interface PXCuratedLibraryLayoutAnimationHelper : NSObject <PXGAnimationDelegate>



@property (readonly, nonatomic) NSInteger animationCurve;
@property (readonly, nonatomic) CGFloat animationDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int highFrameRateReason;
@property (readonly, weak) PXCuratedLibraryLayout *layout; // ivar: _layout
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *userData; // ivar: _userData
@property (readonly, nonatomic) BOOL wantsAnimationWithSpriteTransfer; // ivar: _wantsAnimationWithSpriteTransfer
@property (readonly, nonatomic) BOOL wantsDoubleSidedAnimations;
@property (readonly, nonatomic) BOOL wantsPresentationAdjustment; // ivar: _wantsPresentationAdjustment


+(id)createAnimationIfNeededForLayout:(id)arg0 context:(NSInteger)arg1 userData:(id)arg2 ;
+(id)createTransitionIfNeededForLayout:(id)arg0 context:(NSInteger)arg1 ;
-(id)init;
-(id)initWithLayout:(id)arg0 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 prepareWithRootLayout:(id)arg1 viewportShift:(struct CGPoint )arg2 ;


@end


#endif