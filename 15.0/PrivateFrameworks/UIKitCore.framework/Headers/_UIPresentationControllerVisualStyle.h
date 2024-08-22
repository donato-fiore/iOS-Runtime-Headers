// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPRESENTATIONCONTROLLERVISUALSTYLE_H
#define _UIPRESENTATIONCONTROLLERVISUALSTYLE_H


#import <Foundation/Foundation.h>

#import "UIPresentationController.h"

@interface _UIPresentationControllerVisualStyle : NSObject

@property (readonly, nonatomic) UIPresentationController *presentationController; // ivar: _presentationController


-(id)initWithPresentationController:(id)arg0 ;
-(void)runAlongsidePresentation:(BOOL)arg0 transitionCoordinator:(id)arg1 ;
-(void)runAlongsideTransitionFromPresentationController:(id)arg0 transitionCoordinator:(id)arg1 ;
-(void)runAlongsideTransitionToPresentationController:(id)arg0 transitionCoordinator:(id)arg1 ;


@end


#endif