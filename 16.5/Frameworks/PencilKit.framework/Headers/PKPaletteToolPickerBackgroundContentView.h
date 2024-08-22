// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTETOOLPICKERBACKGROUNDCONTENTVIEW_H
#define PKPALETTETOOLPICKERBACKGROUNDCONTENTVIEW_H

@class UIView, NSArray;


#import "PKPaletteToolPickerEdgeView.h"

@interface PKPaletteToolPickerBackgroundContentView : UIView {
    PKPaletteToolPickerEdgeView *_topOrLeadingEdgeView;
    PKPaletteToolPickerEdgeView *_bottomOrTrailingEdgeView;
    NSArray *_horizontalLayoutConstraints;
    NSArray *_verticalLayoutConstraints;
    BOOL _isVerticalRight;
    BOOL _topOrLeadingEdgeViewVisible;
    BOOL _bottomOrTrailingEdgeViewVisible;
    NSInteger _layoutAxis;
}




-(id)init;


@end


#endif