// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBPOLICYDECISIONLISTENERPRIVATE_H
#define WEBPOLICYDECISIONLISTENERPRIVATE_H


#import <Foundation/Foundation.h>


@interface WebPolicyDecisionListenerPrivate : NSObject {
    RetainPtr<id> target;
    SEL action;
}




-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif