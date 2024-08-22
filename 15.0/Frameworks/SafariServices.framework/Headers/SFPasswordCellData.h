// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPASSWORDCELLDATA_H
#define SFPASSWORDCELLDATA_H

@class NSString, WBSSavedPassword, WBSPasswordWarning;

#import <Foundation/Foundation.h>


@interface SFPasswordCellData : NSObject

@property (readonly, copy, nonatomic) NSString *highLevelDomain;
@property (readonly, nonatomic) WBSSavedPassword *savedPassword; // ivar: _savedPassword
@property (readonly, nonatomic) BOOL savedPasswordIsOnlySavedPasswordForHighLevelDomain; // ivar: _savedPasswordIsOnlySavedPasswordForHighLevelDomain
@property (readonly, copy, nonatomic) NSString *searchPattern; // ivar: _searchPattern
@property (readonly, nonatomic) WBSPasswordWarning *warning; // ivar: _warning


+(id)passwordCellDataWithSavedPassword:(id)arg0 warning:(id)arg1 searchPattern:(id)arg2 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithSavedPassword:(id)arg0 warning:(id)arg1 searchPattern:(id)arg2 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)arg3 ;


@end


#endif