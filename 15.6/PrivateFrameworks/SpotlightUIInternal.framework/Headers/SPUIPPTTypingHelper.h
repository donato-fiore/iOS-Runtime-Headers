// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPUIPPTTYPINGHELPER_H
#define SPUIPPTTYPINGHELPER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SPUISearchViewController.h"

@interface SPUIPPTTypingHelper : NSObject

@property (copy) id *completion; // ivar: _completion
@property (retain) NSString *currentQueryString; // ivar: _currentQueryString
@property NSUInteger queryKind; // ivar: _queryKind
@property (retain) NSString *queryString; // ivar: _queryString
@property (retain) SPUISearchViewController *searchViewController; // ivar: _searchViewController
@property CGFloat timeSinceLastFire; // ivar: _timeSinceLastFire


-(id)initWithString:(id)arg0 viewController:(id)arg1 queryKind:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)fire:(id)arg0 ;


@end


#endif