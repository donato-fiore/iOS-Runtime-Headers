// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOEDITTOOLPICKERSPEC_H
#define PUPHOTOEDITTOOLPICKERSPEC_H



#import "PUViewControllerSpec.h"

@interface PUPhotoEditToolPickerSpec : PUViewControllerSpec

@property (nonatomic) CGFloat dashSelectionIndicatorDistance; // ivar: _dashSelectionIndicatorDistance
@property (nonatomic) CGFloat dotSelectionIndicatorDistance; // ivar: _dotSelectionIndicatorDistance
@property (nonatomic) CGFloat horizontalToolBottomSpacing; // ivar: _horizontalToolBottomSpacing
@property (nonatomic) CGFloat horizontalToolTopSpacing; // ivar: _horizontalToolTopSpacing
@property (readonly, nonatomic) CGFloat interToolSpacing;
@property (nonatomic) CGFloat toolButtonPointerInteractionHighlightPadding; // ivar: _toolButtonPointerInteractionHighlightPadding
@property (nonatomic) CGFloat toolParentViewEdgeSpacing; // ivar: _toolParentViewEdgeSpacing


-(id)init;


@end


#endif