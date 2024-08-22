// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSDISPLAYZOOMOPTIONVIEW_H
#define DBSDISPLAYZOOMOPTIONVIEW_H

@class UIView, UIImpactFeedbackGenerator, NSString, UILabel;
@protocol UIGestureRecognizerDelegate, DBSDisplayZoomOptionViewDelegate;


#import "DBSCheckmarkView.h"
#import "DBSDeviceDisplayZoomAnimationView.h"

@interface DBSDisplayZoomOptionView : UIView <UIGestureRecognizerDelegate>



@property (retain, nonatomic) DBSCheckmarkView *_checkmarkView; // ivar: __checkmarkView
@property (retain, nonatomic) UIImpactFeedbackGenerator *_feedbackGenerator; // ivar: __feedbackGenerator
@property (retain, nonatomic) DBSDeviceDisplayZoomAnimationView *_packageView; // ivar: __packageView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DBSDisplayZoomOptionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger displayZoomOption; // ivar: _displayZoomOption
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=highlighted) BOOL highlight; // ivar: _highlight
@property (retain, nonatomic) UILabel *optionNameLabel; // ivar: _optionNameLabel
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 displayZoomOption:(NSUInteger)arg1 ;
-(void)_configureView;
-(void)_userDidTapOnView:(id)arg0 ;
-(void)startAnimation;
-(void)stopAnimation;


@end


#endif