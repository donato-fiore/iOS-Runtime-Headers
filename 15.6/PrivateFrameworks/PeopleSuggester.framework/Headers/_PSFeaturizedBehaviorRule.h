// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSFEATURIZEDBEHAVIORRULE_H
#define _PSFEATURIZEDBEHAVIORRULE_H

@class NSMutableDictionary, BMRule;

#import <Foundation/Foundation.h>


@interface _PSFeaturizedBehaviorRule : NSObject

@property (retain, nonatomic) NSMutableDictionary *features; // ivar: _features
@property (retain, nonatomic) BMRule *rule; // ivar: _rule
@property (nonatomic) CGFloat score; // ivar: _score


-(id)initWithRule:(id)arg0 score:(CGFloat)arg1 features:(id)arg2 ;


@end


#endif