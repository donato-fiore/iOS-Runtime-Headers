// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFACCOUNTCELLDATA_H
#define SFACCOUNTCELLDATA_H

@class NSString, WBSSavedAccount, WBSPasswordWarning;

#import <Foundation/Foundation.h>


@interface SFAccountCellData : NSObject

@property (readonly, copy, nonatomic) NSString *highLevelDomain;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount; // ivar: _savedAccount
@property (readonly, nonatomic) BOOL savedAccountIsOnlySavedAccountForHighLevelDomain; // ivar: _savedAccountIsOnlySavedAccountForHighLevelDomain
@property (readonly, copy, nonatomic) NSString *searchPattern; // ivar: _searchPattern
@property (readonly, nonatomic) WBSPasswordWarning *warning; // ivar: _warning


+(id)accountCellDataWithSavedAccount:(id)arg0 warning:(id)arg1 searchPattern:(id)arg2 savedAccountIsOnlySavedAccountForHighLevelDomain:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithSavedAccount:(id)arg0 warning:(id)arg1 searchPattern:(id)arg2 savedAccountIsOnlySavedAccountForHighLevelDomain:(BOOL)arg3 ;


@end


#endif