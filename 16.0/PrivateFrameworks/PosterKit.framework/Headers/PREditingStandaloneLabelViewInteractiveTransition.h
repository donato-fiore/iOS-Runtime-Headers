// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGSTANDALONELABELVIEWINTERACTIVETRANSITION_H
#define PREDITINGSTANDALONELABELVIEWINTERACTIVETRANSITION_H

@class NSString;
@protocol PREditingStandaloneLabelViewTransitioning, BSDescriptionStreamable;

#import <Foundation/Foundation.h>

#import "PREditingStandaloneLabelView.h"

@interface PREditingStandaloneLabelViewInteractiveTransition : NSObject <PREditingStandaloneLabelViewTransitioning, BSDescriptionStreamable>



@property (readonly, copy, nonatomic) NSString *currentText; // ivar: _currentText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PREditingStandaloneLabelView *label; // ivar: _label
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *transitionText; // ivar: _transitionText


-(id)initWithLabel:(id)arg0 currentText:(id)arg1 transitionText:(id)arg2 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(CGFloat)arg0 ;


@end


#endif