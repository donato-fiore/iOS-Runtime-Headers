// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSURVEYQUESTIONASSETGROUPVIEW_H
#define PXSURVEYQUESTIONASSETGROUPVIEW_H

@class UIView, PHAssetCollection, NSMutableArray;
@protocol PXSurveyQuestionAssetGroupViewDelegate, OS_dispatch_queue;



@interface PXSurveyQuestionAssetGroupView : UIView {
    CGFloat _imagePadding;
}


@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (weak, nonatomic) NSObject<PXSurveyQuestionAssetGroupViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *imageViews; // ivar: _imageViews
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageViewsQueue; // ivar: _imageViewsQueue


-(CGFloat)minXPositionForViewPosition:(unsigned char)arg0 totalNumberOfViews:(unsigned char)arg1 ;
-(CGFloat)minYPositionForViewPosition:(unsigned char)arg0 totalNumberOfViews:(unsigned char)arg1 ;
-(id)_imageViewForPosition:(unsigned char)arg0 totalViewCount:(unsigned char)arg1 ;
-(id)initWithAssetCollection:(id)arg0 ;
-(unsigned char)getHorizontalViewCountForTotalNumberOfViews:(unsigned char)arg0 ;
-(unsigned char)getVerticalViewCountForTotalNumberOfViews:(unsigned char)arg0 ;
-(void)_handleViewTap;
-(void)_loadImagesFromCollection;
-(void)_setupViews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setFrameForSubview:(id)arg0 inPosition:(unsigned char)arg1 ;


@end


#endif