// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IKDOMPROTOTYPEDERIVATIONRULES_H
#define _IKDOMPROTOTYPEDERIVATIONRULES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _IKDOMPrototypeDerivationRules : NSObject

@property (readonly, copy, nonatomic) NSArray *indexPath; // ivar: _indexPath
@property (readonly, copy, nonatomic) NSArray *mutationRules; // ivar: _mutationRules


+(id)derivationRulesForDOMElement:(id)arg0 ;
+(void)removeRulesFromDOMElement:(id)arg0 ;
-(id)initWithIndexPath:(id)arg0 mutationRules:(id)arg1 ;


@end


#endif