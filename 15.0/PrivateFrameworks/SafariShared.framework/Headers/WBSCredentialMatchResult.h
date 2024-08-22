// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCREDENTIALMATCHRESULT_H
#define WBSCREDENTIALMATCHRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WBSCredentialMatchResult : NSObject

@property (readonly, copy, nonatomic) NSArray *associatedDomainMatches; // ivar: _associatedDomainMatches
@property (readonly, copy, nonatomic) NSArray *exactMatches; // ivar: _exactMatches
@property (readonly, copy, nonatomic) NSArray *potentialMatches; // ivar: _potentialMatches


-(id)initWithExactMatches:(id)arg0 potentialMatches:(id)arg1 associatedDomainMatches:(id)arg2 ;


@end


#endif