// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DBSDEVICEAPPEARANCEOPTIONVIEW_H
#define DBSDEVICEAPPEARANCEOPTIONVIEW_H

@class UIView, UIImpactFeedbackGenerator, UILabel, UIImageView, UIStackView, NSString;
@protocol UIGestureRecognizerDelegate, DBSDeviceAppearanceOptionViewDelegate;


#import "DBSCheckmarkView.h"

@interface DBSDeviceAppearanceOptionView : UIView <UIGestureRecognizerDelegate>



@property (retain, nonatomic) DBSCheckmarkView *_checkmarkView; // ivar: __checkmarkView
@property (retain, nonatomic) UIImpactFeedbackGenerator *_feedbackGenerator; // ivar: __feedbackGenerator
@property (retain, nonatomic) UILabel *_label; // ivar: __label
@property (retain, nonatomic) UIImageView *_previewImageView; // ivar: __previewImageView
@property (retain, nonatomic) UIStackView *_stackView; // ivar: __stackView
@property (retain, nonatomic) UILabel *_timeLabel; // ivar: __timeLabel
@property (readonly, nonatomic) NSUInteger appearanceOption; // ivar: _appearanceOption
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DBSDeviceAppearanceOptionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=highlighted) BOOL highlight; // ivar: _highlight
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 appearanceOption:(NSUInteger)arg1 ;
-(void)_configureView;
-(void)_updateViewForCurrentInterfaceStyle:(NSInteger)arg0 ;
-(void)_userDidTapOnView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif