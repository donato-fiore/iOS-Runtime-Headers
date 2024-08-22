// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPCONTENTVIEWLAYOUTMETRICSSIZEPOLICY_H
#define SBPIPCONTENTVIEWLAYOUTMETRICSSIZEPOLICY_H


#import <Foundation/Foundation.h>

#import "SBPIPContentViewLayoutSizePreferences.h"

@interface SBPIPContentViewLayoutMetricsSizePolicy : NSObject {
    ? _landscapeAspectRatioInterval;
    ? _portraitAspectRatioInterval;
    ? _squareAspectRatioInterval;
    SBPIPContentViewLayoutSizePreferences *_landscapeSizePref;
    SBPIPContentViewLayoutSizePreferences *_portraitSizePref;
    SBPIPContentViewLayoutSizePreferences *_squareSizePref;
}




-(id)initWithSizePreferencesForLandscape:(id)arg0 portrait:(id)arg1 square:(id)arg2 ;
-(id)sizePreferencesForAspectRatio:(CGFloat)arg0 ;


@end


#endif