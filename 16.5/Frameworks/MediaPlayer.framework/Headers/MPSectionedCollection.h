// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSECTIONEDCOLLECTION_H
#define MPSECTIONEDCOLLECTION_H

@class NSArray, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, NSObject;

#import <Foundation/Foundation.h>


@interface MPSectionedCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSObject>

 {
    NSArray *_sectionedItems;
    NSArray *_sections;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *firstItem;
@property (readonly, nonatomic) id *firstSection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *lastItem;
@property (readonly, nonatomic) id *lastSection;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger totalItemCount;


+(BOOL)supportsSecureCoding;
-(BOOL)hasSameContentAsSectionedCollection:(id)arg0 ;
-(NSInteger)globalIndexForIndexPath:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)_stateDumpObject;
-(id)allItems;
-(id)allSections;
// -(id)changeDetailsToSectionedCollection:(id)arg0 applyingUIKitWorkarounds:(BOOL)arg1 isEqualBlock:(id)arg2 isUpdatedBlock:(unk)arg3  ;
// -(id)changeDetailsToSectionedCollection:(id)arg0 isEqualBlock:(id)arg1 isUpdatedBlock:(unk)arg2  ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifiersForItemAtIndexPath:(id)arg0 ;
-(id)identifiersForSectionAtIndex:(NSInteger)arg0 ;
-(id)indexPathForGlobalIndex:(NSInteger)arg0 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)itemsInSectionAtIndex:(NSInteger)arg0 ;
// -(id)lazyMapWithSections:(id)arg0 items:(unk)arg1  ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)sectionAtIndex:(NSInteger)arg0 ;
-(void)_initializeAsEmptySectionedCollection;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateItemIdentifiersInSectionAtIndex:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateItemIdentifiersUsingBlock:(id)arg0 ;
-(void)enumerateItemsInSectionAtIndex:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateItemsUsingBlock:(id)arg0 ;
-(void)enumerateSectionIdentifiersUsingBlock:(id)arg0 ;
-(void)enumerateSectionsUsingBlock:(id)arg0 ;


@end


#endif