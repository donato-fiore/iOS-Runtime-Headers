// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AIAUDIOGRAMRESULTGRAPHCELL_H
#define AIAUDIOGRAMRESULTGRAPHCELL_H

@class UITableViewCell, HKAudiogramSample, HKAudiogramChartViewController;



@interface AIAudiogramResultGraphCell : UITableViewCell

@property (retain, nonatomic) HKAudiogramSample *audiogram; // ivar: _audiogram
@property (retain, nonatomic) HKAudiogramChartViewController *audiogramChart; // ivar: _audiogramChart


+(CGFloat)cellHeight;
+(id)reuseIdentifier;
-(BOOL)isAccessibilityElement;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif