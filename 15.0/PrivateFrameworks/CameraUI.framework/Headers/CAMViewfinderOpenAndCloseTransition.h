// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMVIEWFINDEROPENANDCLOSETRANSITION_H
#define CAMVIEWFINDEROPENANDCLOSETRANSITION_H

@protocol CAMViewfinderTransitionable;

#import <Foundation/Foundation.h>

#import "CAMSnapshotView.h"

@interface CAMViewfinderOpenAndCloseTransition : NSObject

@property (retain, nonatomic, setter=_setSnapshotView:) CAMSnapshotView *_snapshotView; // ivar: __snapshotView
@property (readonly, weak, nonatomic) NSObject<CAMViewfinderTransitionable> *_transitionableViewfinder; // ivar: __transitionableViewfinder
@property (nonatomic) BOOL didEnterBackground; // ivar: _didEnterBackground


-(id)_existingSnapshotViewCreateIfNecessary:(BOOL)arg0 removedOnCompletion:(BOOL)arg1 ;
-(id)initWithTransitionableViewfinder:(id)arg0 ;
-(void)_closeViewfinder:(BOOL)arg0 animated:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)closeAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)closeWithoutBlurring;
-(void)openAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif