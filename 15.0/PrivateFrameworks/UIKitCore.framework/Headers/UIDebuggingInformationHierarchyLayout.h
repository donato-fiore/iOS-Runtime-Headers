// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDEBUGGINGINFORMATIONHIERARCHYLAYOUT_H
#define UIDEBUGGINGINFORMATIONHIERARCHYLAYOUT_H

@class NSMutableArray, NSDictionary, NSMutableDictionary;
@protocol UIDebuggingInformationHierarchyLayoutDelegate;


#import "UICollectionViewLayout.h"

@interface UIDebuggingInformationHierarchyLayout : UICollectionViewLayout {
    NSMutableArray *_indexPathsToDelete;
}


@property (retain, nonatomic) NSDictionary *allAttributes; // ivar: _allAttributes
@property (retain, nonatomic) NSMutableDictionary *allLineAttributes; // ivar: _allLineAttributes
@property (weak, nonatomic) NSObject<UIDebuggingInformationHierarchyLayoutDelegate> *delegate; // ivar: _delegate


+(Class)layoutAttributesClass;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)_recomputeAttributes;
-(void)invalidateLayout;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareLayout;


@end


#endif