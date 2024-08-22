// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKHEADERVERTICALSCROLLINGLAYOUT_H
#define PKHEADERVERTICALSCROLLINGLAYOUT_H

@class UICollectionViewFlowLayout, NSIndexPath, NSString;
@protocol PKDashboardLayout;



@interface PKHeaderVerticalScrollingLayout : UICollectionViewFlowLayout <PKDashboardLayout>

 {
    NSIndexPath *_headerIndexPath;
    BOOL _needsCustomLocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fade;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCompactInsetForTitle; // ivar: _useCompactInsetForTitle
@property (nonatomic) BOOL useStickyHeader; // ivar: _useStickyHeader


-(BOOL)_indexPathIsHeaderIndexPath:(id)arg0 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)_customAttributesForStickyHeader:(id)arg0 ;
-(id)init;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )insetsForSection:(NSInteger)arg0 ;


@end


#endif