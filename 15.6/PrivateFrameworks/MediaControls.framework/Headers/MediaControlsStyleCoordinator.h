// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDIACONTROLSSTYLECOORDINATOR_H
#define MEDIACONTROLSSTYLECOORDINATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MediaControlsStyleCoordinator : NSObject {
    NSMutableArray *_animations;
    NSMutableArray *_completions;
}




// -(void)animateAlongsideTransition:(id)arg0 completion:(unk)arg1  ;
-(void)performAnimations;
-(void)performCompletions;


@end


#endif