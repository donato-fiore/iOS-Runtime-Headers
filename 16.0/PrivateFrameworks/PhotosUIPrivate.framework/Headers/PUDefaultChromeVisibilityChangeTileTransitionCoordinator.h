// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUDEFAULTCHROMEVISIBILITYCHANGETILETRANSITIONCOORDINATOR_H
#define PUDEFAULTCHROMEVISIBILITYCHANGETILETRANSITIONCOORDINATOR_H



#import "PUDefaultTileTransitionCoordinator.h"
#import "PUBrowsingViewModel.h"

@interface PUDefaultChromeVisibilityChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

@property (retain, nonatomic) PUBrowsingViewModel *viewModel; // ivar: _viewModel


-(id)optionsForAnimatingTileController:(id)arg0 toLayoutInfo:(id)arg1 withAnimationType:(NSInteger)arg2 ;


@end


#endif