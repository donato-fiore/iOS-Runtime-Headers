// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSPLASHSCREENLAYOUT_H
#define AVTSPLASHSCREENLAYOUT_H

@class NSString;
@protocol AVTSplashScreenLayoutDelegate;

#import <Foundation/Foundation.h>


@interface AVTSplashScreenLayout : NSObject

@property (nonatomic) CGRect buttonFrame; // ivar: _buttonFrame
@property (nonatomic) BOOL constrainToContainer; // ivar: _constrainToContainer
@property (readonly, nonatomic) CGSize containerSize; // ivar: _containerSize
@property (copy, nonatomic) NSString *currentContentSizeCategory; // ivar: _currentContentSizeCategory
@property (weak, nonatomic) NSObject<AVTSplashScreenLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (readonly, nonatomic) NSUInteger labelEdgePaddingStyle; // ivar: _labelEdgePaddingStyle
@property (nonatomic) BOOL needsLayout; // ivar: _needsLayout
@property (nonatomic) CGRect primaryVideoFrame; // ivar: _primaryVideoFrame
@property (nonatomic) CGRect secondaryVideoFrame; // ivar: _secondaryVideoFrame
@property (nonatomic) CGRect subTitleFrame; // ivar: _subTitleFrame
@property (nonatomic) CGRect titleFrame; // ivar: _titleFrame
@property (readonly, nonatomic) CGSize unconstrainedContentSize; // ivar: _unconstrainedContentSize
@property (nonatomic) BOOL wantsSecondaryVideo; // ivar: _wantsSecondaryVideo


+(BOOL)isSmallScreen;
+(CGFloat)defaultLabelEdgePaddingForLabelEdgePaddingStyle:(NSUInteger)arg0 contentSizeCategory:(id)arg1 numberOfLines:(NSInteger)arg2 ;
+(NSUInteger)appropriateLabelEdgePaddingStyleForViewSize:(struct CGSize )arg0 ;
+(id)blueButton;
+(id)buttonFont;
+(id)subTitleFont;
+(id)titleFont;
+(struct CGRect )buttonFrameForString:(id)arg0 containerSize:(struct CGSize )arg1 edgeInsets:(struct UIEdgeInsets )arg2 ;
+(struct CGRect )primaryVideoFrameForContentFrame:(struct CGRect )arg0 wantsSecondaryVideo:(BOOL)arg1 ;
+(struct CGRect )secondaryVideoFrameForContentFrame:(struct CGRect )arg0 ;
+(struct CGRect )subTitleFrameForString:(id)arg0 titleFrame:(struct CGRect )arg1 buttonFrame:(struct CGRect )arg2 wantsSecondaryVideo:(BOOL)arg3 containerSize:(struct CGSize )arg4 labelEdgePadding:(CGFloat)arg5 ;
+(struct CGRect )titleFrameForString:(id)arg0 yOrigin:(CGFloat)arg1 containerSize:(struct CGSize )arg2 labelEdgePadding:(CGFloat)arg3 ;
+(struct CGSize )primaryVideoSize;
+(struct CGSize )secondaryVideoSize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithContainerSize:(struct CGSize )arg0 edgeInsets:(struct UIEdgeInsets )arg1 wantsSecondaryVideo:(BOOL)arg2 labelEdgePaddingStyle:(NSUInteger)arg3 ;
-(id)initWithContainerSize:(struct CGSize )arg0 edgeInsets:(struct UIEdgeInsets )arg1 wantsSecondaryVideo:(BOOL)arg2 labelEdgePaddingStyle:(NSUInteger)arg3 currentContentSizeCategory:(id)arg4 ;
-(void)calculateLayoutWithTitleString:(id)arg0 subTitleString:(id)arg1 buttonTitle:(id)arg2 ;
-(void)dealloc;
-(void)didChangeContentSizeCategory:(id)arg0 ;


@end


#endif