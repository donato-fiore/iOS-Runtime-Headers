// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FUFLIGHTVIEWCONTROLLER_H
#define FUFLIGHTVIEWCONTROLLER_H

@class UIViewController, NSDate, UINavigationBarAppearance, NSString, NSNumber, NSArray;
@protocol MKMapViewDelegate, FUFlightViewDelegate, FUFlightViewControllerDelegate;


#import "FUFlightView.h"

@interface FUFlightViewController : UIViewController <MKMapViewDelegate, FUFlightViewDelegate>

 {
    BOOL _loadingFlight;
    NSDate *_startLoadingDate;
    NSUInteger _displayStyle;
    id<FUFlightViewControllerDelegate> *_delegate;
    BOOL _requiresDataLoad;
    BOOL _viewLoaded;
    UINavigationBarAppearance *_savedAppearance;
}


@property (retain) NSString *airlineCode; // ivar: _airlineCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *flightCode; // ivar: _flightCode
@property (readonly, nonatomic) FUFlightView *flightView;
@property (retain, nonatomic) NSArray *flights; // ivar: _flights
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightCurrentFlightLeg; // ivar: _highlightCurrentFlightLeg
@property (retain) FUFlightView *previewFlightView; // ivar: _previewFlightView
@property (retain) FUFlightView *regularFlightView; // ivar: _regularFlightView
@property (nonatomic) NSInteger selectedFlight;
@property (nonatomic) NSInteger selectedLeg;
@property (nonatomic) BOOL showInfoPanel; // ivar: _showInfoPanel
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)init;
-(id)initWithFlightCode:(NSUInteger)arg0 airlineCode:(id)arg1 ;
-(id)initWithFlights:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSFFlight:(id)arg0 leg:(NSInteger)arg1 style:(NSUInteger)arg2 delegate:(id)arg3 ;
-(id)initWithSFFlights:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)addFittingView:(id)arg0 ;
-(void)awakeFromNib;
-(void)commonInit;
-(void)fadeLayer:(id)arg0 visible:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)flightView:(id)arg0 didSelectLeg:(NSInteger)arg1 ofFlight:(NSInteger)arg2 ;
-(void)hideView:(id)arg0 ;
-(void)loadFlightWithFlightCode:(id)arg0 airlineCode:(id)arg1 date:(id)arg2 ;
-(void)setDisplayStyle:(NSUInteger)arg0 ;
-(void)setNoBackground;
-(void)showErrorView;
-(void)showFlightView;
-(void)showLoadingView;
-(void)showView:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif