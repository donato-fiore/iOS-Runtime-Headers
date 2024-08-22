// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMESCREENSPOTLIGHTVIEWCONTROLLER_H
#define SBHOMESCREENSPOTLIGHTVIEWCONTROLLER_H

@class FBDisplayLayoutElement;
@protocol SBHomeScreenSpotlightDismissalDelegate;


#import "SBSpotlightMultiplexingViewController.h"

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController

@property (readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // ivar: _displayLayoutElement
@property (readonly, weak, nonatomic) NSObject<SBHomeScreenSpotlightDismissalDelegate> *homescreenSpotlightDelegate; // ivar: _homescreenSpotlightDelegate


-(NSUInteger)level;
-(NSUInteger)remoteSearchViewPresentationSource;
-(id)initWithDelegate:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif