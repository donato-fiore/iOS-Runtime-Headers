// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPUINOWPLAYINGLAYOUT_H
#define _CPUINOWPLAYINGLAYOUT_H

@class NSString;
@protocol CPUINowPlayingLayoutProtocol;

#import <Foundation/Foundation.h>


@interface _CPUINowPlayingLayout : NSObject <CPUINowPlayingLayoutProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect safeAreaFrame; // ivar: _safeAreaFrame
@property (nonatomic) BOOL showsArtwork; // ivar: _showsArtwork
@property (readonly) Class superclass;
@property (nonatomic) CGRect viewAreaFrame; // ivar: _viewAreaFrame


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)playModeControlButtonsFullWidth;
-(BOOL)progressViewFullWidth;
-(CGFloat)_effectiveAlbumArtWidth;
-(CGFloat)_scaledHeight;
-(CGFloat)_scaledWidth;
-(CGFloat)albumArtWidthMultiplier;
-(CGFloat)playModeControlButtonSpacing;
-(CGFloat)playModeControlButtonWidth;
-(CGFloat)transportControlButtonHeight;
-(CGFloat)transportControlButtonSpacing;
-(CGFloat)verticalEdgePadding;
-(NSUInteger)artworkPosition;
-(NSUInteger)trackInfoFontStyle;
-(id)initWithSafeArea:(struct CGRect )arg0 frame:(struct CGRect )arg1 displayScale:(CGFloat)arg2 showsArtwork:(BOOL)arg3 ;
-(struct CGSize )maximumNowPlayingSize;
-(struct CGSize )maximumTitleViewSize;
-(struct UIEdgeInsets )layoutMargins;


@end


#endif