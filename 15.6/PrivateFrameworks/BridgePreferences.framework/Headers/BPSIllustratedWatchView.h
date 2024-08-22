// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSILLUSTRATEDWATCHVIEW_H
#define BPSILLUSTRATEDWATCHVIEW_H

@class UIView, NSString, UIImageView;
@protocol BPSWatchViewProtocol;



@interface BPSIllustratedWatchView : UIView <BPSWatchViewProtocol>



@property (nonatomic) BOOL allowScaling; // ivar: _allowScaling
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat scaledDownFactor; // ivar: _scaledDownFactor
@property (nonatomic) CGFloat scaledDownXDelta; // ivar: _scaledDownXDelta
@property (nonatomic) CGFloat scaledDownYDelta; // ivar: _scaledDownYDelta
@property (copy, nonatomic) NSString *screenImageName; // ivar: _screenImageName
@property (retain, nonatomic) NSString *screenImageSearchBundleIdentifier; // ivar: _screenImageSearchBundleIdentifier
@property (readonly) Class superclass;
@property (nonatomic) BOOL usingLuxoAsset; // ivar: _usingLuxoAsset
@property (retain, nonatomic) UIImageView *watchScreenImageView; // ivar: _watchScreenImageView
@property (retain, nonatomic) UIImageView *watchView; // ivar: _watchView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)watchAssetBundle;
-(struct CGRect )_unscaledWatchScreenInsetGuide;
-(struct CGRect )watchScreenInsetGuide;
-(void)layoutSubviews;


@end


#endif