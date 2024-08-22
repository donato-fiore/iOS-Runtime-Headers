// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKATTACHMENTBALLOONVIEW_H
#define CKATTACHMENTBALLOONVIEW_H

@class UIView<CKAttachmentView>;


#import "CKColoredBalloonView.h"

@interface CKAttachmentBalloonView : CKColoredBalloonView

@property (retain, nonatomic) UIView<CKAttachmentView> *attachmentView; // ivar: _attachmentView


-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)overlayImage;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)configureForComposition:(id)arg0 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)richIconDidChange:(id)arg0 ;
-(void)setMediaObject:(id)arg0 ;
-(void)transferUpdated:(id)arg0 ;


@end


#endif