// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMESCREENSPOTLIGHTVIEWCONTROLLER_H
#define SBHOMESCREENSPOTLIGHTVIEWCONTROLLER_H

@protocol BSInvalidatable, SBHomeScreenSpotlightDismissalDelegate;


#import "SBSpotlightMultiplexingViewController.h"

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController

@property (readonly, nonatomic) NSObject<BSInvalidatable> *displayLayoutAssertion; // ivar: _displayLayoutAssertion
@property (readonly, weak, nonatomic) NSObject<SBHomeScreenSpotlightDismissalDelegate> *homescreenSpotlightDelegate; // ivar: _homescreenSpotlightDelegate


-(NSUInteger)level;
-(NSUInteger)remoteSearchViewPresentationSource;
-(id)initWithDelegate:(id)arg0 ;
-(void)_setDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)dealloc;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif