// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSLIDESHOWSPEEDCELL_H
#define PUSLIDESHOWSPEEDCELL_H

@class UITableViewCell, UIImageView, UISlider, NSArray;
@protocol PUSlideshowSpeedCellDelegate;



@interface PUSlideshowSpeedCell : UITableViewCell {
    UIImageView *_slowerGlyphImageView;
    UIImageView *_fasterGlyphImageView;
    UISlider *_slider;
    NSArray *_speedConstraints;
}


@property (weak, nonatomic) NSObject<PUSlideshowSpeedCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) CGFloat stepDuration;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_stepDurationValueChanged:(id)arg0 ;
-(void)_updateView;
-(void)updateConstraints;


@end


#endif