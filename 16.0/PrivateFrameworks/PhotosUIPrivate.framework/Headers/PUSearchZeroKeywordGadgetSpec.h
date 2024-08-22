// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSEARCHZEROKEYWORDGADGETSPEC_H
#define PUSEARCHZEROKEYWORDGADGETSPEC_H

@class PXGadgetSpec, PXExtendedTraitCollection;



@interface PUSearchZeroKeywordGadgetSpec : PXGadgetSpec {
    CGSize _layoutReferenceSize;
    PXExtendedTraitCollection *_traitCollection;
}




-(id)_contentInsetsInterpolator;
-(id)initWithTraitCollection:(id)arg0 scrollAxis:(NSInteger)arg1 ;
-(struct UIEdgeInsets )contentInsets;


@end


#endif