// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSWATCHVIEW_H
#define BPSWATCHVIEW_H

@class UIView, NSString, UIImageView;
@protocol BPSWatchViewProtocol;


#import "BPSRemoteImageView.h"

@interface BPSWatchView : UIView <BPSWatchViewProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *screenImageName; // ivar: _screenImageName
@property (retain, nonatomic) NSString *screenImageSearchBundleIdentifier; // ivar: _screenImageSearchBundleIdentifier
@property (nonatomic) NSUInteger sizeOverride; // ivar: _sizeOverride
@property (nonatomic) NSUInteger style; // ivar: _style
@property (copy, nonatomic) NSString *styleVersionSuffix; // ivar: _styleVersionSuffix
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsInternalFPOLabel; // ivar: _wantsInternalFPOLabel
@property (nonatomic) BOOL wantsLightenBlendedScreen; // ivar: _wantsLightenBlendedScreen
@property (retain, nonatomic) BPSRemoteImageView *watchImageView; // ivar: _watchImageView
@property (readonly, nonatomic) UIImageView *watchScreenImageView; // ivar: _watchScreenImageView


-(NSUInteger)deviceSize;
-(id)image;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(id)initWithStyle:(NSUInteger)arg0 allowsMaterialFallback:(BOOL)arg1 ;
-(id)initWithStyle:(NSUInteger)arg0 andVersionModifier:(id)arg1 ;
-(id)initWithStyle:(NSUInteger)arg0 versionModifier:(id)arg1 allowsMaterialFallback:(BOOL)arg2 ;
-(id)screenBackground:(struct CGSize )arg0 ;
-(id)watchAssetBundle;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )screenImageSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cleanedImageName:(*id)arg0 withFallbackImage:(*id)arg1 ;
-(void)applyScreenStyle;
-(void)layoutSubviews;
-(void)layoutWatchScreenImageView;
-(void)overrideMaterial:(NSUInteger)arg0 size:(NSUInteger)arg1 ;


@end


#endif