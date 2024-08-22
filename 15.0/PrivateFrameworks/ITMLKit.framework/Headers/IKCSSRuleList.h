// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKCSSRULELIST_H
#define IKCSSRULELIST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface IKCSSRuleList : NSObject {
    NSMutableArray *rules;
}




-(NSUInteger)count;
-(id)description;
-(id)firstRule;
-(id)init;
-(id)lastRule;
-(id)ruleAtIndex:(NSUInteger)arg0 ;
-(void)addRule:(id)arg0 ;


@end


#endif