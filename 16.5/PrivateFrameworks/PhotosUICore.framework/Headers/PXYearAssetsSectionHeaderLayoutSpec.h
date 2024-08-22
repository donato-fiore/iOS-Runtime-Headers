// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXYEARASSETSSECTIONHEADERLAYOUTSPEC_H
#define PXYEARASSETSSECTIONHEADERLAYOUTSPEC_H



#import "PXCuratedLibrarySectionHeaderLayoutSpec.h"

@interface PXYearAssetsSectionHeaderLayoutSpec : PXCuratedLibrarySectionHeaderLayoutSpec {
    UIEdgeInsets padding;
}




-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 padding:(struct UIEdgeInsets )arg2 variant:(NSInteger)arg3 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 variant:(NSInteger)arg2 ;
-(struct UIEdgeInsets )padding;
-(void)setPadding:(struct UIEdgeInsets )arg0 ;


@end


#endif