// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSEARCHRESULT_H
#define PLSEARCHRESULT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "PSIGroupResult.h"

@interface PLSearchResult : NSObject

@property (readonly, nonatomic) NSUInteger assetCount;
@property (readonly, nonatomic) NSUInteger categoryMask;
@property (readonly, nonatomic) NSArray *contentStrings;
@property (readonly, nonatomic) NSString *groupDescription;
@property (readonly, nonatomic) PSIGroupResult *groupResult; // ivar: _groupResult
@property (readonly, nonatomic) NSString *keyAssetUUID;
@property (readonly, nonatomic) NSArray *lookupIdentifiers;
@property (readonly, nonatomic) NSArray *matchRanges;
@property (readonly) NSString *owningContentString;
@property (readonly, nonatomic) NSArray *searchTokens;
@property (readonly, nonatomic) NSString *transientToken;
@property (readonly, nonatomic) NSUInteger type;


-(BOOL)isContentStringTextSearchableAtIndex:(NSInteger)arg0 ;
-(BOOL)isImplicitlyTokenized;
-(BOOL)isMatchedByIdentifierAtIndex:(NSInteger)arg0 ;
-(NSInteger)categoryAtIndex:(NSInteger)arg0 ;
-(NSUInteger)groupCount;
-(id)initWithGroupResult:(id)arg0 ;
-(id)matchRangesAtIndex:(NSInteger)arg0 ;
-(id)tokensAtIndex:(NSInteger)arg0 ;


@end


#endif