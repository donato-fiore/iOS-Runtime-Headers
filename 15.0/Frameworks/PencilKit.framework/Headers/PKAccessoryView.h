// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCESSORYVIEW_H
#define PKACCESSORYVIEW_H

@class UIView, NSString;
@protocol PKPaletteEdgeLocating;


#import "PKDragIndicatorView.h"

@interface PKAccessoryView : UIView <PKPaletteEdgeLocating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKDragIndicatorView *dragIndicatorView; // ivar: _dragIndicatorView
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showsDragIndicator;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif