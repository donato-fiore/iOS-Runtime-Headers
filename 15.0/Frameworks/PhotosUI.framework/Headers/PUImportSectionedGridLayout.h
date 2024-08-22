// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIMPORTSECTIONEDGRIDLAYOUT_H
#define PUIMPORTSECTIONEDGRIDLAYOUT_H

@class UIColor, NSMutableDictionary, NSArray;
@protocol PUImportSectionedGridLayoutDelegate;


#import "PUSectionedGridLayout.h"

@interface PUImportSectionedGridLayout : PUSectionedGridLayout {
    BOOL _delegateSupportsPerSectionHighlight;
}


@property (weak, nonatomic) NSObject<PUImportSectionedGridLayoutDelegate> *delegate;
@property (retain, nonatomic) UIColor *emphasizedSectionBackgroundColor; // ivar: _emphasizedSectionBackgroundColor
@property (retain, nonatomic) UIColor *emphasizedSectionBottomStrokeColor; // ivar: _emphasizedSectionBottomStrokeColor
@property (nonatomic) CGFloat emphasizedSectionBottomStrokeWidth; // ivar: _emphasizedSectionBottomStrokeWidth
@property (retain, nonatomic) NSMutableDictionary *preUpdateSectionDecorationAttributesBySection; // ivar: _preUpdateSectionDecorationAttributesBySection
@property (retain, nonatomic) NSMutableDictionary *sectionDecorationAttributesBySection; // ivar: _sectionDecorationAttributesBySection
@property (retain, nonatomic) NSArray *sectionIndexPathsBeingDeleted; // ivar: _sectionIndexPathsBeingDeleted


+(Class)layoutAttributesClass;
-(id)createLayoutAttributesForSectionBackgroundAtSection:(NSUInteger)arg0 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg0 ;
-(id)init;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(void)finalizeCollectionViewUpdates;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareLayout;
-(void)recreateSectionDecorationAttributes;


@end


#endif