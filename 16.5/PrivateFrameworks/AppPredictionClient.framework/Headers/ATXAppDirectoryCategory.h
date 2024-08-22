// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPDIRECTORYCATEGORY_H
#define ATXAPPDIRECTORYCATEGORY_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXAppDirectoryCategory : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *appBundleIDs; // ivar: _appBundleIDs
@property (readonly, nonatomic) NSUInteger categoryID; // ivar: _categoryID
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName


+(BOOL)_instanceSpecificLocalizedStringExistsForCategory:(NSUInteger)arg0 ;
+(BOOL)isCategory:(NSUInteger)arg0 descendantOfCategory:(NSUInteger)arg1 ;
+(BOOL)isCategoryScreenTime:(NSUInteger)arg0 ;
+(BOOL)isCategorySpecial:(NSUInteger)arg0 ;
+(BOOL)isCategoryiTunesGamesSubgenre:(NSUInteger)arg0 ;
+(BOOL)isCategoryiTunesGenre:(NSUInteger)arg0 ;
+(BOOL)shouldCategoryAlwaysMergeWithParent:(NSUInteger)arg0 ;
+(BOOL)shouldCategoryNeverMergeWithParent:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)_parentCategoryForiTunesGenreID:(NSUInteger)arg0 ;
+(NSUInteger)appDirectoryCategoryStringToAppDirectoryCategoryID:(id)arg0 ;
+(NSUInteger)parentCategoryForCategory:(NSUInteger)arg0 ;
+(NSUInteger)screenTimeCategoryIDForCategoryIdentifier:(id)arg0 ;
+(id)categoryIdentifierForScreenTimeCategoryID:(NSUInteger)arg0 ;
+(id)localizedStringForCategoryID:(NSUInteger)arg0 ;
+(id)localizedStringForNonScreenTimeCategoryID:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithCategoryID:(NSUInteger)arg0 appBundleIDs:(id)arg1 ;
-(id)initWithCategoryID:(NSUInteger)arg0 appBundleIDs:(id)arg1 localizedName:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedStringForCategoryID:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateAppBundleIDs:(id)arg0 ;
-(void)updateCategoryLocalizedNameWithName:(id)arg0 ;


@end


#endif