// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDRAGANIMATINGWRAPPER_H
#define _UIDRAGANIMATINGWRAPPER_H

@class NSString;
@protocol UIDragAnimating;

#import <Foundation/Foundation.h>

#import "UIViewPropertyAnimator.h"

@interface _UIDragAnimatingWrapper : NSObject <UIDragAnimating>

 {
    UIViewPropertyAnimator *_animator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPropertyAnimator:(id)arg0 ;
-(void)_api_addCompletion:(id)arg0 ;
-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;


@end


#endif