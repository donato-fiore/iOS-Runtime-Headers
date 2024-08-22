// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCFITTINGIMAGEVIEW_H
#define DOCFITTINGIMAGEVIEW_H

@class UIImageView, NSLayoutConstraint, NSString;
@protocol DOCThumbnailListener, DOCFittingImageViewDelegate, DOCThumbnail;



@interface DOCFittingImageView : UIImageView <DOCThumbnailListener>



@property (retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint; // ivar: _aspectRatioConstraint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DOCFittingImageViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize fittingSize; // ivar: _fittingSize
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<DOCThumbnail> *thumbnail; // ivar: _thumbnail


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)initCommon;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 ;
-(void)thumbnailLoaded:(id)arg0 ;


@end


#endif