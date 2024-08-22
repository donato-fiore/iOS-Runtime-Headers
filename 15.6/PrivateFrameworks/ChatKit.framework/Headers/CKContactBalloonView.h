// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONTACTBALLOONVIEW_H
#define CKCONTACTBALLOONVIEW_H

@class UIImageView, NSString, UILabel;
@protocol CKContactBalloonViewProtocol;


#import "CKColoredBalloonView.h"
#import "CKMediaObject.h"

@interface CKContactBalloonView : CKColoredBalloonView <CKContactBalloonViewProtocol>



@property (retain, nonatomic) UIImageView *chevron; // ivar: _chevron
@property (retain, nonatomic) UIImageView *contactImageView; // ivar: _contactImageView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKMediaObject *mediaObject; // ivar: _mediaObject
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UILabel *organizationLabel; // ivar: _organizationLabel
@property (readonly) Class superclass;


-(CGFloat)contactImageWidth;
-(id)_truncateNameIfNeeded:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)addOverlaySubview:(id)arg0 ;
-(void)configureForComposition:(id)arg0 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;


@end


#endif