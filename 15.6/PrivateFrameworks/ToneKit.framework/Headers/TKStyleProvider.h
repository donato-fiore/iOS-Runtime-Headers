// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKSTYLEPROVIDER_H
#define TKSTYLEPROVIDER_H

@class NSBundle, NSMutableDictionary, NSString, UIScreen, UIColor, UIFont, UIImage;
@protocol TKVibrationRecorderStyleProvider;

#import <Foundation/Foundation.h>


@interface TKStyleProvider : NSObject <TKVibrationRecorderStyleProvider>

 {
    NSBundle *_bundle;
    NSMutableDictionary *_cachedStyleProperties;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultAnimationDuration;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIScreen *screen; // ivar: _screen
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *vibrationRecorderBarsBackgroundColor;
@property (readonly, nonatomic) CGFloat vibrationRecorderControlsToolbarAdditionalHeight;
@property (readonly, nonatomic) CGFloat vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
@property (readonly, nonatomic) CGFloat vibrationRecorderControlsToolbarVerticalOffset;
@property (readonly, nonatomic) UIColor *vibrationRecorderInstructionsLabelBackgroundColor;
@property (readonly, nonatomic) UIEdgeInsets vibrationRecorderInstructionsLabelEdgeInsets;
@property (readonly, nonatomic) CGFloat vibrationRecorderInstructionsLabelFadeAnimationDuration;
@property (readonly, nonatomic) UIFont *vibrationRecorderInstructionsLabelFont;
@property (readonly, nonatomic) UIOffset vibrationRecorderInstructionsLabelPositionOffset;
@property (readonly, nonatomic) UIColor *vibrationRecorderInstructionsLabelTextColor;
@property (readonly, nonatomic) CGFloat vibrationRecorderProgressToolbarAdditionalHeight;
@property (readonly, nonatomic) CGFloat vibrationRecorderProgressToolbarVerticalOffset;
@property (readonly, nonatomic) CGFloat vibrationRecorderProgressViewAccessibilityAdditionalHeight;
@property (readonly, nonatomic) CGFloat vibrationRecorderProgressViewDotHorizontalInset;
@property (readonly, nonatomic) UIColor *vibrationRecorderProgressViewDotTintColor;
@property (readonly, nonatomic) CGFloat vibrationRecorderProgressViewHeight;
@property (readonly, nonatomic) CGFloat vibrationRecorderProgressViewHorizontalOffsetFromEdge;
@property (readonly, nonatomic) UIImage *vibrationRecorderProgressViewResizableDotImage;
@property (readonly, nonatomic) UIColor *vibrationRecorderProgressViewTrackColor;
@property (readonly, nonatomic) CGFloat vibrationRecorderRippleFinalRadius;
@property (readonly, nonatomic) CGFloat vibrationRecorderRippleFingerMovingSpeed;
@property (readonly, nonatomic) CGFloat vibrationRecorderRippleFingerStillSpeed;
@property (readonly, nonatomic) CGFloat vibrationRecorderRippleInitialRadius;
@property (readonly, nonatomic) CGFloat vibrationRecorderRippleRingLineWidth;
@property (readonly, nonatomic) UIColor *vibrationRecorderRippleViewBackgroundColor;


-(id)_bundle;
-(id)_cachedImageWithName:(id)arg0 forPropertyWithSelector:(SEL)arg1 ;
-(id)_cachedResizableImageForPropertyWithSelector:(SEL)arg0 capInsets:(struct UIEdgeInsets )arg1 size:(struct CGSize )arg2 imageRenderingMode:(NSInteger)arg3 withDrawingActions:(id)arg4 ;
-(id)_cachedStyleObjectForPropertyWithSelector:(SEL)arg0 ;
-(id)init;
-(void)_didReceiveMemoryWarning:(id)arg0 ;
-(void)_setCachedStyleObject:(id)arg0 forPropertyWithSelector:(SEL)arg1 ;
-(void)dealloc;


@end


#endif