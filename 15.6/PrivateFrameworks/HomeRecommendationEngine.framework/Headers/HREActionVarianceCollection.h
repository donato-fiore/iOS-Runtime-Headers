// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HREACTIONVARIANCECOLLECTION_H
#define HREACTIONVARIANCECOLLECTION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HREActionVarianceCollection : NSObject

@property (retain, nonatomic) NSMutableDictionary *rules; // ivar: _rules


+(id)varianceRuleCollectionWithRules:(id)arg0 ;
-(BOOL)anyRulePassesForAction:(id)arg0 ;
-(id)initWithRules:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif