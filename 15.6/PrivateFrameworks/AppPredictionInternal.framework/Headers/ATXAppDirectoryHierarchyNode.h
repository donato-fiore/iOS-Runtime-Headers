// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPPDIRECTORYHIERARCHYNODE_H
#define ATXAPPDIRECTORYHIERARCHYNODE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "ATXAppDirectoryHierarchyNode.h"

@interface ATXAppDirectoryHierarchyNode : NSObject

@property (readonly, nonatomic) NSMutableArray *appBundleIDs; // ivar: _appBundleIDs
@property (readonly, nonatomic) NSUInteger categoryID; // ivar: _categoryID
@property (readonly, nonatomic) NSMutableArray *children; // ivar: _children
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (weak, nonatomic) ATXAppDirectoryHierarchyNode *parent; // ivar: _parent
@property (nonatomic) NSUInteger size; // ivar: _size


+(id)dynamicCategoriesForAppBundleIDs:(id)arg0 screenTimeMappings:(id)arg1 iTunesMappings:(id)arg2 ;
+(id)initializeHierarchyForAppBundleIDs:(id)arg0 screenTimeMappings:(id)arg1 iTunesMappings:(id)arg2 ;
+(id)lazyGetNodeForCategoryID:(id)arg0 inDictionary:(id)arg1 ;
-(BOOL)_isRoot;
-(id)_allAppBundleIDs;
-(id)_allNodes;
-(id)_categoryDictionary;
-(id)initWithCategoryID:(NSUInteger)arg0 ;
-(void)_addAppBundleID:(id)arg0 ;
-(void)_addChild:(id)arg0 ;
-(void)_computeSize;
-(void)_displayTree;
-(void)_displayTreeWithCurrString:(id)arg0 ;
-(void)_preorderTraverseWithBlock:(id)arg0 ;


@end


#endif