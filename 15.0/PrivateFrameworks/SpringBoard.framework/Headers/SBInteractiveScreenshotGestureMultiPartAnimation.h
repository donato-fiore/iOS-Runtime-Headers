// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINTERACTIVESCREENSHOTGESTUREMULTIPARTANIMATION_H
#define SBINTERACTIVESCREENSHOTGESTUREMULTIPARTANIMATION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SBInteractiveScreenshotGestureMultiPartAnimation : NSObject {
    id *_completionHandler;
    NSMutableArray *_pendingAnimationIdentifiers;
}




-(id)initWithCompletionHandler:(id)arg0 ;
-(void)beginAnimationWithIdentifier:(id)arg0 ;
-(void)completeAnimationWithIdentifier:(id)arg0 finished:(BOOL)arg1 retargeted:(BOOL)arg2 ;


@end


#endif