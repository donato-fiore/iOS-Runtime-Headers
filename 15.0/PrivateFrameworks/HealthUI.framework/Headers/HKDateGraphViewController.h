// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDATEGRAPHVIEWCONTROLLER_H
#define HKDATEGRAPHVIEWCONTROLLER_H

@class NSCalendar, NSString;
@protocol HKGraphViewDelegate;


#import "HKGraphViewController.h"

@interface HKDateGraphViewController : HKGraphViewController <HKGraphViewDelegate>

 {
    BOOL _hasSetVisibleDateRange;
}


@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar
@property (nonatomic) NSInteger dayScopeType; // ivar: _dayScopeType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableXAxis; // ivar: _disableXAxis
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize minimumSize; // ivar: _minimumSize
@property (readonly) Class superclass;


-(id)_createGraphViewWithDateZoom:(NSInteger)arg0 previousDateZoom:(NSInteger)arg1 previousXAxisSpace:(CGFloat)arg2 currentCalendar:(id)arg3 ;
-(id)_dateAxisStyle;
-(id)_xAxisLabelFont;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateZoom:(NSInteger)arg0 previousDateZoom:(NSInteger)arg1 previousXAxisSpace:(CGFloat)arg2 currentCalendar:(id)arg3 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_marginStyleChangeForContext:(NSInteger)arg0 graphView:(id)arg1 ;
-(void)_setupGraphViewSelectionStyle;
-(void)graphView:(id)arg0 didFinishUserScrollingToValueRange:(id)arg1 ;
-(void)graphView:(id)arg0 didUpdateVisibleValueRange:(id)arg1 changeContext:(NSInteger)arg2 ;
-(void)loadView;
-(void)setDetailView:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif