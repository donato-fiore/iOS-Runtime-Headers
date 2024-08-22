// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBELASTICVOLUMESLIDERVIEW_H
#define SBELASTICVOLUMESLIDERVIEW_H

@class MediaControlsVolumeSliderView, NSString;
@protocol SBElasticGlyphView;



@interface SBElasticVolumeSliderView : MediaControlsVolumeSliderView <SBElasticGlyphView>



@property (nonatomic) CGFloat additiveGlyphScaleFactor; // ivar: _additiveGlyphScaleFactor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createBackgroundView;
-(struct CGPoint )glyphCenter;
-(void)setAxis:(NSUInteger)arg0 ;


@end


#endif