// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSEARCHCATEGORY_H
#define GEOSEARCHCATEGORY_H

@class NSString, NSURL, NSArray, NSData;
@protocol NSSecureCoding, GEOVenueIdentifier;

#import <Foundation/Foundation.h>

#import "GEOPDBrowseCategory.h"
#import "GEOPDAutocompleteEntry.h"
#import "GEOFeatureStyleAttributes.h"

@interface GEOSearchCategory : NSObject <NSSecureCoding>

 {
    GEOPDBrowseCategory *_browseCategory;
}


@property (readonly, nonatomic, getter=_autocompleteEntry) GEOPDAutocompleteEntry *autocompleteEntry; // ivar: _autocompleteEntry
@property (readonly, nonatomic) int displayMode;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSURL *mapsURL;
@property (readonly, nonatomic) NSString *popularTokenString;
@property (readonly, nonatomic) NSString *shortDisplayString;
@property (readonly, nonatomic) int sortOrder;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic, getter=isSubCategorySameAsTopLevel) BOOL subCategorySameAsTopLevel;
@property (readonly, nonatomic) int subCategoryType;
@property (readonly, nonatomic) NSArray *subcategories; // ivar: _subcategories
@property (readonly, nonatomic, getter=_suggestionEntryMetadata) NSData *suggestionEntryMetadata;
@property (readonly, nonatomic) NSObject<GEOVenueIdentifier> *venueIdentifier;


+(BOOL)supportsSecureCoding;
+(id)categoryForURL:(id)arg0 ;
+(void)sendFeedbackForVisibleCategories:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_browseCategory;
-(id)initWithAutocompleteEntry:(id)arg0 ;
-(id)initWithBrowseCategory:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStorage:(id)arg0 ;
-(id)serverMetadata;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sendFeedback;


@end


#endif