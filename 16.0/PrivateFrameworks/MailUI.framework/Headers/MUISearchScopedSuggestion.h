// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUISEARCHSCOPEDSUGGESTION_H
#define MUISEARCHSCOPEDSUGGESTION_H

@class NSPredicate;
@protocol NSSecureCoding;


#import "MUISearchAtomSuggestion.h"
#import "MUISearchSuggestionCategoryScope.h"

@interface MUISearchScopedSuggestion : MUISearchAtomSuggestion <NSSecureCoding>



@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) MUISearchSuggestionCategoryScope *selectedScope;
@property (nonatomic) NSUInteger selectedScopeIndex; // ivar: _selectedScopeIndex
@property (readonly, nonatomic) MUISearchAtomSuggestion *suggestion; // ivar: _suggestion


+(BOOL)supportsSecureCoding;
+(id)scopedSuggestion:(id)arg0 ;
+(id)scopedSuggestion:(id)arg0 selectedScopeIndex:(NSUInteger)arg1 ;
-(id)atomImage;
-(id)atomTitle;
-(id)category;
-(id)contactIdentifier;
-(id)description;
-(id)image;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuggestion:(id)arg0 ;
-(id)initWithSuggestion:(id)arg0 selectedScopeIndex:(NSUInteger)arg1 ;
-(id)predicateWithSelectedScope:(id)arg0 ;
-(id)subtitle;
-(id)title;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif