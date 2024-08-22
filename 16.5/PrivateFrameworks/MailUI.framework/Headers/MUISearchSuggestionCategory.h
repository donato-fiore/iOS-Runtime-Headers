// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUISEARCHSUGGESTIONCATEGORY_H
#define MUISEARCHSUGGESTIONCATEGORY_H

@class UIImage, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MUISearchSuggestionCategory.h"

@interface MUISearchSuggestionCategory : NSObject <NSCopying>



@property (copy, nonatomic) UIImage *atomImage; // ivar: _atomImage
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (weak, nonatomic) MUISearchSuggestionCategory *groupingCategory; // ivar: _groupingCategory
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) id *imageInstantiationBlock; // ivar: _imageInstantiationBlock
@property (readonly, nonatomic) BOOL isLegacy; // ivar: _isLegacy
@property (retain, nonatomic) NSString *parsecCategory; // ivar: _parsecCategory
@property (copy, nonatomic) NSArray *scopes; // ivar: _scopes


+(id)allMailboxesCategory;
+(id)contactCategory;
+(id)documentCategory;
+(id)genericCategory;
+(id)linkCategory;
+(id)locationCategory;
+(id)recentGenericCategory;
+(id)recentSearchCategory;
+(id)suggestedSearchCategory;
+(id)topHitsCategory;
-(BOOL)isGroupedInCategory:(id)arg0 ;
-(NSUInteger)indexOfScopeWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDisplayName:(id)arg0 ;
-(id)initWithDisplayName:(id)arg0 groupingCategory:(id)arg1 ;


@end


#endif