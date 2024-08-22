// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUBROWSINGLAYOUTTOLAYOUTTILETRANSITIONCOORDINATOR_H
#define PUBROWSINGLAYOUTTOLAYOUTTILETRANSITIONCOORDINATOR_H



#import "PUDefaultLayoutToLayoutTileTransitionCoordinator.h"

@interface PUBrowsingLayoutToLayoutTileTransitionCoordinator : PUDefaultLayoutToLayoutTileTransitionCoordinator



-(BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)arg0 toLayoutInfo:(id)arg1 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg0 fromLayoutInfo:(id)arg1 ;
-(id)newTileAnimationOptions;
-(id)optionsForAnimatingTileController:(id)arg0 toLayoutInfo:(id)arg1 withAnimationType:(NSInteger)arg2 ;


@end


#endif