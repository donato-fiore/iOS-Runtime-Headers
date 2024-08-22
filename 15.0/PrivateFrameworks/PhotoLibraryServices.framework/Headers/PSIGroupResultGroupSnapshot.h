// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSIGROUPRESULTGROUPSNAPSHOT_H
#define PSIGROUPRESULTGROUPSNAPSHOT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "PSIDateFilter.h"

@interface PSIGroupResultGroupSnapshot : NSObject

@property (readonly, nonatomic) short category; // ivar: _category
@property (readonly, copy, nonatomic) NSString *contentString; // ivar: _contentString
@property (readonly, copy, nonatomic) PSIDateFilter *dateFilter; // ivar: _dateFilter
@property (readonly, nonatomic) NSArray *datedTokens; // ivar: _datedTokens
@property (readonly, nonatomic) NSUInteger groupId; // ivar: _groupId
@property (readonly, nonatomic) NSArray *groupRanges; // ivar: _groupRanges
@property (readonly, copy, nonatomic) NSString *lookupIdentifier; // ivar: _lookupIdentifier
@property (readonly, nonatomic) NSArray *matchRanges; // ivar: _matchRanges
@property (readonly, copy, nonatomic) NSString *normalizedString; // ivar: _normalizedString
@property (readonly, nonatomic) NSUInteger owningGroupId; // ivar: _owningGroupId
@property (readonly, nonatomic) NSArray *tokens; // ivar: _tokens


-(BOOL)isDateFilterFromFullSearchText;
-(BOOL)isDateFilterFromImplicitToken;
-(BOOL)isDateFilterPartiallyFromFullSearchText;
-(id)initWithContentString:(id)arg0 lookupIdentifier:(id)arg1 category:(short)arg2 ;
-(id)initWithContentString:(id)arg0 normalizedString:(id)arg1 token:(id)arg2 category:(short)arg3 lookupIdentifier:(id)arg4 dateFilter:(id)arg5 groupId:(NSUInteger)arg6 owningGroupId:(NSUInteger)arg7 groupRanges:(id)arg8 datedTokens:(id)arg9 ;
-(id)initWithDateFilter:(id)arg0 datedTokens:(id)arg1 ;
-(id)initWithGroup:(id)arg0 token:(id)arg1 ;
-(void)addMatchRange:(id)arg0 ;
-(void)addToken:(id)arg0 ;


@end


#endif