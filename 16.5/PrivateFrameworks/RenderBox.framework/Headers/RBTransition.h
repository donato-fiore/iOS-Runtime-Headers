// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBTRANSITION_H
#define RBTRANSITION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface RBTransition : NSObject {
    Transition _transition;
    BOOL _is_default;
}


@property (nonatomic) float addRemoveDuration;
@property (readonly, copy, nonatomic) NSArray *effects;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) unsigned int method;
@property (nonatomic, getter=isReplaceable) BOOL replaceable;


+(id)defaultTransition;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)addEffect:(id)arg0 ;


@end


#endif