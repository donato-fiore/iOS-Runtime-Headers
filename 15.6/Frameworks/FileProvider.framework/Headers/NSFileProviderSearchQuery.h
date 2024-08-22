// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEPROVIDERSEARCHQUERY_H
#define NSFILEPROVIDERSEARCHQUERY_H

@class NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSFileProviderSearchQuery : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _shouldPerformServerSearch;
    NSString *_scopeFragment;
    NSString *_scopedToItemIdentifierBundleId;
    NSString *_keyboardLanguage;
    NSString *_providerDomainID;
    NSSet *_cachedExtensions;
    NSSet *_allowedUTTypes;
    NSUInteger _trashedItemsMembership;
}


@property (copy, nonatomic) NSSet *allowedContentTypes;
@property (readonly, copy, nonatomic) NSSet *allowedContentTypes; // ivar: _allowedContentTypes
@property (readonly, copy, nonatomic) NSSet *allowedPathExtensions;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSString *filename; // ivar: _filename
@property (nonatomic) BOOL includesTrashedItems;
@property (copy, nonatomic) NSString *keyboardLanguage;
@property (copy, nonatomic) NSString *providerDomainID;
@property (copy, nonatomic) NSString *scopeFragment;
@property (readonly, copy, nonatomic) NSString *scopedToItemIdentifier; // ivar: _scopedToItemIdentifier
@property (readonly, copy, nonatomic) NSString *searchContainerItemIdentifier; // ivar: _searchContainerItemIdentifier
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) BOOL shouldPerformServerSearch;
@property (nonatomic) NSUInteger trashedItemsMembership;


+(BOOL)supportsSecureCoding;
+(id)newSearchContainerItemIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFileProviderSearchQuery:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchScope:(id)arg0 ;
-(id)initWithSearchScopedToItemID:(id)arg0 ;
-(id)initWithSearchScopedToItemIdentifier:(id)arg0 providerDomainID:(id)arg1 searchContainerItemIdentifier:(id)arg2 ;
-(id)predicate;
-(id)toSpotlightQueryString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif