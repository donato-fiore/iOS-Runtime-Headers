// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDRULE_H
#define WBSPASSWORDRULE_H


#import <Foundation/Foundation.h>


@interface WBSPasswordRule : NSObject

@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)ruleWithType:(NSInteger)arg0 value:(id)arg1 ;
-(id)initWithPasswordRuleType:(NSInteger)arg0 value:(id)arg1 ;


@end


#endif