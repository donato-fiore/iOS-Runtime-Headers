// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGCIRCLESEGMENTEDCONTROL_H
#define PSGCIRCLESEGMENTEDCONTROL_H

@class UIControl, NSMutableArray, UIStackView, UIImage, UILabel;
@protocol PSGCircleSegmentedControlDelegate;


#import "PSGCircleSegment.h"

@interface PSGCircleSegmentedControl : UIControl {
    NSMutableArray *_segmentPlaceholders;
    NSMutableArray *_segments;
    UIStackView *_stack;
    PSGCircleSegment *_selectedSegment;
    NSMutableArray *_segmentConstraints;
    NSMutableArray *_selectedSegmentConstraints;
    UIImage *_placeholderImage;
    UIImage *_buttonImage;
    UIImage *_highlightedImage;
    UIImage *_activeImage;
}


@property (weak, nonatomic) NSObject<PSGCircleSegmentedControlDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *label; // ivar: _label


-(id)_circleImageWithColor:(id)arg0 fillColor:(id)arg1 diameter:(CGFloat)arg2 ;
-(id)init;
-(id)styleSensitiveImage:(id)arg0 ;
-(void)addSegmentWithTitle:(id)arg0 ;
-(void)menuButtonPressed;
-(void)segmentTapped:(id)arg0 ;
-(void)selectSegmentAtIndex:(NSUInteger)arg0 ;
-(void)setPositionConstraintsActive:(BOOL)arg0 forButtonAtIndex:(NSUInteger)arg1 ;
-(void)setSelectedSegmentIndex:(NSUInteger)arg0 ;


@end


#endif