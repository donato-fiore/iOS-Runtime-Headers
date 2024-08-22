// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIPRESENTERCONTROLLER_H
#define VUIPRESENTERCONTROLLER_H


#import <Foundation/Foundation.h>


@interface VUIPresenterController : NSObject



+(void)dismissViewController:(id)arg0 completion:(id)arg1 ;
+(void)popOrDismissViewController:(id)arg0 completion:(id)arg1 ;
+(void)popViewController:(id)arg0 completion:(id)arg1 ;
+(void)presentViewController:(id)arg0 fromViewController:(id)arg1 WithConfiguration:(id)arg2 completion:(id)arg3 ;
+(void)pushViewController:(id)arg0 fromViewController:(id)arg1 isAnimated:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif