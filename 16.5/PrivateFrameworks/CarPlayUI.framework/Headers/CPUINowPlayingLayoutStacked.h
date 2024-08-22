// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPUINOWPLAYINGLAYOUTSTACKED_H
#define CPUINOWPLAYINGLAYOUTSTACKED_H

@class CPUINowPlayingLayout;



@interface CPUINowPlayingLayoutStacked : CPUINowPlayingLayout



-(BOOL)playModeControlButtonsFullWidth;
-(BOOL)progressViewFullWidth;
-(CGFloat)albumArtWidthMultiplier;
-(CGFloat)playModeControlButtonSpacing;
-(CGFloat)transportControlButtonSpacing;
-(NSUInteger)artworkPosition;
-(NSUInteger)trackInfoFontStyle;
-(struct CGSize )maximumNowPlayingSize;
-(struct CGSize )maximumTitleViewSize;
-(struct UIEdgeInsets )layoutMargins;


@end


#endif