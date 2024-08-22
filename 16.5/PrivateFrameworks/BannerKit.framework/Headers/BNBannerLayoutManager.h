// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNBANNERLAYOUTMANAGER_H
#define BNBANNERLAYOUTMANAGER_H

@class NSString;
@protocol BNLayoutManagingPrivate, BNLayoutManaging;

#import <Foundation/Foundation.h>


@interface BNBannerLayoutManager : NSObject <BNLayoutManagingPrivate, BNLayoutManaging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BNBannerLayoutInfo layoutInfo; // ivar: _layoutInfo
@property (nonatomic) BNBannerLayoutInfoV2 layoutInfoV2; // ivar: _layoutInfoV2
@property (readonly) Class superclass;


+(struct CGRect )_dismissedFrameForContentWithPreferredSize:(struct CGSize )arg0 inUseableContainerFrame:(struct CGRect )arg1 containerBounds:(struct CGRect )arg2 layoutInfo:(struct BNBannerLayoutInfoV2 )arg3 overshoot:(BOOL)arg4 scale:(CGFloat)arg5 ;
+(struct CGRect )_presentedFrameForContentWithFrame:(struct CGRect )arg0 afterContentWithFrame:(struct CGRect )arg1 layoutInfo:(struct BNBannerLayoutInfoV2 )arg2 ;
+(struct CGRect )_presentedFrameForContentWithPreferredSize:(struct CGSize )arg0 inUseableContainerFrame:(struct CGRect )arg1 containerBounds:(struct CGRect )arg2 layoutInfo:(struct BNBannerLayoutInfoV2 )arg3 scale:(CGFloat)arg4 ;
+(struct CGRect )_useableContainerFrameInContainerBounds:(struct CGRect )arg0 inWindow:(id)arg1 ;
+(struct CGRect )_useableContainerFrameInContainerBounds:(struct CGRect )arg0 onScreen:(id)arg1 ;
+(struct CGRect )_useableContainerFrameInContainerBounds:(struct CGRect )arg0 onScreen:(id)arg1 interfaceOrientation:(NSInteger)arg2 ;
+(void)initialize;
-(id)init;
-(struct BNBannerLayoutInfoV2 )_effectiveLayoutInfo;
-(struct CGRect )dismissedFrameForContentWithPreferredSize:(struct CGSize )arg0 inUseableContainerFrame:(struct CGRect )arg1 containerBounds:(struct CGRect )arg2 overshoot:(BOOL)arg3 scale:(CGFloat)arg4 ;
-(struct CGRect )presentedFrameForContentWithFrame:(struct CGRect )arg0 afterContentWithFrame:(struct CGRect )arg1 ;
-(struct CGRect )presentedFrameForContentWithPreferredSize:(struct CGSize )arg0 inUseableContainerFrame:(struct CGRect )arg1 containerBounds:(struct CGRect )arg2 scale:(CGFloat)arg3 ;
-(struct CGRect )useableContainerFrameInContainerBounds:(struct CGRect )arg0 inWindow:(id)arg1 ;
-(struct CGRect )useableContainerFrameInContainerBounds:(struct CGRect )arg0 onScreen:(id)arg1 ;
-(struct CGRect )useableContainerFrameInContainerBounds:(struct CGRect )arg0 onScreen:(id)arg1 interfaceOrientation:(NSInteger)arg2 ;


@end


#endif