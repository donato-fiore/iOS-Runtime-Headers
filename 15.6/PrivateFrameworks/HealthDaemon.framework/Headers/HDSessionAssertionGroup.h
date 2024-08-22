// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSESSIONASSERTIONGROUP_H
#define HDSESSIONASSERTIONGROUP_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HDSessionAssertionGroup : NSObject {
    NSMutableSet *_allAssertions;
    NSMutableDictionary *_assertionsForState;
}


@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(id)init;
-(void)invalidate;
-(void)setupState:(NSInteger)arg0 withAssertions:(id)arg1 ;
-(void)transitionToState:(NSInteger)arg0 ;


@end


#endif