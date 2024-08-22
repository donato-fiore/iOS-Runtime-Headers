// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSIPARSE_H
#define PSIPARSE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "PSIDateFilter.h"

@interface PSIParse : NSObject {
    NSArray *_tokens;
    NSString *_string;
}


@property (copy, nonatomic) PSIDateFilter *dateFilter; // ivar: _dateFilter
@property (readonly, nonatomic) NSArray *datedTokens;
@property (readonly, nonatomic) NSUInteger numberOfTokens;


-(id)description;
-(id)descriptionWithToken:(id)arg0 ;
-(id)initWithToken:(id)arg0 ;
-(id)initWithTokens:(id)arg0 fromString:(id)arg1 ;
-(id)parseByReplacingTokenAtIndex:(NSUInteger)arg0 withToken:(id)arg1 ;
-(id)parseByReplacingTokensInRange:(struct _NSRange )arg0 withTokens:(id)arg1 ;
-(id)tokenAtIndex:(NSUInteger)arg0 ;
-(void)enumerateTokensUsingBlock:(id)arg0 ;


@end


#endif