// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNKFACETIMEINCALLCONTROLSDRAGCONTROLLER_H
#define CNKFACETIMEINCALLCONTROLSDRAGCONTROLLER_H

@protocol CNKFaceTimeInCallControlsDragControllerDelegate;

#import <Foundation/Foundation.h>


@interface CNKFaceTimeInCallControlsDragController : NSObject {
    ? inCallControlsView;
    ? constraintsController;
    ? panGestureRecognizer;
    ? animation;
    ? disabledScrollViews;
}


@property (nonatomic, weak) NSObject<CNKFaceTimeInCallControlsDragControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) BOOL isDragging;


-(id)init;
-(id)initInCallControlsView:(id)arg0 constraintsController:(id)arg1 ;
-(void)handlePanGestureRecognizer:(id)arg0 ;
-(void)resetGestureRecognizer;


@end


#endif