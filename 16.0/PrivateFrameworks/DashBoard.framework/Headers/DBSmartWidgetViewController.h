// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSMARTWIDGETVIEWCONTROLLER_H
#define DBSMARTWIDGETVIEWCONTROLLER_H

@class UITapGestureRecognizer, NSString, UISwipeGestureRecognizer, NSSet, UILongPressGestureRecognizer, UIActivityIndicatorView;
@protocol DBSmartWidgetEngineObserver, UIGestureRecognizerDelegate, DBSmartWidgetAnimating;


#import "DBWidgetViewController.h"
#import "DBSmartWidgetEngine.h"
#import "DBSmartWidgetView.h"

@interface DBSmartWidgetViewController : DBWidgetViewController <DBSmartWidgetEngineObserver, UIGestureRecognizerDelegate>



@property (retain, nonatomic) UITapGestureRecognizer *actionRecognizer; // ivar: _actionRecognizer
@property (retain, nonatomic) UITapGestureRecognizer *actionSelectRecognizer; // ivar: _actionSelectRecognizer
@property (weak, nonatomic) NSObject<DBSmartWidgetAnimating> *animationDelegate; // ivar: _animationDelegate
@property (nonatomic) NSInteger currentPredictionIndex; // ivar: _currentPredictionIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) DBSmartWidgetEngine *engine; // ivar: _engine
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority;
@property (retain, nonatomic) UISwipeGestureRecognizer *nextPredictionRecognizer; // ivar: _nextPredictionRecognizer
@property (retain, nonatomic) UISwipeGestureRecognizer *previousPredictionRecognizer; // ivar: _previousPredictionRecognizer
@property (retain, nonatomic) NSSet *recognizers; // ivar: _recognizers
@property (retain, nonatomic) UILongPressGestureRecognizer *refreshRecognizer; // ivar: _refreshRecognizer
@property (retain, nonatomic) UIActivityIndicatorView *spinnerView; // ivar: _spinnerView
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsToShowPrediction; // ivar: _wantsToShowPrediction
@property (retain, nonatomic) DBSmartWidgetView *widgetView; // ivar: _widgetView


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithEnvironment:(id)arg0 engine:(id)arg1 animationDelegate:(id)arg2 ;
-(void)_nextPrediction;
-(void)_performAction;
-(void)_previousPrediction;
-(void)_refresh;
-(void)_updatePrediction;
-(void)smartWidgetEngine:(id)arg0 didUpdateCurrentPredictions:(id)arg1 ;
-(void)smartWidgetEngineDidStart:(id)arg0 ;
-(void)smartWidgetEngineDidStop:(id)arg0 ;
-(void)smartWidgetEngineDidUpdatePredictionsFresh:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif