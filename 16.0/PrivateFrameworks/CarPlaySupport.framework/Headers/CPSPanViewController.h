// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSPANVIEWCONTROLLER_H
#define CPSPANVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray;
@protocol CPSPanViewDelegate, UIGestureRecognizerDelegate, CPSLinearFocusProviding, CPSPanEventDelegate;


#import "CPSTemplateEnvironment.h"
#import "CPSPanView.h"

@interface CPSPanViewController : UIViewController <CPSPanViewDelegate, UIGestureRecognizerDelegate, CPSLinearFocusProviding>

 {
    BOOL _rightHandDrive;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) CPSTemplateEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *nudgeGestureRecognizers; // ivar: _nudgeGestureRecognizers
@property (weak, nonatomic) NSObject<CPSPanEventDelegate> *panDelegate; // ivar: _panDelegate
@property (retain, nonatomic) CPSPanView *panView; // ivar: _panView
@property (readonly, nonatomic) CGFloat sideButtonTopInset;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;


-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)_linearFocusItems;
-(id)_linearFocusItemsWithPresentedMapButtons:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(void)_handleNudgeLongPress:(id)arg0 ;
-(void)_handleNudgeTapped:(id)arg0 ;
-(void)loadView;
-(void)panView:(id)arg0 panBeganWithDirection:(NSInteger)arg1 ;
-(void)panView:(id)arg0 panEndedWithDirection:(NSInteger)arg1 ;
-(void)panView:(id)arg0 panWithDirection:(NSInteger)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif