// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCAPPEARMETRICSPRESENTER_H
#define ASCAPPEARMETRICSPRESENTER_H

@class NSString, UIView;
@protocol ASCMetricsScrollObserverDelegate, ASCViewModel;

#import <Foundation/Foundation.h>

#import "ASCMetricsActivity.h"
#import "ASCMetrics.h"
#import "ASCMetricsScrollObserver.h"

@interface ASCAppearMetricsPresenter : NSObject <ASCMetricsScrollObserverDelegate>



@property (copy, nonatomic) ASCMetricsActivity *activity; // ivar: _activity
@property (nonatomic, getter=isAppeared) BOOL appeared; // ivar: _appeared
@property (readonly, nonatomic) BOOL canAppear;
@property (readonly, nonatomic) BOOL canDisappear;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ASCMetrics *metrics; // ivar: _metrics
@property (copy, nonatomic) NSObject<ASCViewModel> *model; // ivar: _model
@property (retain, nonatomic) ASCMetricsScrollObserver *scrollObserver; // ivar: _scrollObserver
@property (nonatomic, getter=isSettingModel) BOOL settingModel; // ivar: _settingModel
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


+(id)log;
-(id)initWithView:(id)arg0 ;
-(id)initWithView:(id)arg0 metrics:(id)arg1 ;
-(void)appearIfNeeded;
-(void)disappearIfNeeded;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidEndRenderWithPredicate:(id)arg0 ;
-(void)viewDidFailRequest:(id)arg0 withError:(id)arg1 ;


@end


#endif