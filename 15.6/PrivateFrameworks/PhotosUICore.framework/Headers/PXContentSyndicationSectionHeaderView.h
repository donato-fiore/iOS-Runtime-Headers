// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCONTENTSYNDICATIONSECTIONHEADERVIEW_H
#define PXCONTENTSYNDICATIONSECTIONHEADERVIEW_H

@class UIView, SLAttributionView, NSString, SLHighlight;
@protocol SLAttributionViewDelegate, PXContentSyndicationSectionHeaderViewDelegate;


#import "PXPhotosSectionHeaderLayoutSpec.h"

@interface PXContentSyndicationSectionHeaderView : UIView <SLAttributionViewDelegate>

 {
    SLAttributionView *_socialLayerAttributionView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXContentSyndicationSectionHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SLHighlight *socialLayerHighlight; // ivar: _socialLayerHighlight
@property (retain, nonatomic) PXPhotosSectionHeaderLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(id)contextMenuItemsForAttributionView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_performLayoutInWidth:(CGFloat)arg0 applyLayoutToSubviews:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updatePillAlignmentWithTraitCollection:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif