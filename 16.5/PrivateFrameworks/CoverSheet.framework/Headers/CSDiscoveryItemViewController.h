// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDISCOVERYITEMVIEWCONTROLLER_H
#define CSDISCOVERYITEMVIEWCONTROLLER_H

@class UIViewController, NSString, PLPlatterDiscoveryView;
@protocol CSListItemHosting;



@interface CSDiscoveryItemViewController : UIViewController <CSListItemHosting>



@property (nonatomic) CGFloat containerCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *firstDidAppearCompletion; // ivar: _firstDidAppearCompletion
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isListAppeared) BOOL listAppeared;
@property (retain, nonatomic) PLPlatterDiscoveryView *platterDiscoveryView; // ivar: _platterDiscoveryView
@property (nonatomic, getter=isScreenOn) BOOL screenOn; // ivar: _screenOn
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(BOOL)_canShowWhileLocked;
-(id)initWithPlatterDiscoveryView:(id)arg0 firstDidAppearCompletion:(id)arg1 ;
-(void)_callFirstDidAppearCompletionIfNecessary;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif