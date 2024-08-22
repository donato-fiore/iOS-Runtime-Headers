// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTEXTCOMPONENTVIEWCONTROLTRACKER_H
#define CKTEXTCOMPONENTVIEWCONTROLTRACKER_H

@class NSTextCheckingResult;

#import <Foundation/Foundation.h>


@interface CKTextComponentViewControlTracker : NSObject {
    NSTextCheckingResult *_trackingTextCheckingResult;
}




-(BOOL)beginTrackingForTextComponentView:(id)arg0 withTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingForTextComponentView:(id)arg0 withTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_sendActionsToControl:(id)arg0 forControlEvents:(NSUInteger)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingForTextComponentView:(id)arg0 withEvent:(id)arg1 ;
-(void)endTrackingForTextComponentView:(id)arg0 withTouch:(id)arg1 withEvent:(id)arg2 ;


@end


#endif