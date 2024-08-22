// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXNEWSEARCHTOKEN_H
#define PXNEWSEARCHTOKEN_H

@class NSAttributedString, UIImage, NSString, PSIQueryToken, CSSuggestion;

#import <Foundation/Foundation.h>


@interface PXNewSearchToken : NSObject

@property (readonly, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) BOOL hasLeadingHashtag;
@property (readonly, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isPersistable;
@property (readonly, nonatomic) NSString *priorityAssetUUID; // ivar: _priorityAssetUUID
@property (readonly, nonatomic) PSIQueryToken *queryToken; // ivar: _queryToken
@property (nonatomic) NSUInteger searchUserCategory; // ivar: _searchUserCategory
@property (retain, nonatomic) CSSuggestion *spotlightSuggestion; // ivar: _spotlightSuggestion
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(NSUInteger)_searchUserCategoryForSearchTokenCategory:(NSUInteger)arg0 ;
+(id)_iconForSearchUserCategory:(NSUInteger)arg0 ;
+(id)_imagewithSymbolName:(id)arg0 ;
+(id)px_oneYearAgoSearchToken;
+(id)px_searchTokenForHashtag:(id)arg0 ;
+(id)px_searchTokensFromSiriSearchRequest:(id)arg0 ;
+(id)socialGroupDisplayText;
+(id)symbolNameForSearchUserCategory:(NSUInteger)arg0 ;
+(id)unnamedPersonDisplayText;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToToken:(id)arg0 ;
-(BOOL)isSocialGroup;
-(BOOL)isUnnamedPerson;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithAttributedTitle:(id)arg0 queryToken:(id)arg1 type:(NSUInteger)arg2 priorityAssetUUID:(id)arg3 ;
-(id)initWithAttributedTitle:(id)arg0 searchUserCategory:(NSUInteger)arg1 resultCount:(NSInteger)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSearchText:(id)arg0 searchCategory:(NSUInteger)arg1 ;
-(id)initWithTitle:(id)arg0 queryToken:(id)arg1 type:(NSUInteger)arg2 priorityAssetUUID:(id)arg3 ;


@end


#endif