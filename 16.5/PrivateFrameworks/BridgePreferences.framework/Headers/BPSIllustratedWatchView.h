// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSILLUSTRATEDWATCHVIEW_H
#define BPSILLUSTRATEDWATCHVIEW_H

@class UIView, NSLayoutConstraint, NSString, NSValue, UIImageView;
@protocol BPSWatchViewProtocol;



@interface BPSIllustratedWatchView : UIView <BPSWatchViewProtocol>



@property (nonatomic) BOOL allowScaling; // ivar: _allowScaling
@property (retain, nonatomic) NSLayoutConstraint *centeredSubviewCenterXConstraint; // ivar: _centeredSubviewCenterXConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSValue *preferredCGSizeValue; // ivar: _preferredCGSizeValue
@property (nonatomic) CGFloat scaledDownFactor; // ivar: _scaledDownFactor
@property (nonatomic) CGFloat scaledDownXDelta; // ivar: _scaledDownXDelta
@property (nonatomic) CGFloat scaledDownYDelta; // ivar: _scaledDownYDelta
@property (copy, nonatomic) NSString *screenImageName; // ivar: _screenImageName
@property (retain, nonatomic) NSString *screenImageSearchBundleIdentifier; // ivar: _screenImageSearchBundleIdentifier
@property (nonatomic) NSUInteger screenImageSize; // ivar: _screenImageSize
@property (readonly) Class superclass;
@property (nonatomic) BOOL usingAgaveWatchAsset; // ivar: _usingAgaveWatchAsset
@property (nonatomic) BOOL usingCompactWatchAsset; // ivar: _usingCompactWatchAsset
@property (retain, nonatomic) UIImageView *watchScreenImageView; // ivar: _watchScreenImageView
@property (retain, nonatomic) UIImageView *watchView; // ivar: _watchView


-(BOOL)_shouldUseCompactWatchAsset;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)watchAssetBundle;
-(struct CGRect )_unscaledWatchScreenInsetGuide;
-(struct CGRect )watchScreenInsetGuide;
-(void)_configureWatchImage;
-(void)_updateCenteredSubviewConstraints;
-(void)addSyncTrapProgressView:(id)arg0 ;
-(void)layoutSubviews;
-(void)textSizeDidChange:(id)arg0 ;


@end


#endif