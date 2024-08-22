// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMCTMDESCRIPTIONOVERLAYVIEW_H
#define CAMCTMDESCRIPTIONOVERLAYVIEW_H



#import "CAMDescriptionOverlayView.h"

@interface CAMCTMDescriptionOverlayView : CAMDescriptionOverlayView



-(CGFloat)maxDescriptionTextWidthForNarrowWidth:(BOOL)arg0 isLandscape:(BOOL)arg1 usingFontSizeMultiplier:(CGFloat)arg2 ;
-(CGFloat)maxInfoTextWidthForNarrowWidth:(BOOL)arg0 isLandscape:(BOOL)arg1 usingFontSizeMultiplier:(CGFloat)arg2 ;
-(id)acknowledgmentTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)descriptionTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)descriptionTitleTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)infoTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)infoTitleTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)titleTextUsingNarrowWidth:(BOOL)arg0 ;


@end


#endif