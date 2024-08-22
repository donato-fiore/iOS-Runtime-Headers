// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSEMANTICSTYLESDESCRIPTIONOVERLAYVIEW_H
#define CAMSEMANTICSTYLESDESCRIPTIONOVERLAYVIEW_H



#import "CAMDescriptionOverlayView.h"

@interface CAMSemanticStylesDescriptionOverlayView : CAMDescriptionOverlayView



-(CGFloat)maxDescriptionTextWidthForNarrowWidth:(BOOL)arg0 isLandscape:(BOOL)arg1 usingFontSizeMultiplier:(CGFloat)arg2 ;
-(id)acknowledgmentTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)descriptionTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)descriptionTitleTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)detailTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)infoTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)infoTitleTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)titleTextUsingNarrowWidth:(BOOL)arg0 ;


@end


#endif