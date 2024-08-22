// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERGALLERYPREVIEWCOMPLICATIONCONTENTVIEW_H
#define PBFPOSTERGALLERYPREVIEWCOMPLICATIONCONTENTVIEW_H

@class UIView, CSProminentLayoutController, NSMapTable, NSMutableArray, NSArray, BSUIVibrancyEffectView;
@protocol PBFPosterPreview;


#import "PBFComplicationSnapshotRequest.h"

@interface PBFPosterGalleryPreviewComplicationContentView : UIView {
    CSProminentLayoutController *_layoutController;
    NSMapTable *_imageViewsForComplicationSnapshotRequest;
    NSMapTable *_imageViewForComplication;
    NSMutableArray *_complicationImageViews;
    NSMutableArray *_unusedComplicationImageViews;
    NSArray *_complicationSnapshotRequests;
    NSMapTable *_complicationToLayoutElement;
    PBFComplicationSnapshotRequest *_inlineComplicationSnapshotRequest;
    BSUIVibrancyEffectView *_vibrancyEffectView;
}


@property (retain, nonatomic) NSObject<PBFPosterPreview> *posterPreview; // ivar: _posterPreview
@property (nonatomic) CGFloat posterPreviewScale; // ivar: _posterPreviewScale
@property (nonatomic) BOOL preferredCornerRadius; // ivar: _preferredCornerRadius


-(BOOL)_hasComplications;
-(BOOL)_isComplicationSnapshotRequestOurs:(id)arg0 ;
-(CGFloat)_cornerRadiusForComplicationSnapshotRequest:(id)arg0 ;
-(id)_layoutController;
-(id)_placeImageViewForComplication:(id)arg0 snapshotRequest:(id)arg1 ;
-(struct CGRect )_frameForComplication:(id)arg0 ;
-(void)_enumerateImageViewsForComplicationSnapshotRequest:(id)arg0 usingBlock:(id)arg1 ;
-(void)_stopUsingComplicationImageView:(id)arg0 ;
-(void)_updatePreviewWithComplicationImage:(id)arg0 error:(id)arg1 complicationSnapshotRequest:(id)arg2 posterPreview:(id)arg3 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)prepareComplicationPreviewWithGenerator:(id)arg0 ;
-(void)prepareForReuse;
-(void)setComplicationImage:(id)arg0 forComplicationSnapshotRequest:(id)arg1 ;


@end


#endif