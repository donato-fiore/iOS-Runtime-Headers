// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBANIMATIONDELEGATE_H
#define WEBANIMATIONDELEGATE_H


#import <Foundation/Foundation.h>


@interface WebAnimationDelegate : NSObject {
    *void m_owner;
}




-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)setOwner:(*void)arg0 ;


@end


#endif