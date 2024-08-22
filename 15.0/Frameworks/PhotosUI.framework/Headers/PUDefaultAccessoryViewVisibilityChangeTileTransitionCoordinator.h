// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUDEFAULTACCESSORYVIEWVISIBILITYCHANGETILETRANSITIONCOORDINATOR_H
#define PUDEFAULTACCESSORYVIEWVISIBILITYCHANGETILETRANSITIONCOORDINATOR_H



#import "PUDefaultTileTransitionCoordinator.h"
#import "PUBrowsingViewModel.h"

@interface PUDefaultAccessoryViewVisibilityChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

@property (nonatomic) BOOL shouldAnimateAccessory; // ivar: _shouldAnimateAccessory
@property (nonatomic) BOOL shouldAnimateContent; // ivar: _shouldAnimateContent
@property (nonatomic) BOOL shouldSlideAccessory; // ivar: _shouldSlideAccessory
@property (retain, nonatomic) PUBrowsingViewModel *viewModel; // ivar: _viewModel


-(id)_layoutInfoWithDefaultDisappearance:(id)arg0 ;
-(id)optionsForAnimatingTileController:(id)arg0 toLayoutInfo:(id)arg1 withAnimationType:(NSInteger)arg2 ;


@end


#endif