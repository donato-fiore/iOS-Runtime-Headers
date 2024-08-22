// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSEARCHCONTEXT_H
#define CPSEARCHCONTEXT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CPSearchContext : NSObject

@property (nonatomic) NSInteger maxResults; // ivar: _maxResults
@property (copy) NSArray *protectionClasses; // ivar: _protectionClasses
@property (nonatomic) NSString *searchParamStr; // ivar: _searchParamStr
@property (nonatomic, getter=isTopHitQuery) BOOL topHitQuery; // ivar: _topHitQuery


-(NSUInteger)options;


@end


#endif