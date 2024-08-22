// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPVERTICALTEXTSTACKVIEWSTYLE_H
#define LPVERTICALTEXTSTACKVIEWSTYLE_H

@protocol LPEmailCompatibleCaptionBarItemChild;

#import <Foundation/Foundation.h>

#import "LPTextRowStyle.h"
#import "LPPadding.h"
#import "LPPointUnit.h"

@interface LPVerticalTextStackViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild>



@property (readonly, nonatomic) LPTextRowStyle *aboveTopCaption; // ivar: _aboveTopCaption
@property (readonly, nonatomic) LPTextRowStyle *belowBottomCaption; // ivar: _belowBottomCaption
@property (readonly, nonatomic) LPTextRowStyle *bottomCaption; // ivar: _bottomCaption
@property (readonly, retain, nonatomic) LPPadding *captionTextPadding; // ivar: _captionTextPadding
@property (readonly, retain, nonatomic) LPPadding *emailCompatibleMargin; // ivar: _emailCompatibleMargin
@property (retain, nonatomic) LPPointUnit *firstLineLeading; // ivar: _firstLineLeading
@property (retain, nonatomic) LPPointUnit *lastLineDescent; // ivar: _lastLineDescent
@property (nonatomic) unsigned int maximumNumberOfLines; // ivar: _maximumNumberOfLines
@property (nonatomic) BOOL shouldAlignToBaselines; // ivar: _shouldAlignToBaselines
@property (readonly, nonatomic) LPTextRowStyle *topCaption; // ivar: _topCaption


-(id)initWithPlatform:(NSInteger)arg0 sizeClass:(NSUInteger)arg1 fontScalingFactor:(CGFloat)arg2 ;
-(void)applyToAllTextViewStyles:(id)arg0 ;


@end


#endif