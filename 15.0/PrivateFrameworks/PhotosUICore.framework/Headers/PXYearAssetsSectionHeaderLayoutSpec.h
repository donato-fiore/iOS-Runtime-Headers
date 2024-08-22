// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXYEARASSETSSECTIONHEADERLAYOUTSPEC_H
#define PXYEARASSETSSECTIONHEADERLAYOUTSPEC_H



#import "PXCuratedLibrarySectionHeaderLayoutSpec.h"

@interface PXYearAssetsSectionHeaderLayoutSpec : PXCuratedLibrarySectionHeaderLayoutSpec {
    UIEdgeInsets padding;
}




-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 padding:(struct UIEdgeInsets )arg2 ;
-(struct UIEdgeInsets )padding;
-(void)setPadding:(struct UIEdgeInsets )arg0 ;


@end


#endif