// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHLIBRARYCATEGORYMAP_H
#define SBHLIBRARYCATEGORYMAP_H

@class NSMutableOrderedSet, NSArray, NSDictionary, NSDate, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBHLibraryCategoryMap : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSMutableOrderedSet *_categoryIdentifiers;
}


@property (copy, nonatomic) NSArray *categoryIdentifiers;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSDate *generatedDate; // ivar: _generatedDate
@property (nonatomic) BOOL loadedFromDisk; // ivar: _loadedFromDisk
@property (copy, nonatomic) NSDictionary *localizedCategoryNameByCategoryIdentifier; // ivar: _localizedCategoryNameByCategoryIdentifier
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy, nonatomic) NSDictionary *sortedApplicationIdentifiersByCategoryIdentifier; // ivar: _sortedApplicationIdentifiersByCategoryIdentifier
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)diffMap:(id)arg0 withMap:(id)arg1 ;
-(BOOL)categoriesContainApplicationIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCategoryMap:(id)arg0 ;
-(id)categoryIdentifierForProactiveCategoryIdentifier:(NSUInteger)arg0 ;
-(id)categoryIdentifiersForApplicationIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedCategoryNameForCategoryIdentifier:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)sortedApplicationIdentifiersForCategoryIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif