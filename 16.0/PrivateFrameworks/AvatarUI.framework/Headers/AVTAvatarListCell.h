// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARLISTCELL_H
#define AVTAVATARLISTCELL_H

@class UICollectionViewCell, AVTView, UIView, AVTStickerConfiguration, NSString, UIImage;
@protocol AVTAvatarTransitionModel, AVTAvatarRecord;


#import "AVTImageTransitioningContainerView.h"

@interface AVTAvatarListCell : UICollectionViewCell <AVTAvatarTransitionModel>



@property (nonatomic) CGSize aspectRatio;
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatar; // ivar: _avatar
@property (retain, nonatomic) AVTView *avtView; // ivar: _avtView
@property (readonly, nonatomic) UIView *avtViewContainer;
@property (retain, nonatomic) AVTStickerConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) AVTImageTransitioningContainerView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)liveView;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg0 ;
-(void)applyBaseAlpha;
-(void)applyFullAlpha;
-(void)beginUsingAVTViewFromSession:(id)arg0 ;
// -(void)downcastWithCellHandler:(id)arg0 listCellHandler:(unk)arg1  ;
-(void)endUsingAVTView;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)transitionLiveViewToFront;
-(void)transitionStaticViewToFront;


@end


#endif