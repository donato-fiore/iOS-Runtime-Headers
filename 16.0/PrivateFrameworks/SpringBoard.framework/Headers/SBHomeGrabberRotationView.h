// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMEGRABBERROTATIONVIEW_H
#define SBHOMEGRABBERROTATIONVIEW_H

@class UIView, NSMutableArray, SBFHomeGrabberSettings;


#import "SBHomeGrabberView.h"

@interface SBHomeGrabberRotationView : UIView {
    NSMutableArray *_rotationWrapperViews;
    SBFHomeGrabberSettings *_grabberSettings;
    BOOL _useRotationWrapperViews;
}


@property (readonly, nonatomic) SBHomeGrabberView *grabberView; // ivar: _grabberView
@property (nonatomic) NSInteger orientation; // ivar: _orientation


-(id)_addWrapperViewWithOrientation:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 settings:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 settings:(id)arg1 useRotationWrapperViews:(BOOL)arg2 ;
-(void)layoutSubviews;


@end


#endif