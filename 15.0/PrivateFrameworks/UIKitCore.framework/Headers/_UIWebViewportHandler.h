// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIWEBVIEWPORTHANDLER_H
#define _UIWEBVIEWPORTHANDLER_H

@protocol _UIWebViewportHandlerDelegate;

#import <Foundation/Foundation.h>


@interface _UIWebViewportHandler : NSObject {
    BOOL _initialConfigurationHasBeenSentToDelegate;
    _UIWebViewportConfiguration _defaultConfiguration;
    _UIWebViewportConfiguration _configuration;
    CGSize _viewportArgumentsSize;
    BOOL _widthIsDeviceWidth;
    BOOL _heightIsDeviceHeight;
    BOOL _isInUpdateBlock;
}


@property (readonly, nonatomic) BOOL allowsUserScaling;
@property (readonly, nonatomic) CGSize availableViewSize; // ivar: _availableViewSize
@property (readonly, nonatomic) BOOL avoidsUnsafeArea;
@property (readonly, nonatomic, getter=isClassicViewportMode) BOOL classicViewportMode; // ivar: _classicViewportMode
@property (nonatomic) NSObject<_UIWebViewportHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGRect documentBounds; // ivar: _documentBounds
@property (readonly, nonatomic) float initialScale;
@property (readonly, nonatomic) float maximumScale;
@property (readonly, nonatomic) float minimumScale;
@property (readonly, nonatomic) _UIWebViewportConfiguration rawViewConfiguration;
@property (readonly, nonatomic) unsigned int webkitDefinedConfigurationFlags; // ivar: _webkitDefinedConfigurationFlags


-(BOOL)shouldIgnoreHorizontalScalingConstraints;
-(BOOL)shouldIgnoreScalingConstraints;
-(BOOL)shouldIgnoreVerticalScalingConstraints;
-(CGFloat)integralInitialScale;
-(CGFloat)integralScaleForScale:(CGFloat)arg0 keepingPointFixed:(struct CGPoint *)arg1 ;
-(float)minimumScaleForViewSize:(struct CGSize )arg0 ;
-(float)viewportHeight;
-(float)viewportWidth;
-(void)_resolveViewSizeRelativeLengths;
-(void)applyWebKitViewportArgumentsSize:(struct CGSize )arg0 initialScale:(float)arg1 minimumScale:(float)arg2 maximumScale:(float)arg3 allowsUserScaling:(float)arg4 allowsShrinkToFit:(float)arg5 viewportFit:(id)arg6 ;
-(void)clearWebKitViewportConfigurationFlags;
-(void)overrideViewportConfiguration:(struct _UIWebViewportConfiguration *)arg0 ;
-(void)resetViewportConfiguration:(struct _UIWebViewportConfiguration *)arg0 ;
-(void)update:(id)arg0 ;


@end


#endif