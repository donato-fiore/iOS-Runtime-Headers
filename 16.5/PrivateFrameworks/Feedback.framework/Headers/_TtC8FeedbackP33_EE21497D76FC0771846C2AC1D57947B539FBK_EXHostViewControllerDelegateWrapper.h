// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8FEEDBACKP33_EE21497D76FC0771846C2AC1D57947B539FBK_EXHOSTVIEWCONTROLLERDELEGATEWRAPPER_H
#define _TTC8FEEDBACKP33_EE21497D76FC0771846C2AC1D57947B539FBK_EXHOSTVIEWCONTROLLERDELEGATEWRAPPER_H

@protocol _EXHostViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8FeedbackP33_EE21497D76FC0771846C2AC1D57947B539FBK_EXHostViewControllerDelegateWrapper : NSObject <_EXHostViewControllerDelegate>

 {
    ? controller;
}




-(id)init;
-(void)hostViewController:(id)arg0 didBeginHosting:(id)arg1 ;
-(void)hostViewController:(id)arg0 didFailToHost:(id)arg1 error:(id)arg2 ;


@end


#endif