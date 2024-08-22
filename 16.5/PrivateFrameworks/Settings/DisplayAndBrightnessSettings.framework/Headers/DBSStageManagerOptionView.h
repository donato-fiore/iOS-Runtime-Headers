// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSSTAGEMANAGEROPTIONVIEW_H
#define DBSSTAGEMANAGEROPTIONVIEW_H

@class UIView, UILabel, UIStackView, NSString;
@protocol UIGestureRecognizerDelegate, DBSStageManagerOptionViewDelegate;


#import "DBSCheckmarkView.h"

@interface DBSStageManagerOptionView : UIView <UIGestureRecognizerDelegate>



@property (retain, nonatomic) DBSCheckmarkView *_checkmarkView; // ivar: __checkmarkView
@property (retain, nonatomic) UILabel *_label; // ivar: __label
@property (retain, nonatomic) UIStackView *_stackView; // ivar: __stackView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DBSStageManagerOptionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=highlighted) BOOL highlight; // ivar: _highlight
@property (readonly, nonatomic) NSUInteger stageManagerOption; // ivar: _stageManagerOption
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 stageManagerOption:(NSUInteger)arg1 ;
-(void)_configureView;
-(void)_updateViewForCurrentOptionState;
-(void)_userDidTapOnView:(id)arg0 ;
-(void)updateOptionState;


@end


#endif