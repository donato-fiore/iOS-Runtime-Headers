// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDEFAULTSWIPEVIEWMANIPULATOR_H
#define _UIDEFAULTSWIPEVIEWMANIPULATOR_H

@class NSString;
@protocol _UISwipeViewManipulator;

#import <Foundation/Foundation.h>


@interface _UIDefaultSwipeViewManipulator : NSObject <_UISwipeViewManipulator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat swipedViewRestingOffset; // ivar: _swipedViewRestingOffset


-(struct CGRect )restingFrameForSwipedView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)moveSwipedView:(id)arg0 atIndexPath:(id)arg1 withSwipeInfo:(struct ? )arg2 animator:(id)arg3 ;
-(void)removeAnimationsFromSwipedView:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif