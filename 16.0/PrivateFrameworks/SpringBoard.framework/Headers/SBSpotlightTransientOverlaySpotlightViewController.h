// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSPOTLIGHTTRANSIENTOVERLAYSPOTLIGHTVIEWCONTROLLER_H
#define SBSPOTLIGHTTRANSIENTOVERLAYSPOTLIGHTVIEWCONTROLLER_H



#import "SBSpotlightMultiplexingViewController.h"

@interface SBSpotlightTransientOverlaySpotlightViewController : SBSpotlightMultiplexingViewController

@property (nonatomic) NSUInteger presentationSource; // ivar: _presentationSource


-(BOOL)_canShowWhileLocked;
-(NSUInteger)level;
-(NSUInteger)remoteSearchViewPresentationSource;


@end


#endif