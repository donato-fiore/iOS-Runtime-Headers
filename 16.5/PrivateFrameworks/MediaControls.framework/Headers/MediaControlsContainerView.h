// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSCONTAINERVIEW_H
#define MEDIACONTROLSCONTAINERVIEW_H

@class UIView, UIVisualEffectView, MPCPlayerResponse;


#import "MediaControlsTimeControl.h"
#import "MediaControlsTransportStackView.h"

@interface MediaControlsContainerView : UIView

@property (nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (retain, nonatomic) UIVisualEffectView *primaryVisualEffectView; // ivar: _primaryVisualEffectView
@property (retain, nonatomic) MPCPlayerResponse *response;
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) MediaControlsTimeControl *timeControl; // ivar: _timeControl
@property (nonatomic, getter=isTimeControlOnScreen) BOOL timeControlOnScreen;
@property (retain, nonatomic) MediaControlsTransportStackView *transportStackView; // ivar: _transportStackView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateStyle;
-(void)layoutSubviews;
-(void)setRatingActionSheetDelegate:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif