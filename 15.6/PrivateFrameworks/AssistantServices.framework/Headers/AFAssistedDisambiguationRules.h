// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFASSISTEDDISAMBIGUATIONRULES_H
#define AFASSISTEDDISAMBIGUATIONRULES_H


#import <Foundation/Foundation.h>


@interface AFAssistedDisambiguationRules : NSObject

@property (readonly, nonatomic) CGFloat decisionAge;
@property (readonly, nonatomic) NSUInteger decisionDepth;
@property (readonly, nonatomic) CGFloat decisionThreshold;
@property (readonly, nonatomic) CGFloat maxPersistenceAge;
@property (readonly, nonatomic) NSUInteger maxPersistenceDepth;


+(id)defaultRules;
-(CGFloat)weightForEvent:(id)arg0 ;


@end


#endif