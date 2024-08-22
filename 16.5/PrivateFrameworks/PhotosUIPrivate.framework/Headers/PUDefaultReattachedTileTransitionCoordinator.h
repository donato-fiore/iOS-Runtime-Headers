// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUDEFAULTREATTACHEDTILETRANSITIONCOORDINATOR_H
#define PUDEFAULTREATTACHEDTILETRANSITIONCOORDINATOR_H



#import "PUDefaultTileTransitionCoordinator.h"
#import "PUTileReattachmentContext.h"

@interface PUDefaultReattachedTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

@property (retain, nonatomic) PUTileReattachmentContext *context; // ivar: _context


-(id)optionsForAnimatingTileController:(id)arg0 toLayoutInfo:(id)arg1 withAnimationType:(NSInteger)arg2 ;


@end


#endif