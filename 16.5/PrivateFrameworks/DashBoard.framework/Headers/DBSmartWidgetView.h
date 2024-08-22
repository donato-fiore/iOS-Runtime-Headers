// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSMARTWIDGETVIEW_H
#define DBSMARTWIDGETVIEW_H

@class UIView, UIImageView, UILabel;
@protocol DBSmartWidgetPredictionObserver;


#import "DBSmartWidgetEngine.h"
#import "DBSmartWidgetPrediction.h"

@interface DBSmartWidgetView : UIView <DBSmartWidgetPredictionObserver>



@property (weak, nonatomic) DBSmartWidgetEngine *engine; // ivar: _engine
@property (retain, nonatomic) UIImageView *imageview; // ivar: _imageview
@property (retain, nonatomic) UILabel *nextRefreshDebugLabel; // ivar: _nextRefreshDebugLabel
@property (retain, nonatomic) DBSmartWidgetPrediction *prediction; // ivar: _prediction
@property (retain, nonatomic) UILabel *scoreDebugLabel; // ivar: _scoreDebugLabel
@property (retain, nonatomic) UILabel *subTitleLabel; // ivar: _subTitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UILabel *validRangesDebugLabel; // ivar: _validRangesDebugLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateImageBorder;
-(void)_updateViews;
-(void)didMoveToWindow;
-(void)predictionDidUpdate:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif