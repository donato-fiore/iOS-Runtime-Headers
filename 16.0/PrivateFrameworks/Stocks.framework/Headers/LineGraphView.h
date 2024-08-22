// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LINEGRAPHVIEW_H
#define LINEGRAPHVIEW_H

@class UIView, UIImage;


#import "TintedView.h"

@interface LineGraphView : UIView {
    BOOL _showingTintedLine;
    UIImage *_lineImage;
    UIView *_tintedLineClipView;
    TintedView *_tintedLineView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)resizeSelectedLineClipViewWithLeftX:(CGFloat)arg0 rightX:(CGFloat)arg1 ;
-(void)setGraphImageSet:(id)arg0 ;
-(void)setSelectedLineImage:(id)arg0 ;
-(void)setShowingSelectedLine:(BOOL)arg0 ;


@end


#endif