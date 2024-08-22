// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLCOLLABORATIONATTRIBUTIONVIEW_H
#define SLCOLLABORATIONATTRIBUTIONVIEW_H

@protocol SLCollaborationAttributionViewDelegate;


#import "SLRemoteView.h"

@interface SLCollaborationAttributionView : SLRemoteView {
    ? remoteContentDidLoad;
    ? highlight;
    ? placeholderGlyphConfiguration;
    ? title;
    ? variant;
}


@property (nonatomic) BOOL automaticallyAdjustsMaxWidthToFitBounds; // ivar: automaticallyAdjustsMaxWidthToFitBounds
@property (nonatomic, weak) NSObject<SLCollaborationAttributionViewDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithHighlight:(id)arg0 variant:(NSInteger)arg1 ;
-(id)initWithServiceProxyClass:(Class)arg0 maxWidth:(CGFloat)arg1 ;
-(id)initWithVariant:(NSInteger)arg0 ;
-(id)makePlaceholderSlotContentForStyle:(id)arg0 ;
-(void)layoutSubviews;
-(void)remoteContentIsLoadedValueChanged;
-(void)renderRemoteContentForLayerContextID:(NSInteger)arg0 style:(id)arg1 yield:(id)arg2 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif