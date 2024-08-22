// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVSPEECHCATEGORYGROUP_H
#define CKVSPEECHCATEGORYGROUP_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface CKVSpeechCategoryGroup : NSObject

@property (readonly, nonatomic) NSSet *itemTypes; // ivar: _itemTypes
@property (readonly, nonatomic) NSSet *speechCategories; // ivar: _speechCategories


+(BOOL)_speechCategory:(id)arg0 hasFieldTypes:(id)arg1 ;
+(id)_calculateGroupForItemTypeNumber:(id)arg0 ;
+(id)_categoryToFieldTypeMap;
+(id)_categoryToItemTypeCache;
+(id)_itemTypesForSpeechCategory:(id)arg0 ;
+(id)all;
+(id)groupForFieldTypes:(id)arg0 ;
+(id)groupForItemType:(NSInteger)arg0 ;
+(id)groupForSpeechCategories:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpeechCategoryGroup:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithItemTypes:(id)arg0 speechCategories:(id)arg1 ;


@end


#endif