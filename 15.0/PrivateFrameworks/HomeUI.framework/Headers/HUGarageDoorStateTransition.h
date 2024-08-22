// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGARAGEDOORSTATETRANSITION_H
#define HUGARAGEDOORSTATETRANSITION_H


#import <Foundation/Foundation.h>


@interface HUGarageDoorStateTransition : NSObject

@property (nonatomic) BOOL fromOpenState; // ivar: _fromOpenState
@property (nonatomic) BOOL toOpenState; // ivar: _toOpenState


+(id)transitionFromState:(BOOL)arg0 toState:(BOOL)arg1 ;


@end


#endif