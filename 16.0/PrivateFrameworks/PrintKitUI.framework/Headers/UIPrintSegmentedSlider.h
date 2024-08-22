// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTSEGMENTEDSLIDER_H
#define UIPRINTSEGMENTEDSLIDER_H

@class UISlider, UIColor, UISelectionFeedbackGenerator;



@interface UIPrintSegmentedSlider : UISlider {
    UIColor *_trackMarkersColor;
}


@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (nonatomic) BOOL locksToSegment; // ivar: _locksToSegment
@property (nonatomic) NSUInteger segmentCount; // ivar: _segmentCount
@property (nonatomic, getter=isSegmented) BOOL segmented; // ivar: _segmented
@property (nonatomic) BOOL snapsToSegment; // ivar: _snapsToSegment


-(NSUInteger)numberOfTicks;
-(float)offsetBetweenTicksForNumberOfTicks:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(void)controlInteractionBegan:(id)arg0 ;
-(void)controlInteractionEnded:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setValue:(float)arg0 animated:(BOOL)arg1 ;
-(void)sliderTapped:(id)arg0 ;


@end


#endif