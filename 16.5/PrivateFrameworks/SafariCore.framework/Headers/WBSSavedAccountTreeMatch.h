// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSAVEDACCOUNTTREEMATCH_H
#define WBSSAVEDACCOUNTTREEMATCH_H

@class NSDictionary, NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface WBSSavedAccountTreeMatch : NSObject

@property (readonly, nonatomic) NSDictionary *accountStoreTreeMatchingSearchCriteria; // ivar: _accountStoreTreeMatchingSearchCriteria
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSMutableArray *flattenedSavedAccountsFromTree;
@property (readonly, nonatomic) NSInteger matchLevel; // ivar: _matchLevel


-(id)initWithDomain:(id)arg0 savedAccountTree:(id)arg1 matchLevel:(NSInteger)arg2 ;
-(void)pruneDontSaveTrees;
-(void)pruneEmptyUsernameTrees;
-(void)pruneTreesWithoutPasswordOrMatchingPasskeyIdentifiers:(id)arg0 ;
-(void)pruneUsernameTreesNotMatchingPartialUsername:(id)arg0 ;


@end


#endif