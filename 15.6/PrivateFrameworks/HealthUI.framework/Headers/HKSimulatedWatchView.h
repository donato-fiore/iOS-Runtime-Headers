// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSIMULATEDWATCHVIEW_H
#define HKSIMULATEDWATCHVIEW_H

@class UIView;



@interface HKSimulatedWatchView : UIView

@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) UIView *watchScreenView; // ivar: _watchScreenView


-(id)initWithIconImage:(id)arg0 titleText:(id)arg1 detailText:(id)arg2 tintColor:(id)arg3 ;
-(id)initWithWatchView:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif