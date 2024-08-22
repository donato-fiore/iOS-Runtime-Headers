// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSELECTIONCONTAINER_H
#define PXSELECTIONCONTAINER_H

@class PHCollection, NSString, NSUndoManager;
@protocol PXFastEnumeration;

#import <Foundation/Foundation.h>

#import "PXContentPrivacyController.h"
#import "PXSelectionSnapshot.h"

@interface PXSelectionContainer : NSObject

@property (readonly, nonatomic) NSObject<PXFastEnumeration> *allDataSourceObjects; // ivar: _allDataSourceObjects
@property (readonly, nonatomic) BOOL allowImplicitSelectionForProjectsOrSharing;
@property (readonly, nonatomic) PHCollection *collection; // ivar: _collection
@property (readonly, nonatomic) BOOL containsAssetsWithNonEditableProperties;
@property (readonly, nonatomic) BOOL containsContentSyndicationAssets;
@property (readonly, nonatomic) BOOL containsNonContentSyndicationAssets;
@property (readonly, nonatomic) BOOL containsRAWAssets;
@property (readonly, nonatomic) BOOL containsRAWPlusJPEGAssets;
@property (readonly, nonatomic) BOOL containsReferencedFileAssets;
@property (readonly, nonatomic) BOOL containsUnsavedContentSyndicationAssets;
@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, nonatomic) BOOL hasExplicitSelection;
@property (readonly, nonatomic) PXContentPrivacyController *privacyController; // ivar: _privacyController
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *selectedContainedAssets;
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *selectedContainedAssetsForProjectsOrSharing;
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *selectedObjects; // ivar: _selectedObjects
@property (readonly, nonatomic) NSInteger selectionCount;
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager


-(BOOL)containsObjectOfClass:(Class)arg0 passingTest:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSelection:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithContent:(id)arg0 collection:(id)arg1 undoManager:(id)arg2 context:(NSInteger)arg3 ;
-(id)initWithContent:(id)arg0 undoManager:(id)arg1 context:(NSInteger)arg2 ;
-(id)initWithSelectionSnapshot:(id)arg0 collection:(id)arg1 undoManager:(id)arg2 context:(NSInteger)arg3 ;
-(id)initWithSelectionSnapshot:(id)arg0 collection:(id)arg1 undoManager:(id)arg2 context:(NSInteger)arg3 privacyController:(id)arg4 ;
-(id)initWithSelectionSnapshot:(id)arg0 undoManager:(id)arg1 context:(NSInteger)arg2 ;
-(id)initWithSelectionSnapshot:(id)arg0 undoManager:(id)arg1 context:(NSInteger)arg2 privacyController:(id)arg3 ;
-(id)selectedContainedAssets:(BOOL)arg0 ;
-(id)selectedContainedAssets:(BOOL)arg0 allowedClasses:(id)arg1 ;
-(id)selectedObjects:(BOOL)arg0 ;
-(void)enumerateSelectedObjectsOfClass:(Class)arg0 usingBlock:(id)arg1 ;


@end


#endif