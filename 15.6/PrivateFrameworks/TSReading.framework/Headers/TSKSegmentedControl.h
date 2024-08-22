// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKSEGMENTEDCONTROL_H
#define TSKSEGMENTEDCONTROL_H

@class UIControl, NSMutableArray, UIFont, NSIndexSet, UIColor;



@interface TSKSegmentedControl : UIControl {
    NSMutableArray *mItems;
    NSMutableArray *mButtonSegments;
    int mStyle;
}


@property (nonatomic) BOOL allowsEmptySelection; // ivar: mAllowsEmptySelection
@property (nonatomic) BOOL allowsMultipleSelection; // ivar: mAllowsMultipleSelection
@property (retain, nonatomic) UIFont *font; // ivar: mFont
@property (readonly, nonatomic) NSInteger lastPressedSegmentIndex; // ivar: mLastPressedSegmentIndex
@property (readonly, nonatomic) NSUInteger numberOfSegments;
@property (readonly, nonatomic) int segmentedControlStyle; // ivar: _segmentedControlStyle
@property (copy, nonatomic) NSIndexSet *selectedSegmentIndices; // ivar: mSelectedSegmentIndices
@property (retain, nonatomic) UIColor *selectedTintColor; // ivar: mSelectedTintColor
@property (nonatomic) *void userData; // ivar: mUserData


-(NSInteger)tagForSegment:(NSUInteger)arg0 ;
-(NSUInteger)segmentWithTag:(NSInteger)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 style:(int)arg1 ;
-(id)initWithItems:(id)arg0 style:(int)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)p_backgroundImageForButton:(id)arg0 item:(id)arg1 fillColor:(id)arg2 ;
-(id)p_fullBleedBackgroundImageForButton:(id)arg0 item:(id)arg1 fillColor:(id)arg2 ;
-(id)p_losengeBackgroundImageForButton:(id)arg0 item:(id)arg1 fillColor:(id)arg2 ;
-(void)dealloc;
-(void)p_setButtonAttributedTitle:(id)arg0 color:(id)arg1 forState:(NSUInteger)arg2 button:(id)arg3 ;
-(void)p_updateSegmentProperties;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 forSegment:(NSUInteger)arg2 ;
-(void)setEnabled:(BOOL)arg0 forSegment:(NSUInteger)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 forSegment:(NSUInteger)arg1 ;
-(void)setTag:(NSInteger)arg0 forSegment:(NSUInteger)arg1 ;
-(void)setTitle:(id)arg0 forSegment:(NSUInteger)arg1 ;
-(void)sizeToFit;
-(void)sizeToFitWidth:(float)arg0 ;
-(void)tappedSegment:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif