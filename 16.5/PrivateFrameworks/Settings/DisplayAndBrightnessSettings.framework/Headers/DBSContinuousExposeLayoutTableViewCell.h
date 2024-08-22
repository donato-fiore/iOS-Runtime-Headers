// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSCONTINUOUSEXPOSELAYOUTTABLEVIEWCELL_H
#define DBSCONTINUOUSEXPOSELAYOUTTABLEVIEWCELL_H

@class UITableViewCell, NSUserDefaults, NSString, UISegmentedControl;
@protocol DBSStageManagerOptionViewDelegate;


#import "DBSContinuousExposeLayoutAnimationView.h"
#import "DBSStageManagerOptionView.h"

@interface DBSContinuousExposeLayoutTableViewCell : UITableViewCell <DBSStageManagerOptionViewDelegate>



@property (retain, nonatomic) NSUserDefaults *_springBoardDefaults; // ivar: __springBoardDefaults
@property (retain, nonatomic) DBSContinuousExposeLayoutAnimationView *animationView; // ivar: _animationView
@property (nonatomic) NSInteger currentDisplaySelection; // ivar: _currentDisplaySelection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UISegmentedControl *displaySelectionControl; // ivar: _displaySelectionControl
@property (retain, nonatomic) DBSStageManagerOptionView *dockOptionView; // ivar: _dockOptionView
@property (retain, nonatomic) id *embeddedShowDockObserver; // ivar: _embeddedShowDockObserver
@property (retain, nonatomic) id *embeddedShowRecentAppsObserver; // ivar: _embeddedShowRecentAppsObserver
@property (retain, nonatomic) id *externalShowDockObserver; // ivar: _externalShowDockObserver
@property (retain, nonatomic) id *externalShowRecentAppsObserver; // ivar: _externalShowRecentAppsObserver
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isExternalDisplayConnected; // ivar: _isExternalDisplayConnected
@property (retain, nonatomic) DBSStageManagerOptionView *recentAppOptionView; // ivar: _recentAppOptionView
@property (readonly) Class superclass;


+(NSInteger)cellStyle;
-(BOOL)isLandscape;
-(BOOL)isOptionEnabled:(NSUInteger)arg0 ;
-(BOOL)stageManagerOptionViewIsOptionEnabled:(id)arg0 ;
-(CGFloat)scaleFactor;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureAnimationViews;
-(void)configureCell;
-(void)createDisplaySelectionControl;
-(void)dealloc;
-(void)layoutAnimationViews;
-(void)layoutSubviews;
-(void)setOption:(NSUInteger)arg0 enabled:(BOOL)arg1 ;
-(void)updateDisplaySelectionControlForExternalDisplayConnectedState:(BOOL)arg0 ;
-(void)updateOptionViewSelectionAnimated:(BOOL)arg0 ;
-(void)userDidTapOnStateManagerOptionView:(id)arg0 ;


@end


#endif