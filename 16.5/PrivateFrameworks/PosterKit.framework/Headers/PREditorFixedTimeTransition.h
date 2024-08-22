// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITORFIXEDTIMETRANSITION_H
#define PREDITORFIXEDTIMETRANSITION_H

@class CSProminentDisplayViewController;

#import <Foundation/Foundation.h>


@interface PREditorFixedTimeTransition : NSObject

@property (retain, nonatomic) CSProminentDisplayViewController *destinationTimeViewController; // ivar: _destinationTimeViewController
@property (retain, nonatomic) CSProminentDisplayViewController *sourceTimeViewController; // ivar: _sourceTimeViewController


-(id)animationKey;
-(id)initWithSourceTimeViewController:(id)arg0 destinationTimeViewController:(id)arg1 anchorView:(id)arg2 ;
-(void)cancelInteractiveTransition;
-(void)cleanUp;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(CGFloat)arg0 ;


@end


#endif