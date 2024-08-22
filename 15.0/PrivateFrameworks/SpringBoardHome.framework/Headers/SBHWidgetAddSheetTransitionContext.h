// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHWIDGETADDSHEETTRANSITIONCONTEXT_H
#define SBHWIDGETADDSHEETTRANSITIONCONTEXT_H

@class NSString;
@protocol UIViewControllerTransitioningDelegate;

#import <Foundation/Foundation.h>

#import "SBHWidgetAddSheetAnimationController.h"
#import "SBHAddWidgetSheetGalleryCollectionViewCell.h"

@interface SBHWidgetAddSheetTransitionContext : NSObject <UIViewControllerTransitioningDelegate>



@property (retain, nonatomic) SBHWidgetAddSheetAnimationController *animationController; // ivar: _animationController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHAddWidgetSheetGalleryCollectionViewCell *sourceCell; // ivar: _sourceCell
@property (readonly) Class superclass;


-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithSourceCell:(id)arg0 ;
-(void)interruptAnimation;


@end


#endif