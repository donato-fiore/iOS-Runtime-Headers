// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKORGANICIMAGEBALLOONVIEW_H
#define CKORGANICIMAGEBALLOONVIEW_H



#import "CKImageBalloonView.h"
#import "CKBalloonImageView.h"
#import "CKOrganicImageLayoutRecipe.h"

@interface CKOrganicImageBalloonView : CKImageBalloonView

@property (retain, nonatomic) CKBalloonImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) CKOrganicImageLayoutRecipe *layoutRecipe; // ivar: _layoutRecipe


-(BOOL)canUseOpaqueMask;
-(BOOL)suppressMask;
-(id)createOverlayImageView;
-(id)image;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)invisibleInkEffectImage;
-(id)tailMask;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct CKBalloonDescriptor_t )balloonDescriptor;
-(void)addFilter:(id)arg0 ;
-(void)attachInvisibleInkEffectView;
-(void)configureForMessagePart:(id)arg0 ;
-(void)detachInvisibleInkEffectView;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setInvisibleInkEffectImage:(id)arg0 ;


@end


#endif