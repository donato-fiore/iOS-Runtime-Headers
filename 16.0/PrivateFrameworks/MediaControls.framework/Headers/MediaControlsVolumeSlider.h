// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIACONTROLSVOLUMESLIDER_H
#define MEDIACONTROLSVOLUMESLIDER_H

@class MPVolumeSlider, NSString, MTVisualStylingProvider;
@protocol MTVisualStylingProviderObservingPrivate;



@interface MediaControlsVolumeSlider : MPVolumeSlider <MTVisualStylingProviderObservingPrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_thumbImageForStyle:(NSInteger)arg0 ;
-(id)createThumbView;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(struct CGRect )maximumValueImageRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )minimumValueImageRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(void)providedStylesDidChangeForProvider:(id)arg0 ;
-(void)setMaximumTrackVisualProvider:(id)arg0 ;
-(void)setMinimumTrackVisualProvider:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif